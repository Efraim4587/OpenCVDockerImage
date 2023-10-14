#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat image = cv::imread("image.jpg", cv::IMREAD_COLOR);
    if (image.empty()) {
        std::cerr << "Error: Couldn't open or read the image." << std::endl;
        return -1;
    }

    cv::Mat grayImage;
    cv::cvtColor(image, grayImage, cv::COLOR_BGR2GRAY);

    cv::imwrite("output.jpg", grayImage);
    std::cout << "Image processing complete. Result saved as output.jpg." << std::endl;

    return 0;
}
