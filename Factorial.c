#include <stdio.h>
int main()
{
    int a;
    long double fact = 1;
    int num;

    printf("Enter no. ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("error...\n");
        return 0;
    }
    for (int i = 1; i <= num; ++i)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is :- %.0Lf\n", num,fact);
    return 0;
}