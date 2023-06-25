#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "17_8_tree.h"

typedef struct pair {
  Trnode * parent;
  Trnode * child;
} Pair;

static Trnode * MakeNode(const Item * pi);
static bool ToLeft(const Item * i1, const Item * i2);
static bool ToRight(const Item * i1, const Item * i2);
static void AddNode(Trnode * new_node, Trnode * root);
static void InOrder(const Trnode * root, void(*pfun) (Item item));
static Pair SeekItem(const Item * pi, const Tree * ptree);

/*
 * Try to find a same pet-kind
 */
static bool SeekKind(const Item * pi, const Kind * p2);

static void DeleteNode(Trnode **ptr);
static void DeleteAllNodes(Trnode * ptr);

static void DeleteKind(Item * pi, Kind * pk);
static void DeleteAllKinds(Item * pi);
void InitializeTree(Tree * ptree)
{
  ptree->root = NULL;
  ptree->size = 0;
}

bool TreeIsEmpty(const Tree * ptree)
{
  if (ptree->root == NULL)
    return true;
  else
    return false;
}

bool TreeIsFull(const Tree * ptree)
{
  if (ptree->size == MAXITEMS)
    return true;
  else
    return false;
}

int TreeItemCount(Tree * ptree)
{
  return ptree->size;
}

bool AddItem(const Item * pi, Tree * ptree)
{
  Trnode * new_node;

  if (TreeIsFull(ptree))
  {
    fprintf(stderr, "Tree is full.\n");
    return false;
  }
  if ((new_node = SeekItem(pi, ptree).child) != NULL)
  {
    /*
     * now the pointer move to a destination that find the same name
     * new_node point to a place in the tree
     */
    if (!SeekKind(&new_node->item, pi->pKind))
    {
      free(pi->pKind);
      fprintf(stderr, "Attempted to add duplicate item.\n");
      return false;
    } else {
      Item temp = new_node->item;
      while (temp.pKind->next)
        temp.pKind = temp.pKind->next;
      temp.pKind->next = pi->pKind;
      ptree->size++;
      return true;
    }
  }
  new_node = MakeNode(pi);
  if (new_node == NULL)
  {
    fprintf(stderr, "Couldn't create node.\n");
    return false;
  }
  ptree->size++;

  if (ptree->root == NULL)
    ptree->root = new_node;
  else
    AddNode(new_node, ptree->root);

  return true;
}

Item InTree(const Item * pi, const Tree * ptree)
{
  return SeekItem(pi, ptree).child->item;
}

bool DeleteItem(const Item * pi, Tree * ptree)
{
  Pair look;

  look = SeekItem(pi, ptree);
  if (look.child != NULL)
  {
    Item temp = look.child->item;
    if (!SeekKind(&temp, pi->pKind)) // find it
    {
      DeleteKind(&look.child->item, pi->pKind);
      if (look.child->item.pKind == NULL)
      {
        if (look.parent == NULL)
          DeleteNode(&ptree->root);
        else if (look.parent->left == look.child)
          DeleteNode(&look.child->left);
        else
          DeleteNode(&look.child->right);
      }
      ptree->size--;
      return true;
    } else {
      printf("Null\n");
      return false;
    }
  } else {
    printf("Null\n");
    return false;
  }
}

void Traverse(const Tree * ptree, void (*pfun)(Item item))
{
  if (ptree != NULL)
    InOrder(ptree->root, pfun);
}

void DeleteAll(Tree * ptree)
{
  if (ptree->root != NULL)
    DeleteAllNodes(ptree->root);
  ptree->root = NULL;
  ptree->size = 0;
}

static void InOrder(const Trnode * root, void(*pfun) (Item item))
{
  if (root != NULL)
  {
    InOrder(root->left, pfun);
    (*pfun) (root->item);
    InOrder(root->right, pfun);
  }
}

static void DeleteAllNodes(Trnode * root)
{
  Trnode * pright;

  if (root != NULL)
  {
    pright = root->right;
    DeleteAllNodes(root->left);
    free(root);
    DeleteAllNodes(pright);
  }
}

static void AddNode(Trnode * new_node, Trnode * root)
{
  if (ToLeft(&new_node->item, &root->item))
  {
    if (root->left == NULL)
      root->left = new_node;
    else
      AddNode(new_node, root->left);
  }
  else if (ToRight(&new_node->item, &root->item))
  {
    if (root->right == NULL)
      root->right = new_node;
    else
      AddNode(new_node, root->right);
  }
  else
  {
    fprintf(stderr, "Location error in AddNode().\n");
    exit(1);
  }
}

static bool ToLeft(const Item * i1, const Item * i2)
{
  if (strcmp(i1->petname, i2->petname) < 0)
    return true;
  else
    return false;
}

static bool ToRight(const Item * i1, const Item * i2)
{

  if (strcmp(i1->petname, i2->petname) > 0)
    return true;
  else
    return false;
}

static Trnode * MakeNode(const Item * pi)
{
  Trnode * new_node;

  new_node = (Trnode *) malloc(sizeof(Trnode));

  if (new_node != NULL)
  {
    new_node->item = *pi;
    new_node->right = NULL;
    new_node->left = NULL;
  }

  return new_node;
}

static Pair SeekItem(const Item * pi, const Tree * ptree)
{
  Pair look;
  look.parent = NULL;
  look.child = ptree->root;

  if (look.child == NULL)
    return look;
  while (look.child != NULL)
  {
    if (ToLeft(pi, &(look.child->item)))
    {
      look.parent = look.child;
      look.child = look.child->left;
    }
    else if (ToRight(pi, &(look.child->item)))
    {
      look.parent = look.child;
      look.child = look.child->right;
    }
    else
      break;
  }
  return look;
}

static bool SeekKind(const Item * pi, const Kind * k2)
{
  Kind * temp = pi->pKind;
  while (temp != NULL)
  {
    if (strcmp(temp->petkind, k2->petkind) != 0)
      temp = temp->next;
    else
      return false; //find it
  }
  return true; //not find
}

static void DeleteNode(Trnode **ptr)
{
  Trnode * temp;
  if ((*ptr)->left == NULL)
  {
    temp = *ptr;
    *ptr = (*ptr)->right;
    free(temp);
  }
  else if ((*ptr)->right == NULL)
  {
    temp = *ptr;
    *ptr = (*ptr)->left;
    free(temp);
  }
  else
  {
    for (temp = (*ptr)->left;  temp->right != NULL; temp = temp->right)
      continue;
    temp->right = (*ptr)->right;
    temp = *ptr;
    *ptr = (*ptr)->left;
    free(temp);
  }
}

/*
 * How to record the pointer to the current object
 */
static void DeleteKind(Item * pi, Kind * pk)
{
  Kind ** to_current;
  Item temp = *(pi);

  to_current = &(pi->pKind);

  while (temp.pKind)
  {
    if (strcmp(temp.pKind->petkind, pk->petkind) == 0)
    {
      *to_current = temp.pKind->next;
      free(temp.pKind);
      break;
    }
    to_current = &(temp.pKind->next);
    temp.pKind = temp.pKind->next;
  }
}

static void DeleteAllKinds(Item * pi)
{
  Kind * save;
  while (pi->pKind)
  {
    save = pi->pKind->next;
    free(pi->pKind);
    pi->pKind = save;
  }
}
