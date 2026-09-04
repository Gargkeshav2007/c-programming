/*#include <stdio.h>

int main() {
    printf("Hello, World!\n");
}*/

//program no 2 
/*#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}*/
// Program 3 
/*#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}*/
// Program 4
/*#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("%d is the largest.\n", a);
    } else if (b >= a && b >= c) {
        printf("%d is the largest.\n", b);
    } else {
        printf("%d is the largest.\n", c);
    }

    return 0;
}*/
// Program 5
/*#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}*/
// Program 6

/*#include <stdio.h> // Program for grading the student based on marks
char grade;

int main() {
    float marks;

    printf("Enter the student's marks: ");
    scanf("%f", &marks);

    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else {
        grade = 'D';
    }

    printf("The student's grade is: %c\n", grade);

    return 0;
}*/
// Program 7
/*#include <stdio.h>
#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &b);

    switch (op) {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;

        case '-':
            printf("Result = %.2f\n", a - b);
            break;

        case '*':
            printf("Result = %.2f\n", a * b);
            break;

        case '/':
            if (b == 0) {
                printf("Cannot divide by zero\n");
            }
            else {
                printf("Result = %.2f\n", a / b);
            }
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}*/
// 
//Program 8
/*#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z')) {

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U') {

            printf("Vowel\n");
        }
        else {
            printf("Consonant\n");
        }
    }
    else {
        printf("Not a letter\n");
    }

    return 0;
}*/
// Program 9
/*#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid sides\n");
    }
    else if (a + b > c &&
             a + c > b &&
             b + c > a) {

        printf("Triangle is valid\n");

        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles triangle\n");
        }
        else {
            printf("Scalene triangle\n");
        }
    }
    else {
        printf("Triangle is not possible\n");
    }

    return 0;
}*/
//Program 10
/*#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight in kg: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    if (weight <= 0 || height <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    bmi = weight / (height * height);

    printf("BMI = %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    }
    else if (bmi < 25) {
        printf("Category: Normal weight\n");
    }
    else if (bmi < 30) {
        printf("Category: Overweight\n");
    }
    else {
        printf("Category: Obese\n");
    }

    return 0;
}/*Program 11
#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;

    printf("Enter x1 y1: ");
    scanf("%d%d", &x1, &y1);

    printf("Enter x2 y2: ");
    scanf("%d%d", &x2, &y2);

    printf("Enter x3 y3: ");
    scanf("%d%d", &x3, &y3);

    if ((x2 - x1) * (y3 - y1) == (y2 - y1) * (x3 - x1))
        printf("The points are collinear.\n");
    else
        printf("The points are not collinear.\n");

    return 0;
}*/
// Program 13
/*#include <stdio.h>

int main() {
    int l1, b1, l2, b2, l3, b3;
    int p1, p2, p3;

    printf("Enter length and breadth of Rectangle 1: ");
    scanf("%d%d", &l1, &b1);

    printf("Enter length and breadth of Rectangle 2: ");
    scanf("%d%d", &l2, &b2);

    printf("Enter length and breadth of Rectangle 3: ");
    scanf("%d%d", &l3, &b3);

    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    if (p1 >= p2 && p1 >= p3)
        printf("Rectangle 1 has the highest perimeter = %d\n", p1);
    else if (p2 >= p1 && p2 >= p3)
        printf("Rectangle 2 has the highest perimeter = %d\n", p2);
    else
        printf("Rectangle 3 has the highest perimeter = %d\n", p3);

    return 0;
}*/
// Program 14
/*#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}*/