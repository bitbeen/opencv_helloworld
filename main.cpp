#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

int main() {
    std::cout << "Hello, World!" << std::endl;
    cv::Mat image;
    image = cv::imread("../hello.jpeg", cv::IMREAD_COLOR);
    std::cout << "this images is " << image.rows << " x:" << image.cols << std::endl;
    cv::circle(image, cv::Point(155, 110), 65, 0, 3);
    cv::namedWindow("images");
    cv::imshow("images", image);

    cv::waitKey(0);
    return 0;
}