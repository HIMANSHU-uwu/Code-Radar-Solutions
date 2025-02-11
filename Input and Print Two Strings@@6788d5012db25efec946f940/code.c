#include <stdio.h>

int main()
{
   char a[25], b[25];  // Correct declaration
   scanf("%9s %9s", a, b); // Prevents buffer overflow
   printf("You entered: %s and %s\n", a, b);
   return 0;
}
