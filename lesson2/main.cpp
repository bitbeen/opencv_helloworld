#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>

/**
 * 矩阵的掩膜操作
 *  获取图像像素指针
 *  掩膜操作解释
 *  代码演示
 * @return
 */
int main(){
    std::cout << "Hello, World!" << std::endl;
    cv::Mat image;
    image = cv::imread("/Users/wen/workspace/cplusworkspace/opencv_helloworld/hello.jpeg");
    if(!image.data){
        std::cout<<"images not exist"<<std::endl;
        return 0;
    }
    std::cout << "this images is " << image.rows << " x:" << image.cols << std::endl;


    cv::namedWindow("images");
    cv::imshow("images",image);
    cv::waitKey(0);

    return  0;
}