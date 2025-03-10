#include <stdio.h>

int main() {
  int n,a,b,c,d;
  scanf("%d",&n);
  a=(n&1);
  b=(n&(1<<1))>>1;
  c=(n&(1<<2))>>2;
  d=(n&(1<<3))>>3;
  n=a+b+c+d;
  printf("%d",n);
  
    
    return 0;
}