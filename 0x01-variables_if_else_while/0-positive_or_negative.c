#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* Input number from user */
printf("Enter any number: ");
scanf("%d", &n);


if (num > 0)
{
printf("%d Number is POSITIVE\n", n);
}
if (num < 0)
{
printf("%d Number is NEGATIVE\n", n);
}
if (num == 0)
{
printf("%d Number is ZERO\n", n);
}

return (0);
}
