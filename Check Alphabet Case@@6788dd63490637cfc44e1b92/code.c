// Your code here...
#include <stdio.h>
int main()
{
    char a[100];
    scanf("%s",&a);
    if(a>='A' && a<='Z'){
        printf("Uppercase",a);
    }
    else if(a>='a' && a<='z'){
        printf("Lowercase",a);
    }
    else{
        printf("Not an alphabet",a);
    }
    return 0;
}