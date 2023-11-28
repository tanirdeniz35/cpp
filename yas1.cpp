#include <stdio.h>
int main (void)
{
    int A;
    int K;
    int YIL;
    A=38;
    K=12;
    YIL=0;
A20:YIL=YIL+1;
    A=A+1;
    K=K+1;
    if (A!=3*K-4) 
       goto A20; 
    printf("%d, yıl sonra annenin yaşı kızın yaşından 4 eksik olur \n",YIL);
     
}