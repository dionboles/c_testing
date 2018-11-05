#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// video Streaming 
// g++ $(pkg-config --cflags --libs opencv) -std=c++11  sample1.cpp run flags 
//Loading Opencv 
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;
int main(int argc, char const *argv[])
{
    /* code */
    VideoCapture cap;
    cap.open(0);
    if(!cap.isOpened()){
        return -1;
    }
        namedWindow("Video",1);
        for(;;){
            Mat frame;
            cap >> frame;
            imshow("Video",frame);
            if(waitKey(30) >= 0) break;
        }
     cap.release();
    return 0;
}
