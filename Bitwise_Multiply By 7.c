#include <stdio.h>

int main() {
  int a;
  scanf("%d",&a);
  a = (a<<3)-a;
  printf("%d",a);
    return 0;
}