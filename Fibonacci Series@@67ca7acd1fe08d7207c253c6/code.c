// Your code here...
#include <stdio.h>
int fibonacciSeries(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    for(int i=1;i<=n;i++){
        fibonacciSeries(n-1)+fibonacciSeries(n-2);
    }
}

