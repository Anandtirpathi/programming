/* Author: Anand Tripathi
   Purpose: This program is going to calculate the area of the rectangle
   */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaring variables
    double width = 32.3;
    double height = 15.3;
    double perimeter = 0.0;
    double area = 0.0;

    //performing perimeter calculation
    perimeter = 2.0 * (height + width);
    area = width * height;

    //displaying output
    printf("Width is: %.2f, Height is: %.2f, Perimeter is: %.2f\n", width, height, perimeter);
    printf("Area is: %f\n", area);

    return 0;
}
