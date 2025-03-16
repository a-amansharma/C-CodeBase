#include <stdio.h>

int main() {
  int a,n;
  scanf("%d",&a);
  if(a==0){printf("Yes"); return 0; }
  n=a&(-a);
  if(n>=4){
    (n&(n-1))?printf("No"):printf("Yes");
  }
  else{printf("No");}
    
    return 0;
}