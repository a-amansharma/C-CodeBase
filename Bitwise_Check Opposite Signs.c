#include <stdio.h>

int main() {
  int a,b;
  scanf("%d %d",&a,&b);
  int x=(a>>31)&1;
  int y=(b>>31)&1;
  (x==y)?printf("No"):printf("Yes");

    
    return 0;
}