#include <stdio.h>

int main()
{
    const double pi = 3.14;
    int radius;
    double area;

    scanf("%d",&radius);

    area = pi * (radius * radius);

    scanf("%lf",&area);
    printf("Area: %.2lf",area);

    return 0;
}