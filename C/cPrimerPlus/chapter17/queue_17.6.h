#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>

typedef int Item;

#define MAXQUEUE 10
/*
 * The node contains an item(need to allocate memory)
 * and the pointer to the next node
 */
typedef struct node {
  Item item;
  struct node * next;
}Node;
/*
 * The queue contains a head pointer,the tail pointer and the node count
 */
typedef struct queue {
  Node * front;
  Node * rear;
  int items;
}Queue;

void InitializeQueue(Queue * pq);

bool QueueIsFull(const Queue * pq);

bool QueueIsEmpty(const Queue * pq);

int QueueItemCount(const Queue * pq);

/*
 * add a node to an existing queue
 */
bool EnQueue(Item item, Queue * pq);

bool DeQueue(Item * pitem, Queue * pq);

void EmptyTheQueue(Queue * pq);

#endif
