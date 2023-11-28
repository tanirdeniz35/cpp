#include <stdio.h>
int main (void)
{
    int B;
    int YIL;
    B=4;
    YIL=0;
A20:YIL=YIL+1;
    B=B+B/2;
    if (B<200) 
       goto A20; 
    printf("%d, yıl sonra bitkinin boyu 200 cm e ulaşır",YIL);
     
}