#include "stdio.h"

int swape(int a,int b);

int main(int argc, char const *argv[])
{
    int ba = swape(1020,109);
    printf("%i this is a swaped value \"Dan\"",ba);
    return 0;
}

int swape(int a, int b){
    int tmp;
    tmp = a;
    a = b; 
    b = tmp; 
    return b;

}
