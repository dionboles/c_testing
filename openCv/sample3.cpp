#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// video Streaming 
// g++ $(pkg-config --cflags --libs opencv) -std=c++11  sample1.cpp run flags 
//Loading Opencv 
#include "opencv2/opencv.hpp"
using namespace cv;
int main(int argc, char const *argv[])
{
    // Write data to file 
    FileStorage fs("test.yml",FileStorage::WRITE);
    int fps = 5;
    fs << "fps" << fps;
    Mat m1 = Mat::eye(2,3,CV_32F);
    Mat m2 = Mat::ones(3,2,CV_32F);
    Mat result = (m1+1).mul(m1+3);
    fs << "Result" << result;
    fs.release();
    // Read data from file
    FileStorage fs2("test.yml",FileStorage::READ);
    Mat r;
    fs2["Result"] >> r;
    cout << r << endl;
    fs2.release();
    
    return 0;
}
