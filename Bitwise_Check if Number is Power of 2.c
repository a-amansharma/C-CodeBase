#include <stdio.h>

int main() {
  int a;
  scanf("%d",&a);
  if(a==0){
    printf("No");  return 0;}
 
  ((a&(a-1))==0)?printf("Yes"):printf("No");
  

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}