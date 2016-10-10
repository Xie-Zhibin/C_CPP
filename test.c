#include <stdio.h>

int func(void);
int i;

int main(void) {
    func();
}

int func(void) {
    i = 2;
    printf("hello, world\n");
    printf("%d\n", i);
    return 0;
}
