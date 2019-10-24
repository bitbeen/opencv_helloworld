#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

int main() {
    std::cout << "Hello, World!" << std::endl;
    cv::Mat image;
    image = cv::imread("/Users/wen/workspace/cplusworkspace/opencv_helloworld/hello.jpeg");
    std::cout << "this images is " << image.rows << " x:" << image.cols << std::endl;

    cv::namedWindow("in");
    cv::imshow("in", image);

    cv::Mat images2;
    cv::namedWindow("out");
    //图像修改
    cv::cvtColor(image,images2,cv::COLOR_BGR2HLS);
    cv::imshow("out",images2);
    cv::imwrite("./h1.jpeg",images2);
    cv::waitKey(0);
    return 0;
}