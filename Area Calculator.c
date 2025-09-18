#include <stdio.h>
#include <math.h>

int main(){

    //Area of a Circle Calculator

    float pi = 3.14;
    float r;

    printf("\nEnter your circle's radius here: ");
    scanf("%f", &r);

    float area = pi * pow(r, 2);
    int rounded1 = (int)ceil(area);
    printf("\nYour Circle's Area is: %d", rounded1);

    //Area of a triangle calculator

    float x = 0.5;
    float base;
    float height;

    printf("\nEnter your base and height for triangle: ");
    scanf("%f %f", &base, &height);

    float area2 = x * base * height;
    int rounded2 = (int)ceil(area2);
    printf("\nYour triangle's Area is: %d", rounded2);

    //Area of a Square calculator

    float square;

    printf("\nEnter your dimensions for square: ");
    scanf("%f", &square);

    float area3 = square * square;
    int rounded3 = (int)ceil(area3);
    printf("\nYour Square's Area is: %d", rounded3);

    //Area of a Rectangle Calculator

    float length;
    float width;

    printf("\nEnter your length and width for rectangle: ");
    scanf("%f %f", &length, &width);

    float area4 = length * width;
    int rounded4 = (int)ceil(area4);
    printf("\nYour Rectangle's Area is: %d", rounded4);

    printf("\nPlease press Enter to exit...");
    getchar();
    getchar();

    return 0;
}
