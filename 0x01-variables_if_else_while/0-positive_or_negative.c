#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main ->print whether the number stored in the variable n is positive or negative
*based a condtion
*Return->alwways  true
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Enter any number: ");
scanf("%d", &n);


if (n > 0)
{
printf("%d Number is POSITIVE\n",n);
}
if (n < 0)
{
printf("%d Number is NEGATIVE\n",n);
}
if (n == 0)
{
printf("%d Number is ZERO\n",n);
}

return (0);
}
