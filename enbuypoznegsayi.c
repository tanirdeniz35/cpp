#include <stdio.h>

int main() {
    int a, b, c, y;
    int pozsay = 0;
    int negsay = 0;
    int enbuyuk = 0;

    for (int i = 0; i < 10; i++) {
        printf("Lütfen %d. (a, b, c) değerlerini girin: ", i + 1);
        scanf("%d %d %d", &a, &b, &c);

        y = a + b + c;

        if (y > 0) {
            pozsay++;
        } else if (y < 0) {
            negsay++;
        }

        if (y > enbuyuk) {
            enbuyuk = y;
        }
    }

    printf("En büyük y degeri: %d\n", enbuyuk);
    printf("Pozitif y degerlerinin sayisi: %d\n", pozsay);
    printf("Negatif y degerlerinin sayisi: %d\n", negsay);

    return 0;
}