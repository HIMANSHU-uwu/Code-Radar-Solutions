// Your code here...
#include <stdio.h>
int main()
{
    char sign;
    int num1,num2;
    int result;
    scanf("%d %d %c",&num1,&num2,&sign);
    switch(sign){
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
        break;
        case '+':
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