#include <stdio.h>

int main()
{
   char a[10], b[10];  // Correct declaration
   scanf("%9s %9s", a, b); // Prevents buffer overflow
   printf("You entered: %s and %s\n", a, b);
   return 0;
}
