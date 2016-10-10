#include <stdio.h>

int main(void) {
    int a[1];
    int * pt = a;
    printf("Add of pt is: %p\n", pt);
    *pt = 5;
    printf("Value of *pt is: %d\n", *pt);
    return 0;
}
