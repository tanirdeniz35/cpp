//girilen 4 basamaklı bir sayının rakamlarının karelerinin toplamının kendisine eşit olup olmadığını bulduran program
#include <stdio.h>

int main() {
    int sayi, snc, rakam, toplam = 0;

    printf("4 basamakli bir sayi girin: ");
    scanf("%d", &sayi);

    if (sayi < 1000 || sayi > 9999) {
        printf("Girdiginiz sayi 4 basamakli degil!\n");
        
    } else {
        snc = sayi;
        while (snc > 0) {
            rakam = snc % 10;
            toplam += rakam * rakam;
            snc /= 10;
        }

        if (toplam == sayi) {
            printf("%d sayisi rakamlarinin karelerinin toplamina esittir.\n", sayi);
        } else {
            printf("%d sayisi rakamlarinin karelerinin toplamina esit degildir.\n", sayi);
        }
    }

    return 0;
}