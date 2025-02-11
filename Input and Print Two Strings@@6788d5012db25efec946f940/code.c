#include <stdio.h>

int main()
{
   char a[100], b[100];  // Correct declaration
   scanf("%9s %9s", a, b); // Prevents buffer overflow
   printf("You entered: %s and %s\n", a, b);
   return 0;
}
