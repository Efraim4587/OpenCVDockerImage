#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;

int main() {
    // Read the input image
    Mat img = imread("image.jpg");

    if (img.empty()) {
        std::cerr << "Error: Unable to read the input image." << std::endl;
        return 1;
    }

    // Apply an antique-style effect (faded brown)
    Mat antiqueImg;
    antiqueImg = 0.5 * img + Scalar(70, 60, 40);  // Adjust these values for the desired effect

    // Save the processed image
    imwrite("processed.jpg", antiqueImg);

    return 0;
}
