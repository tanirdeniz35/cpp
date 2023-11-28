#include <stdio.h>

int main (void)
{
    short int matris[500000][7];
    matris[1][1]=2;
    matris[1][2]=1;
    matris[1][3]=3;
    matris[1][4]=4;
    matris[1][5]=5;
    matris[1][6]=6;

    matris[2][1]=1;
    matris[2][2]=3;
    matris[2][3]=2;
    matris[2][4]=4;
    matris[2][5]=5;
    matris[2][6]=6;

    matris[3][1]=1;
    matris[3][2]=2;
    matris[3][3]=4;
    matris[3][4]=3;
    matris[3][5]=5;
    matris[3][6]=6;

    matris[4][1]=1;
    matris[4][2]=2;
    matris[4][3]=3;
    matris[4][4]=5;
    matris[4][5]=4;
    matris[4][6]=6;

    matris[5][1]=1;
    matris[5][2]=2;
    matris[5][3]=3;
    matris[5][4]=4;
    matris[5][5]=6;
    matris[5][6]=5;

    int sayac=5;
    int deger;
        A:  deger=1;
    
        for (int j = 1; j <= 6; j++) {
            for (int i = sayac; i >= sayac-4; i--) {
                deger=matris[i][deger]; 
            }
            matris[sayac+1][j]=deger;
            deger=j+1;
        }
        sayac++;
        int esitmi = 1;
        
       if (sayac>5)
        {
            for (int k = 0; k <= 4; k++) { 
               for (int j = 1; j <= 6; j++) {
                      if (matris[sayac-k][j]!=matris[5-k][j])
                          esitmi=0;
                  }
               }
            
        }
        else
        {
            esitmi = 0;
        }
      int a=1;
      if (sayac>99999)
         a=1;

      if (esitmi==1)
            goto B;
        goto A;

        B: for (int i = 1; i < 1000; i++) {
            printf ("%d-\t",i);
        for (int j = 1; j <= 6; j++) {
            printf ("%d \t",matris[i][j]);
        }
        printf ("\n");
    }

    

    
}