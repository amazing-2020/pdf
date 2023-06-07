// Exercise17.5
#ifndef _STACK_H_
#define _STACK_H_
#include <stdbool.h>
#define NLEN 30
#define MAXSTACK 20

struct item {
  double cost;
  char brand[NLEN];
};

typedef struct item Item;

typedef struct node {
  Item item;
  struct node * last;
}Node;

typedef struct stack {
  Node * top;
  Node * rear;
  int items;
}Stack;

//typedef Node * Stack;

void InitializeStack(Stack * ps);

bool StackIsFull(const Stack * ps);

bool StackIsEmpty(const Stack * ps);

unsigned int StackItemCount(const Stack * ps);

bool EnStack(const Item item, Stack * ps);

void Traverse(const Stack * ps, void(*pfun)(Item item));

void EmptyTheStack(Stack * ps);

#endif