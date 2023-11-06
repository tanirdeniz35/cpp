#include<stdio.h>
int main (void)
{
    int tut, *adr;
    adr=&tut;
    tut=888;
    printf ( "Degiskenin adresi : %p\n",&tut);
    printf ( "Degiskenin degeri : %d\n\n",tut);
    printf("İşaretçinin değeri (adres): %p\n",adr);
    printf("İşaret ettiği değer: %d\n\n",*adr);
    *adr=444;
    printf("Degiskenin yeni degeri : %d\n",tut);
    printf("Degiskenin adresi : %p\n",&tut);
}
