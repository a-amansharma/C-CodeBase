#include <stdio.h>

int main() {
int a,b;
  scanf("%d %d",&a,&b);
  int n = a|b;
  int m = a^b;
  int and = n^m;
  printf("%d",and);
   
    return 0;
}