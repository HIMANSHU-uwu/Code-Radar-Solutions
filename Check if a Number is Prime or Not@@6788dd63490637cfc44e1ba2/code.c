// Your code here...
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>1 && n%n==0 && n*1==n){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
    return 0;
}