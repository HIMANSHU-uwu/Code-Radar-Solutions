#include <stdio.h>

int main()
{
    const double pi = 3.14;
    double radius;
    double area;

    scanf("%d",&radius);

    area = pi * ((double)radius * radius);

    printf("Area: %.2lf",area);

    return 0;
}