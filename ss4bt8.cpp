#include <stdio.h>

int main() {
    int a, b, c;

    printf("nhap vao ba canh cua tam giac: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("%d,%d,%d la ba canh cua tam giac", a, b, c);
    } else {
        printf("%d,%d,%d khong phai ba canh cua tam giac", a, b, c);
    }

    return 0;
}

