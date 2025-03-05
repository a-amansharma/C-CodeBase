#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
float d;
scanf("%f",&d);
int n=d/360;
if((d>0 && d<90) || (d-360*n>0 && d-360*n<90) || d==0){
    printf("Acute Angle");
}
else if(d-360*n==90){
    printf("Right Angle");
}
else if((d>90 && d<180) || (d-360*n>90 && d-360*n<180)){
    printf("Obtuse Angle");
}
else if(d-360*n==180){
    printf("Straight Angle");
}
else if((d>180 && d<360) || (d-360*n>180 && d-360*n<360)){
    printf("Reflex Angle");
}
else if(d==360 || d-360*n==0){
    printf("Full Rotation");
}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
