#include <stdio.h>

int main() {
  int a,b,x;
  scanf("%d %d",&a,&b);
  x=a-b;
  x=(x>>31);
  int num = (b&x) | (a&~x);
  printf("%d",num);

   
    return 0;
}