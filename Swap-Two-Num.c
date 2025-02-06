#include <stdio.h>

int main() {
int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d\nb = %d",a,b);
    
    return 0;
}