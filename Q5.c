#include<stdio.h>
int main()
{
    float r;
    printf("Enter the radius of a circle : ");
    scanf("%f",&r);
    printf("\nDiameter of the circle is = %f \nCircumference is = %f \nArea is = %f", r*2, 2*3.14*r, 3.14*r*r);
    return 0;
}