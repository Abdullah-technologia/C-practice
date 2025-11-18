#include <stdio.h>
#include <math.h>


int main(){

    double radius = 0.0;
    double pi = 3.14159;
    double surfaceArea = 0.0;
    double area = 0.0;
    double volume = 0.0;


    printf("Enter the radius: ");
    scanf("%lf", &radius);

    surfaceArea = 4.0 * pi * pow(radius,2);
    area = pi * pow(radius,2);
    volume = (4.0/3.0) * pi * pow(radius,2);

    printf("Surface Area: %.2lf\n", surfaceArea);
    printf("Area: %.2lf\n", area);
    printf("Volume: %.2lf\n", volume);


    return 0;
}