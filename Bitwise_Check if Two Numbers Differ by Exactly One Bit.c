#include <stdio.h>
int main() {
  int a,b;
  scanf("%d %d",&a,&b);
  int x=a^b;
  if(x==0){printf("No"); return 0;} 
  
  ((x&(x-1))==0)?printf("Yes"):printf("No");
  
    /*int x,y,xbit=0,ybit=0;
    scanf("%d %d",&x,&y);
  
    if(x&(1<<0))xbit++;
    if(x&(1<<1))xbit++;
    if(x&(1<<2))xbit++;
    if(x&(1<<3))xbit++;
    if(x&(1<<4))xbit++;
    if(x&(1<<5))xbit++;
    if(x&(1<<6))xbit++;
    if(x&(1<<7))xbit++;
    if(x&(1<<8))xbit++;
    if(x&(1<<9))xbit++;
    if(x&(1<<10))xbit++;
    if(x&(1<<11))xbit++;
    if(x&(1<<12))xbit++;
    if(x&(1<<13))xbit++;
    if(x&(1<<14))xbit++;
    if(x&(1<<15))xbit++;
    if(x&(1<<16))xbit++;
    if(x&(1<<17))xbit++;
    if(x&(1<<18))xbit++;
    if(x&(1<<19))xbit++;
    if(x&(1<<20))xbit++;
    if(x&(1<<21))xbit++;
    if(x&(1<<22))xbit++;
    if(x&(1<<23))xbit++;
    if(x&(1<<24))xbit++;
    if(x&(1<<25))xbit++;
    if(x&(1<<26))xbit++;
    if(x&(1<<27))xbit++;
    if(x&(1<<28))xbit++;
    if(x&(1<<29))xbit++;
    if(x&(1<<30))xbit++;
    if(x&(1<<31))xbit++;
  
    if(y&(1<<0))ybit++;
    if(y&(1<<1))ybit++;
    if(y&(1<<2))ybit++;
    if(y&(1<<3))ybit++;
    if(y&(1<<4))ybit++;
    if(y&(1<<5))ybit++;
    if(y&(1<<6))ybit++;
    if(y&(1<<7))ybit++;
    if(y&(1<<8))ybit++;
    if(y&(1<<9))ybit++;
    if(y&(1<<10))ybit++;
    if(y&(1<<11))ybit++;
    if(y&(1<<12))ybit++;
    if(y&(1<<13))ybit++;
    if(y&(1<<14))ybit++;
    if(y&(1<<15))ybit++;
    if(y&(1<<16))ybit++;
    if(y&(1<<17))ybit++;
    if(y&(1<<18))ybit++;
    if(y&(1<<19))ybit++;
    if(y&(1<<20))ybit++;
    if(y&(1<<21))ybit++;
    if(y&(1<<22))ybit++;
    if(y&(1<<23))ybit++;
    if(y&(1<<24))ybit++;
    if(y&(1<<25))ybit++;
    if(y&(1<<26))ybit++;
    if(y&(1<<27))ybit++;
    if(y&(1<<28))ybit++;
    if(y&(1<<29))ybit++;
    if(y&(1<<30))ybit++;
    if(y&(1<<31))ybit++;
 
    if(((xbit+1)==ybit)||((ybit+1)==xbit))printf("Yes");
    else printf("No");*/
    return 0;
}
