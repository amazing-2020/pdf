//Exercise17.5
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

static void CopyToNode(const Item item, Node * pn);

void InitializeStack(Stack * ps)
{
  ps->rear = ps->top = NULL;
  ps->items = 0;
}

bool StackIsFull(const Stack * ps)
{
  Node * pt;
  bool full;

  pt = (Node *)malloc(sizeof(Node));
  if (pt == NULL || ps->items == MAXSTACK)
    full = true;
  else
    full = false;
  free(pt);

  return full;
}

bool StackIsEmpty(const Stack * ps)
{
  return ps->items == 0;
}

unsigned int StackItemCount(const Stack * ps)
{
  return ps->items;
}

bool EnStack(const Item item, Stack * ps)
{
  Node * pnew;

  if (StackIsFull(ps))
    return false;
  pnew = (Node *)malloc(sizeof(Node));
  if (pnew == NULL)
  {
    fprintf(stderr, "Unable to allocate memory!\n");
    exit(1);
  }
  CopyToNode(item, pnew);
  if (StackIsEmpty(ps))
  {
    ps->top = ps->rear = pnew;
    pnew->last = NULL;
  }
  else
  {
    pnew->last = ps->top;
    ps->top = pnew;
  }
  ps->items++;

  return true;
}

void Traverse(const Stack * ps, void(*pfun)(Item item))
{
  Node * pnode = (*ps).top;

  while (pnode != NULL)
  {
    (*pfun)(pnode->item);
    pnode = pnode->last;
  }
}

void EmptyTheStack(Stack * ps)
{
  Node * temp;
  while (ps->top)
  {
    temp = ps->top->last;
    free(ps->top);
    ps->top = temp;
    ps->items--;
  }
  ps->rear = NULL;
}

static void CopyToNode(const Item item, Node * pn)
{
  pn->item = item;
}