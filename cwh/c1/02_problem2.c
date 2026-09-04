#include <stdio.h>

int main(){
    int r = 6;
    int height = 10;
    printf("The area of the circle with radius %d is %0.2f\n", r , 3.14*r*r );
    printf("The volume of the cylinder with radius %d and height %d is %0.2f\n", r, height, 3.14*r*r*height);
    return 0;
}