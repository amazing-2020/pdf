#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "17_7_tree.h"

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
static void DeleteAllNodes(Trnode * ptr);


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
  if ((new_node = SeekItem(pi, ptree).child)!= NULL)
  {
    new_node->item.n++;
    return true;
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

int InTree(const Item * pi, const Tree * ptree)
{
  Trnode * temp = SeekItem(pi, ptree).child;
  if (temp != NULL)
    return temp->item.n;
  else
    return 0;
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
  if ((strcmp(i1->word, i2->word)) < 0)
    return true;
  else
    return false;
}

static bool ToRight(const Item * i1, const Item * i2)
{
  if ((strcmp(i1->word, i2->word)) > 0)
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
    /*
     *  For the item structure to be searched, it is either in the left or right
     *  subtree. If neither is true, it indicates that the item does not exist for
     *  the subtrees on both sides currently being searched, indicating that the
     *  root node of the subtrees on both sides is the item
     *  Only the loop condition means that the item does not exist
     */
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
