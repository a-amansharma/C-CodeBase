#include <stdio.h>

int main() {
  int x;
  scanf("%d",&x);
  /*(x>=0)?printf("Positive"):printf("Negative");*/
  int a = (x>>31)&1;
  (a==0)?printf("Positive"):printf("Negative");
  
    return 0;
}