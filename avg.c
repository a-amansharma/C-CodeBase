#include <stdio.h>

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int sum=0;
    int count=0;

    int even = 0;
    for (even = 0; even <=9; even++){
      int num=numbers[even];
      if(num%2==0){
        count++;
        sum=sum+num;
      }
        }
    
    int avg=sum/count;

    printf("even nos: %d\n", count);
    printf("avg: %d\n", avg);


}
