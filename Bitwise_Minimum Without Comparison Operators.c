#include <stdio.h>

int main() {
  int a,b,x;
  scanf("%d %d",&a,&b);
  x=a-b;
  x=(x>>31)&1;
  int num= a*x + b*(1-x);
  printf("%d",num);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}