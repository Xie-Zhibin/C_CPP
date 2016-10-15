#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>

#define TSIZE 45

struct film {
    char title[TSIZE];
    int rating;
};

typedef struct film Item;

typedef struct node {
    Item item;
    struct node * next;
} Node;

typedef Node * List;

// initialize a new list
void initialize_list(List * plist);

// test whether if the list is empty
bool list_is_empty(const List * plist);

// test whether if the list is full
bool list_is_full(const List * plist);

// return the count of list
unsigned int list_item_count(const List * plist);

// add item to list
bool add_item(Item item, List * plist);

// travers the list
void travers(const List * plist, void (* pfun)(Item item));

// empty the list
void empty_the_list(List * plist);

#endif

