#include <stdio.h>
#include <cstring>

int main (void)
{
    char str[80];
    short int i,k;
    puts("Bir şeyler yazınız");
    fgets(str, 80, stdin);
    k=strlen(str);
    i=0;
    for (;;)
    {
            if (str[i]==' '||str[i]==',')
            break;
            i++;
            if (i>=k)
            break;
    }
    printf ("%d,%d",k,i+1);
}