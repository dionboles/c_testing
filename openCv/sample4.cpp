#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//Loading Opencv 
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
using namespace cv;

// const int CV_GUI_NORMAL = 0x10;

int main(int argc, char const *argv[]){
    /* code */
    Mat color = imread("./img/lena.jpg");
    Mat gray = imread("./img/lena.jpg",0);
   // make windows
    namedWindow("Lena",WINDOW_NORMAL);
    namedWindow("Gray",WINDOW_AUTOSIZE);
    // move windows on screen
    moveWindow("Lena",10,10);
    moveWindow("Gray",520,10);
    //Show image
    imshow("Lena",color);
    imshow("Gray",gray);
    // Resize window to non autosize
    resizeWindow("Lena",512,512);
    // Wait for key press to close
    waitKey(0);
    // Kills windows
    destroyWindow("Lena");
    destroyWindow("Gray");

    for (int i = 0; i < 10; i++){
        ostringstream ss;
        ss << "Gray" << i;
        namedWindow(ss.str());
        moveWindow(ss.str(), 20*i,20*i);
        imshow(ss.str(),gray);
    }
    waitKey(0);
    destroyAllWindows();
    return 0;
}
