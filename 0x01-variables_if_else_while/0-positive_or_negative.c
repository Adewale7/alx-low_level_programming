#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main-Entry Point
*
*@void:Empty parameter list for main
*
*description:this is use to check for poisitive, negative and zero value
*Return:0 (success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n ", n);
}
return (0);
}
