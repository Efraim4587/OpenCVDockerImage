FROM eb65190/opencv:v1.0

VOLUME /output 

WORKDIR /app

COPY . .

RUN cmake . && make 

CMD ["./process_image"]