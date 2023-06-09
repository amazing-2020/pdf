#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list_17_3.h"

static Node * head = NULL;

static void CopyToNode(Item item, Node * pnode);

void InitializeList(List * plist)
{
  memset(plist, 0, sizeof(List));
}

bool ListIsEmpty(const List * plist)
{
  if (plist->items == 0)
    return true;
  else
    return false;
}

bool ListIsFull(const List * plist)
{
  bool full;

  if (plist->items == MAXSIZE)
    full = true;
  else
    full = false;

  return full;
}

unsigned int ListItemCount(const List * plist)
{
  return plist->items;
}

bool AddItem(Item item, List * plist)
{
  Node * pnew;
  Node * current = NULL;

  pnew = (Node *)malloc(sizeof(Node));
  if (pnew == NULL)
    return false;
  if (current == NULL)
  {
    current = pnew;
    head = current;
  }
  else
  {
    current = head;
    while (current->next != NULL)
      current = current->next;
    current->next = pnew;
  }
  CopyToNode(item, pnew);
  pnew->next = NULL;
  plist->entries[plist->items] = item;
  plist->items++;

  return true;
}

void Traverse(const List * plist, void(*pfun)(Item item))
{
  for (int i = 0; i < plist->items; ++i) {
    (*pfun)(plist->entries[i]);
  }
}

void EmptyTheList(List * plist)
{
  Node * psave;
  while (head->next != NULL)
  {
    psave = head->next;
    free(head);
    head = psave;
  }
  head = NULL;
  memset(plist, 0, sizeof(List));
}

static void CopyToNode(Item item, Node * pnode)
{
  pnode->item = item;
}

// without node type
/*
void InitializeList(List * plist)
{
 memset(plist, 0, sizeof(List));
}

bool ListIsEmpty(const List * plist)
{
 if (plist->items == 0)
   return true;
 else
   return false;
}

bool ListIsFull(const List * plist)
{
 bool full;

 if (plist->items == MAXSIZE)
   full = true;
 else
   full = false;

 return full;
}

unsigned int ListItemCount(const List * plist)
{
 return plist->items;
}

bool AddItem(Item item, List * plist)
{
 plist->entries[plist->items] = item;
 plist->items++;

 return true;
}

void Traverse(const List * plist, void(*pfun)(Item item))
{
 for (int i = 0; i < plist->items; ++i) {
   (*pfun)(plist->entries[i]);
 }
}

void EmptyTheList(List * plist)
{
 memset(plist, 0, sizeof(List));
}
*/