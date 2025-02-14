// Your code here...
#include <stdio.h>
int main()
{
    int a,b;
    int result;
    char operator;
    scanf("%d %d",&a,&b);
    scanf("%c",&operator);
    switch(operator){
        case '+':
        result = num1 + num2;
        printf("%d",result);
        break;
        case '-':
        result = num1 - num2;
        printf("%d",result);
        break;
        case '*':
        result = num1 * num2;
        printf("%d",result);
        break;case '+':
        result = num1 / num2;
        printf("%d",result);
        break;
        default:
        printf(
            "error"
        );
        return 0;
    }
    
}