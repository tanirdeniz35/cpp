#include <stdio.h>
#include <conio.h>

int main (void)
{
    char kr;
    printf("Bir karater giriniz");
    kr=getch();
    switch(kr)
    {
        case 'a':
        case 'r':
        case 'c':
            printf("merhaba C");
            break;
        case 'b':
        case 'z':
             printf("merhaba D");
            break;
        case 'k':
            printf("merhaba E");
            break;
        default: 
            printf("arcbzk'ya basmadiniz");
    }
}