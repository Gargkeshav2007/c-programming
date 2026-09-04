#include <stdio.h>

int main(){
    int c , f;
    printf("enter the temperature in celsius");
    scanf ("%d",&c);
    f= (c*9/5)+32;
    printf("The temperature in farheniet is %d", f);
    return 0;
}