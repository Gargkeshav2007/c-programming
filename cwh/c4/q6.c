#include <stdio.h>

int main(){
    int i = 0 ;
    int sum = 0 ;
    for (i = 0; i <= 10; i++)
    {
        sum += i;
    }
    printf("The sum of first 10 natural numbers is %d ", sum);
    return 0;
}