#include <stdio.h>
#include <stdlib.h>

int allocate(int n);

int main(void) {
    double * ptd;
    int max;
    int number;
    int i = 0;

    puts("What is the maximum number of type double entries?");
    scanf("%d", &max);
    while (i++ < max)
         allocate(i);
    //ptd = (double *) malloc(max * sizeof (double));
    //if (ptd == NULL) {
    //    puts("Memory allocation failed. Goodbye.");
    //    exit(EXIT_FAILURE);
    //}
    //puts("ENter the values (q to quite): ");
    //while (i < max && scanf("%lf", &ptd[i]) == 1) {
    //    ++i;
    //}
    //printf("Here are your %d entries: \n", number = i);
    //for (i = 0; i < number; i++) {
    //    printf("%7.2f ", ptd[i]);
    //    if (i % 7 == 6) {
    //        putchar('\n');
    //    }
    //}
    //if (i % 7 != 0) {
    //    putchar('\n');
    //}
    puts("Done.");
    getchar();
    getchar();
    //free(ptd);
    return 0;
}

int allocate(int n) {
    double * pt;
    pt = (double *) malloc(n * sizeof (double));
    for (int i = 0; i < n; i++) {
        pt[i] = i;
    }
    free(pt);
    return 0;
}
