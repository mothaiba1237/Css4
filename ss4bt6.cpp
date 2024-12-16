#include <stdio.h>

int main() {
    int chisocu, chisomoi, sodien;
    double tiendien = 0;

    printf("nhap chi so cu: ");
    scanf("%d", &chisocu);
    printf("nhap chi so moi: ");
    scanf("%d", &chisomoi);
    if (chisomoi < chisocu) {
        printf("chi so moi phai lon hon hoac bang chi so cu");
        return 1;
    }
    sodien = chisomoi - chisocu;
    if (sodien < 50) {
        tiendien = sodien * 10000;
    } else if (sodien < 100) {
        tiendien = 50 * 10000 + (sodien - 50) * 15000;
    } else if (sodien < 150) {
        tiendien = 50 * 10000 + 50 * 15000 + (sodien - 100) * 20000;
    } else if (sodien < 200) {
        tiendien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (sodien - 150) * 25000;
    } else {
        tiendien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (sodien - 200) * 30000;
    }

    printf("so dien tieu thu la: %d kWh\n", sodien);
    printf("tien dien phai tra la: %.0f VND\n", tiendien);

    return 0;
}

