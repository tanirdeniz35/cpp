#include <stdio.h>

void boo(int x, int y) {
    printf("%d %d\n", x, y);
}

int goo(int x, int y) {
    int z; /*------->point B (when called from foo)*/
    x = 2;
    z = x + y;
    y = 4;
    boo(x, y);
    return z;
}

void foo() {
    int x = 4; /*------->point A*/
    int y = x * 2 - 3;
    boo(x, y);
    y = goo(x, y);
    printf("%d %d\n", x, y);
}

int main(void) {
    int x = 0;
    int y = 0;
    x = goo(x, y);
    foo();
    printf("%d %d\n", x, y);
    return 0;
}