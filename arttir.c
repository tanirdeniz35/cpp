#include <stdio.h>
int main ()
{
    int m=7;
    int j=7;
    int k,z;
    k=m++;
    z=++j;
    printf("%d,%d\n",k,z);
    printf("%d,%d",m++,++j);
}