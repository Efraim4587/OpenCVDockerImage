FROM ubuntu:latest 

RUN apt-get update && \
    apt-get install -y \
    build-essential \
    cmake \
    git \
    wget \
    unzip \
    python3-dev \
    python3-pip

RUN pip3 install numpy

WORKDIR /app

RUN wget -O opencv.zip https://github.com/opencv/opencv/archive/master.zip && \
    unzip opencv.zip && \  
    mkdir build && cd build && \
    cmake ../opencv-master \
          -DBUILD_TESTS=OFF \
          -DBUILD_PERF_TESTS=OFF && \
    make -j$(nproc) && \
    make install && \
    ldconfig

COPY . /app/

RUN cmake . && make

CMD ["/app/bw"]
VOLUME /output