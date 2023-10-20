#include <stdio.h>
int x=0;
int y=0;

void boo(void)
{
    printf ("%d %d\n",x,y);
}
int goo(void)
{
    int z; /*------->point B (when called from foo)*/
    x=2;
    z=x+y;
    y=4;
    boo();
    return z;
}
void foo(void)
{
    int x;
    x=4; /*------->point A*/
    y=x*2-3;
    boo();
    y=goo();
    printf("%d %d\n",x,y);
}





int main (void)
{
    x=goo();
    foo();
    printf("%d %d\n",x,y);
}