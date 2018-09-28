#include <stdio.h>
#include <math.h>
#include <iostream> 
#include <fstream>
#define KILOS_PER_POUND .45359
std::ofstream outfile("out.dat",std::ios::out);
int main(int argc, char const *argv[]){
    int pounds;
    // printf(" US lbs      UK st. lbs       INT Kg\n");
    // for(pounds = 10; pounds < 250; pounds+=10){
    //     int stones = pounds / 14;
    //             int uklbs = pounds % 14;
    //             float kilos = pounds * KILOS_PER_POUND;
    //             printf("   %d           %d   %d        %f\n",
    //                                pounds, stones, uklbs, round(kilos));
    // }
    for (pounds = 10; pounds < 250; pounds+=10) { 
        int stones = pounds / 14;
        int uklbs = pounds % 14;
        float kilos = pounds * KILOS_PER_POUND;
        outfile << pounds <<"   " << stones <<"   " <<  uklbs <<"   " << round(kilos) << "\n"; 
    } 
    
    return 0;
}
