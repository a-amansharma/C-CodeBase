#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number for the table:\n");
    scanf("%d", &num);
   
    for (int i = 1; i <= 10; i++)
    {
    
        printf("%d\n",num*i);
    }
    
    return 0;
}
