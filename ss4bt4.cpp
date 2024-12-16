#include <stdio.h>

int main() {
    int month;

    printf("nhap vao so thang (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("thang %d co 31 ngay", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("thang %d co 30 ngay", month);
            break;
        case 2:
            printf("thang %d co 28 hoac 29 ngay(nam nhuan)", month);
            break;
        default:
            printf("so thang khong hop le");
    }

    return 0;
}

