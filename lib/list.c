#include <stdio.h>
#include <stdlib.h>
#include "lib/list.h"

static void copy_to_node(Item item, Node * pnode);

void initialize_list(List * plist) {
    * plist = NULL;
}

bool list_is_empty(const List * plist) {
    if (* plist == NULL)
        return true;
    else
        return false;
}

bool list_is_full(const List * plist) {
    Node * pt;
    bool full;
    pt = (Node *)malloc(sizeof (Node));
    if (pt == NULL)
        full = true;
    else
        full = false;
    free(pt);
    return full;

}


unsigned int list_item_count(const List * plist) {
    unsigned int count = 0;
    Node * pnode = *plist;
    while (pnode != NULL) {
        ++count;
        pnode = pnode->next;
    }
    return count;
}


bool add_item(Item item, List * plist) {
    Node * pnew;
    Node * scan = *plist;
    pnew = (Node *)malloc(sizeof (Node));
    if (pnew == NULL)
        return false;
    copy_to_node(item, pnew);
    pnew->new = pnew;

    if (scan == NULL)
       *plist = pnew;
    else {
        while (scan->next != NULL) {
            scan = scan->next;
        }
        scan->next = pnew;
    }
    return true;

}


void traverse(const List * plist, void (* pfun)(Item item)) {
    Node * pnode = *plist;
    while (pnode != NULL) {
        (* pfun)(pnode->item);
        pnode = pnode->next;
    }
}


void empty_the_list(List * plist) {
    Node * psave;
    while (*plist != NULL) {
        psave = (*plist)->next;
        free(*plist);
        *plist = psave;
    }
}


static void copy_to_node(Item item, Node * pnode) {
    pnode->item = item;
}
