#include <stdio.h>

int main (void)
{
    int matris[1000][5];
    matris[1][1]=2;
    matris[1][2]=1;
    matris[1][3]=3;
    matris[1][4]=4;
 

    matris[2][1]=1;
    matris[2][2]=3;
    matris[2][3]=2;
    matris[2][4]=4;
  

    matris[3][1]=1;
    matris[3][2]=2;
    matris[3][3]=4;
    matris[3][4]=3;
   
 

    int sayac=3;
    int deger;
        A:  deger=1;

        for (int j = 1; j <= 4; j++) {
            for (int i = sayac; i >= sayac-2; i--) {
                deger=matris[i][deger]; 
            }
            matris[sayac+1][j]=deger;
            deger=j+1;
        }
    
        
        sayac++;
        int esitmi = 1;
        
        if (sayac>3)
        {
             
            for (int k = 0; k <= 2; k++) { 
               for (int j = 1; j <= 4; j++) {
                      if (matris[sayac-k][j]!=matris[3-k][j])
                          esitmi=0;
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

        B: for (int i = 1; i < 101; i++) {
            printf ("%d-\t",i);
        for (int j = 1; j <= 4; j++) {
            printf ("%d \t",matris[i][j]);
        }
        printf ("\n");
    }

    

    
}