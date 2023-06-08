#include <stdio.h>
#include <stdlib.h>
#include "list_17_2.h"

static void CopyToNode(Item item, Node * pnode);

void InitializeList(List * plist)
{
  /*
   * It means that the pointer which point to a "Node *" type variable
   * (here is 'movies') is set to NULL
   */
  plist->head = NULL;
  plist->last = NULL;
}

bool ListIsEmpty(const List * plist)
{
  if (plist->head == NULL)
    return true;
  else
    return false;
}

bool ListIsFull(const List * plist)
{
  Node * pt;
  bool full;

  pt = (Node *)malloc(sizeof(Node));
  if (pt == NULL)
    full = true;
  else
    full = false;
  free(pt);

  return full;
}

unsigned int ListItemCount(const List * plist)
{
  unsigned int count = 0;
  Node * pnode = plist->head;

  while (pnode != NULL)
  {
    ++count;
    pnode = pnode->next;
  }

  return count;
}

bool AddItem(Item item, List * plist)
{
  Node * pnew;
  Node * scan = plist->last;

  pnew = (Node *)malloc(sizeof(Node));
  if (pnew == NULL)
    return false;

  CopyToNode(item, pnew);
  pnew->next = NULL;
  if (scan == NULL)
  {
    plist->head = plist->last = pnew;
  }
  else
  {
    scan->next = pnew;
    plist->last = pnew;
  }

  return true;
}

void Traverse(const List * plist, void(*pfun)(Item item))
{
  Node * pnode = plist->head;

  while (pnode != NULL)
  {
    (*pfun)(pnode->item);
    pnode = pnode->next;
  }
}

void EmptyTheList(List * plist)
{
  Node * psave = plist->head, * temp;

  while (psave != NULL)
  {
    temp = psave->next;
    free(psave);
    psave = temp;
  }
  plist->head = plist->last = NULL;
}

static void CopyToNode(Item item, Node * pnode)
{
  pnode->item = item;
}
