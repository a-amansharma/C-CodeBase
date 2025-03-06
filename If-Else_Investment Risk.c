#include <stdio.h>

int main() {
    int age,inc,ris;
    scanf("%d\n%d\n%d",&age,&inc,&ris);
    
    if((age > 50 && !(inc > 75000 && ris == 3)) || (age > 30 && inc <= 30000 && (ris == 1 || ris == 2))){
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    else if(((age>=30 && age<=50) && inc<=75000 && ris==2) || ((age>=30 && age<=50) && (inc>75000 && (ris==1 || ris==2)))){
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    else{
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    return 0;
}