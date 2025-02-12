#include <stdio.h>

int main()
{
    const double pi = 3.14;
    int radius;
    double area;

    scanf("%d",&radius);

    area = pi * ((double)radius * radius);

    printf("Area: %.3lf",area);

    return 0;
}