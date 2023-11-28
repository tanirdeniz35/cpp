#include <stdio.h>

int main() {
    int N;
    
    // Kullanıcıdan N değerini al
    printf("Bir N pozitif tamsayisi girin: ");
    scanf("%d", &N);

    // Toplam terim sayısını ve terimlerin toplamını hesaplar
    int toplamTerim = 0;
    int toplam = 0;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d", i);
            toplam += i;
            if (j < i) {
                
            }
            ++toplamTerim;
        }
        
    }

    // Toplam terim sayısını ve terimlerin toplamını yazdırır.
    printf("\nToplam %d terim vardir.\n", toplamTerim);
    printf("Terimlerin toplami: %d\n", toplam);

    return 0;
}

