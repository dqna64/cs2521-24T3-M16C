#include <stdbool.h>

// Note: This stack has a max size defined in the implementation.

typedef struct stack *Stack;

// Creates a new empty stack
Stack StackNew(void);

// Pushes an item onto the stack
void StackPush(Stack s, int item);

// Pops an item from the stack and returns it
// Assumes that the stack is not empty
int StackPop(Stack s);

// Returns the number of items on the stack
int StackSize(Stack s);

bool StackIsEmpty(Stack s);

// Frees memory allocated to the stack
void StackFree(Stack s);