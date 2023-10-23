#include "extern.c"
#include <stdio.h>
extern float pi;
int main ()
{
    int s=sum(5,7);
    //pi=5555; const olduğu için değiştirilemez
    printf("%d",s);
    printf("%f",pi);
}