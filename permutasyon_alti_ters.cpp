#include <stdio.h>
 
int main()
{
    short int matris[500000][8];
    matris[1][1] = 2;
    matris[1][2] = 1;
    matris[1][3] = 3;
    matris[1][4] = 4;
    matris[1][5] = 5;
    matris[1][6] = 6;
    matris[1][7] = 7;

    matris[2][1] = 1;
    matris[2][2] = 3;
    matris[2][3] = 2;
    matris[2][4] = 4;
    matris[2][5] = 5;
    matris[2][6] = 6;
    matris[2][7] = 7;

    matris[3][1] = 1;
    matris[3][2] = 2;
    matris[3][3] = 4;
    matris[3][4] = 3;
    matris[3][5] = 5;
    matris[3][6] = 6;
    matris[3][7] = 7;

    matris[4][1] = 1;
    matris[4][2] = 2;
    matris[4][3] = 3;
    matris[4][4] = 5;
    matris[4][5] = 4;
    matris[4][6] = 6;
    matris[4][7] = 7;

    matris[5][1] = 1;
    matris[5][2] = 2;
    matris[5][3] = 3;
    matris[5][4] = 4;
    matris[5][5] = 6;
    matris[5][6] = 5;
    matris[5][7] = 7;

    matris[6][1] = 1;
    matris[6][2] = 2;
    matris[6][3] = 3;
    matris[6][4] = 4;
    matris[6][5] = 5;
    matris[6][6] = 7;
    matris[6][7] = 6;



    int sayac = 6;
    int deger;
A:  deger = 1;

    for (int j = 1; j <= 7; j++) {
        for (int i = sayac; i >= sayac - 5; i--) {
            deger = matris[i][deger];
        }
        matris[sayac + 1][j] = deger;
        deger = j + 1;
    }
    sayac++;
    int esitmi = 1;

    if (sayac > 6)
    {
        for (int k = 0; k <= 5; k++) {
            for (int j = 1; j <= 7; j++) {
                if (matris[sayac - k][j] != matris[6 - k][j])
                    esitmi = 0;
            }
        }

    }
    else
    {
        esitmi = 0;
    }



    if (esitmi==1)
        goto B;
    goto A;

B: for (int i = 1; i < 100; i++) {
    printf("%d-\t", i);
    for (int j = 1; j <= 7; j++) {
        printf("%d \t", matris[i][j]);
    }
    printf("\n");
}




}