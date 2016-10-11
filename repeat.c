#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int count;

    printf("The command line has %d arguments: \n", argc - 1);
    for (count = 0; count < argc; count++) {
        printf("%d: %s\n", count, argv[count]);
    }
    int arg = atoi(argv[1]);
    printf("%d\n", arg);
    return 0;
}


