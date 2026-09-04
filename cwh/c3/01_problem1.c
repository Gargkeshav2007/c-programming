#include <stdio.h>

int main(){
    int marks1 ,marks2,marks3;
    printf("Enter the marks1: \n ");
    scanf("%d",&marks1);
    printf("Enter the marks2: \n ");
    scanf("%d",&marks2);
    printf("Enter the marks3: \n");
    scanf("%d",&marks3);
    printf("The marks are %d,%d and %d \n",marks1,marks2,marks3);

    if(marks1<33|| marks2<33 || marks3<33){
    printf("The student is failed because he has scored less than 33 in the subject(s)|n");
    }
    elseif((marks1+marks2+marks3)/3<40);{
    printf("The student is failed because his average is less than 40|n");
    }
    else
    {
        printf("The student is passed|n");
    }
    return 0;
}