#include <stdio.h>
int faktoriyel(int sayi)
{
int sonuc = 1;
for(int i=sayi;i>0;i--)
sonuc*=i;
return sonuc;
}
int main()
{
int sayi = faktoriyel(5);
}