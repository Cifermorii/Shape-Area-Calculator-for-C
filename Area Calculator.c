#include <stdio.h>



int main(){

    //Area of a Circle Calculator

    float pi = 3.14;
    float r;

    printf("\nArea of a Circle Calculator");
    printf("\nEnter your circle's radius here: ");
    scanf("%f", &r);
    printf("\nYour Circle's Area is: %.2f", pi * r * r);

    //Area of a triangle calculator

    float x = 0.5;
    float base;
    float height;

    printf("\nArea of a Triangle Calculator");
    printf("\nEnter your base and height: ");
    scanf("%f %f", &base, &height);
    printf("\nYour triangle's Area is: %.2f", x * base * height);

    //Area of a Square calculator

    int square;

    printf("\nArea of a Square Calculator");
    printf("\nEnter your dimensions: ");
    scanf("%d", &square);
    printf("\nYour Square's Area is: %d", square * square);

    //Area of a Rectangle Calculator

    int length;
    int width;

    printf("\nArea of a Rectangle Calculator");
    printf("\nEnter your dimensions: ");
    scanf("%d %d", &length, &width);
    printf("\nYour Rectangle's Area is: %d", length * width);


    return 0;
}