#ifndef TREE_17_7
#define TREE_17_7
#include <stdbool.h>

#define WLEN 24
typedef struct item {
  char word[WLEN];
  int n;
}Item;

typedef struct trnode {
  Item item;
  struct trnode * left;
  struct trnode * right;
}Trnode;

#define MAXITEMS 9999

typedef struct tree {
  Trnode * root;
  int size;
} Tree;

void InitializeTree(Tree * ptree);

bool TreeIsEmpty(const Tree * ptree);

bool TreeIsFull(const Tree * ptree);

bool AddItem(const Item * pi, Tree * ptree);

/*
 * return the count of the word in the tree, or 0 if the word do not exist
 */
int InTree(const Item * pi, const Tree * ptree);

void Traverse(const Tree * ptree, void (*pfun)(Item item));

void DeleteAll(Tree * ptree);

#endif
