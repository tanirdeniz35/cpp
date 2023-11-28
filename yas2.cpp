#include <stdio.h>
int main (void)
{
    int B;
    int C1;
    int C2;
    int C3;
    int YIL;
    C3=5;
    B=C3*9-5;
    C2=C3+3;
    C1=C2+3;
    YIL=0;
A20:YIL=YIL+1;
    C3=C3+1;
    C2=C2+1;
    C1=C1+1;
    B=B+1;
    if (B!=C1+C2+C3) 
       goto A20; 
    printf("%d, yıl sonra çocukların yaşarının toplamı babanın yaşına eşit olur\n",YIL);
     
}