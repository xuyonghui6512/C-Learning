#include <iostream>
#include <opencv2/opencv.hpp>
int main() {
    cv::Mat a=cv::imread("/Users/panda_xu/Documents/C++Project/testOp/1.jpg");
    cv::imshow("1",a);
    cv::waitKey(0);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}