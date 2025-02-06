#include <stdio.h>
int main()
{
    //access the value//
int her[]={2,4,6,8,0};
printf("%d\n",her[1]);
//print all the element of array
for(int all=0; all<=4;all++)
{
//printf("%d\n",her[all]);
}
for(int all=0; all<=4;all++)
{
if(her[all]==0)

printf("found at index : %d\n", all);

}



for(int all=4; all>=0;all--)
{
if(her[all]==0)

printf("found at from right : %d\n", all);

}
}