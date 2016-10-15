#include <stdio.h>

int main(void) {
    int a[1];
    int * pt;
    pt = a;
    *pt = 5;
    printf("Add of pt is: %p\n", pt);
    printf("Value of *pt is: %d\n", *pt);
    return 0;
}
