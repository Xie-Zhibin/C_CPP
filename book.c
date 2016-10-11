#include <stdio.h>
#define MAXTITL 41
#define MAXAUTL 31

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
}library;

int main(void) {
    printf("Enter the book title, Please.\n");
    gets(library.title);
    printf("Now enter the author\n");
    gets(library.author);
    printf("Now enter the value\n");
    scanf("%f", &library.value);
    printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
    printf("Done.\n");
    return 0;
}
