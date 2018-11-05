#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//Loading Opencv 
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;
int main(int argc, char const *argv[])
{
    /* code */
    Mat color = imread("./img/lena.jpg");
    Mat gray = imread("./img/lena.jpg",0);
    imwrite("test.jpg",gray);
    imshow("Color",color);
    imshow("Black and White",gray);
    waitKey(0);
    return 0;
}
