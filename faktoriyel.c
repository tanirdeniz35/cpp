#include <stdio.h>
int faktoriyel(int sayi)
{
int sonuc = 1;
for(int i=sayi;i>0;i--)
sonuc*=i;
printf("%d ! = %d",sayi, sonuc);
return sonuc;
 
}
int main()
{
int sayi = faktoriyel(5);
}