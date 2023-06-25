#ifndef _TREE_H_
#define _TREE_H_
#include <stdbool.h>

#define SLEN 20
typedef struct kind {
  char petkind[SLEN];
  struct kind * next;
} Kind;

typedef struct item {
  char petname[SLEN];
  Kind * pKind;
}Item;

#define MAXITEMS 20

typedef struct trnode {
  Item item;
  struct trnode * left;
  struct trnode * right;
} Trnode;

typedef struct tree {
  Trnode * root;
  int size;
} Tree;


void InitializeTree(Tree * ptree);

bool TreeIsEmpty(const Tree * ptree);

bool TreeIsFull(const Tree * ptree);

int TreeItemCount(Tree * ptree);

bool AddItem(const Item * pi, Tree * ptree);

Item InTree(const Item * pi, const Tree * ptree);

bool DeleteItem(const Item * pi, Tree * ptree);

void Traverse(const Tree * ptree, void (*pfun)(Item item));

void DeleteAll(Tree * ptree);

#endif
