// Exercise17.5
#ifndef _STACK_H_
#define _STACK_H_
#include <stdbool.h>
typedef struct item {
  int gumption;
  char charisma;
}Item;

#define MAXSTACK 10

typedef struct node {
  Item item;
  struct node * last;
}Node;

typedef struct stack {
  Node * rear;
  int items;
}Stack;

void InitializeStack(Stack * ps);

bool StackIsFull(Stack * ps);

bool StackIsEmpty(Stack * ps);

bool StackItemCount(Stack * ps);

bool EnStack(Stack * ps);

bool DeStack(Stack * ps);

void EmptyTheStack(Stack * ps);

#endif