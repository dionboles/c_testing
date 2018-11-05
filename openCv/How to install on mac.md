# How to install opencv for mac using homebrew 
- brew install opencv 
-  brew install pkg-config
-  brew install cmake


#Build cmake txt file 

cmake CMakeList.txt                                          


# flags for c++ 
g++ $(pkg-config --cflags --libs opencv) -std=c++11  sample1.cpp



#read 
https://blogs.wcode.org/2014/10/howto-install-build-and-use-opencv-macosx-10-10/