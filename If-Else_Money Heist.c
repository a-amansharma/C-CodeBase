#include <stdio.h>

int main() {
    int a,b,c,d,e,f,g,h,i,j;
    int m,n,o,p,q,r;
    scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    scanf("%d %d\n%d %d\n%d %d",&m,&n,&o,&p,&q,&r);
    if(m==0){a+=n;}
    if(m==1){b+=n;}
    if(m==2){c+=n;}
    if(m==3){d+=n;}
    if(m==4){e+=n;}
    if(m==5){f+=n;}
    if(m==6){g+=n;}
    if(m==7){h+=n;}
    if(m==8){i+=n;}
    if(m==9){j+=n;}
    
    if(o==0){a+=p;}
    if(o==1){b+=p;}
    if(o==2){c+=p;}
    if(o==3){d+=p;}
    if(o==4){e+=p;}
    if(o==5){f+=p;}
    if(o==6){g+=p;}
    if(o==7){h+=p;}
    if(o==8){i+=p;}
    if(o==9){j+=p;}
    
    if(q==0){a+=r;}
    if(q==1){b+=r;}
    if(q==2){c+=r;}
    if(q==3){d+=r;}
    if(q==4){e+=r;}
    if(q==5){f+=r;}
    if(q==6){g+=r;}
    if(q==7){h+=r;}
    if(q==8){i+=r;}
    if(q==9){j+=r;}
    
    a=a%10; b=b%10; c=c%10; d=d%10; e=e%10; f=f%10; g=g%10; h=h%10; i=i%10; j=j%10; 
    printf("%d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i,j);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}