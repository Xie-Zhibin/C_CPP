#include <stdio.h>
#include <string.h>

int func(void);
int i;

int main(void) {
    func();
    int n = 12;
    int a[n];
    char string[] = "abc";
    printf("length: %lu\n", strlen(string));
}

int func(void) {
    i = 2;
    printf("hello, world\n");
    printf("%d\n", i);
    return 0;
}
