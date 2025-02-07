#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("The largest number is : %d",a);
    }
    else if(c>b && a<c)
    {
        printf("The largest number is : %d",c);
    }
    else
    {
        printf("The largest number is : %d",b);
    }
    return 0;
