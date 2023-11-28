#include <stdio.h>

int main() {
    int n, i, j, syt;

    printf("Kaç adet sayı gireceksiniz? ");
    scanf("%d", &n);

    int sayi[n];

    printf("Sayıları giriniz:\n");

    for (i = 0; i < n; i++) {
        printf("Sayı %d: ", i + 1);
        scanf("%d", &sayi[i]);
    }

    // Bubble Sort algoritması ile sıralama
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (sayi[j] > sayi[j+1]) {
                
                syt = sayi[j];
                sayi[j] = sayi[j+1];
                sayi[j+1] = syt;
            }
        }
    }

    printf("\nSıralanmış sayılar:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", sayi[i]);
    }

    return 0;
}