#include <stdio.h>

int main() {
    int a, b, c;

    printf("nhap so thu nhat: ");
    scanf("%d", &a);
    printf("nhap so thu hai: ");
    scanf("%d", &b);
    printf("nhap so thu ba: ");
    scanf("%d", &c);

    if ((c > a && c < b) || (c > b && c < a)) {
        printf("so %d nam trong khoang giua %d và %d", c, a, b);
    } else {
        printf("so %d khong nam trong khoang giua %d và %d", c, a, b);
    }

    return 0;
}

