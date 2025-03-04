#include <stdio.h>
int main() {
    int m, y;
    scanf("%d\n%d", &m, &y);

    if (m <= 0 || m > 12) {
        printf("Invalid Month\n");
    }
    if (y <= 0) {
        printf("Invalid Year\n");
    }
    if (m > 0 && m <= 12 && y > 0) {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
            if (m == 2) {
                printf("29");
            } else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
                printf("31");
            } else {
                printf("30");
            }
        } else {
            if (m == 2) {
                printf("28");
            } else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
                printf("31");
            } else {
                printf("30");
            }
        }
    }
    return 0;
}
