// Exercise17.5
#ifndef _STACK_H_
#define _STACK_H_
#include <stdbool.h>
#define MAX_SIZE 1000

struct item {
  char ch;
};

typedef struct item Item;

typedef struct node {
  Item item;
  struct node * last;
}Node;

typedef struct stack {
  Node * top;
  int items;
}Stack;

void InitializeStack(Stack * ps);

bool StackIsFull(const Stack * ps);

bool StackIsEmpty(const Stack * ps);

unsigned int StackItemCount(const Stack * ps);

bool EnStack(const Item item, Stack * ps);

void Traverse(const Stack * ps, void(*pfun)(Item item));

void EmptyTheStack(Stack * ps);

#endif