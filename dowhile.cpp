#include <stdio.h>
#include <conio.h>
int main(void)
{
    int a,b;
    char kr;
    do
    {
        puts ("Toplanacak iki sayı giriniz");
        scanf ("%d, %d", &a, &b) ;
        printf("%d + %d = %d \n" , a, b, a+b);
        puts ("Tekrarlayacak mısınız?"+kr ) ; 
        kr=getch();
    } while (kr!='h' && kr !='H');
    
   
 

}

