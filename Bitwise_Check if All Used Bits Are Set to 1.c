#include <stdio.h>

int main() {
  int n,m;
  scanf("%d",&n);
  if(n==0){
    printf("No");
    return 0;
  }
  else{
  m=n&(n+1);
  if(m==0){
    printf("Yes");
  }
  else{printf("No");}
  }
     
    return 0;
}