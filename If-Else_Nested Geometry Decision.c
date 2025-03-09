#include <stdio.h>

int main() {
    int n, a, b, c, d, q, r, s, t;
    scanf("%d %d %d %d %d %d %d %d %d", &n, &a, &b, &c, &d, &q, &r, &s, &t);

    int tri = d + q + r;
    int quad = q + r + s + t;
  if (n == 0) {
          //if(s<=0||t<=0){printf("Invalid Figure"); return 0;}
            printf("Circle");
          return 0;
        }
  if(a<=0||b<=0||c<=0||d<=0||q<=0||r<=0){printf("Invalid Figure"); return 0;}
    if (n == 3 || n == 4) {
        if (n == 3) {
            if ((a + b > c) && (b + c > a) && (a + c > b) && (tri == 180)) {
                if (a == b && b == c && a == c && d == 60 && q == 60 && r == 60) {
                    printf("Equilateral Triangle");
                } else if ((a == b && d == q && c!=a && r!=q) || (b == c && q == r && a!=b && d!=q) || (a == c && d == r && b!=a && q!=d)) {
                    printf("Isosceles Triangle");
                } else if(a!=b && b!=c && a!=c && d!=q && q!=r && d!=r){
                    printf("Scalene Triangle");
                }
                  else{printf("Invalid Figure");}
                }
               else {
                printf("Invalid Figure");
                }
        }
      
        else if (n == 4 && quad == 360) {
          if(s<=0||t<=0){printf("Invalid Figure"); return 0;}
                if ((a == c && b == d) && q == s && r == t) {
                    if (a == b && q == r && q == 90 && r == 90){
                        printf("Square");
                    } else if (q == r && a!=b && q == 90) {
                        printf("Rectangle");
                    } else if (a == b && q != r) {
                        printf("Rhombus");
                    } else if(a!=b && q!=r){
                        printf("Parallelogram");
                    }
                  else{printf("Invalid Figure");}
                    }
                    else {
                    printf("Invalid Figure");
                    }
            } else {
              printf("Invalid Figure");}
        }
  else{
  printf("Invalid Figure");}
    

    return 0;
}
