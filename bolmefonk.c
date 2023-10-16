#include <stdio.h>

float bol(a,b)
float a,b;
{
    float g;
    g=a/b;
    return g;
}


int main (void)
{
    float s=bol (7.0,2.0);
    printf("%f",s);
}