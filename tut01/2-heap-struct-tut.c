#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void stack_struct() {
    struct node n;
    n.value = 42;
    n.next = NULL;

    // do smthn with the node
}

void heap_struct() {
    // TODO
}

int main(void) {
    stack_struct();
    heap_struct();

    return 0;
}