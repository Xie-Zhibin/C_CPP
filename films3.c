#include <stdio.h>
#include <stdlib.h>
#include "lib/list.h"
void showmovies(Item item);

int main(void) {
    List movies;
    Item temp;

    // initialize
    initialize_list(&movies);
    if (list_is_full(movies)) {
        fprintf(stderr, "No memory available! Bye!\n");
        exit(1);
    }
    puts("Enter first movie title: ");
    while (gets(temp.title) != NULL && temp.title[0] != '\0') {
        puts("Enter your rating <0-10>: ");
        scanf("%d", &temp.rating);
        while (getchar() != NULL) {
            continue;
        }

        if (add_item(temp, &movies) == false) {
            fprintf(stderr, "Problem allocating memory\n");
            break;
        }
        if (list_is_full(movies)) {
            puts("The list is now full.\n");
            break;
        }
        puts("Enter next movie title (empty line to stop): ");
    }
    if (list_is_empty(movies)) {
        printf("No data entered.\n");
    }
    else {
       puts("Here is the movie list:\n");
       traverse(movies, showmovies);
    }

    printf("You entered %d movies.\n", list_item_count(movies));
    empty_the_list(&movies);
    printf("Bye!\n");
    return 0;
}

void showmovies(Item item) {
    printf("Movies: %s Rating: %d\n", item.title, item.rating);
}
