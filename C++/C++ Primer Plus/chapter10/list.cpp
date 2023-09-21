// compile with Exercise10_8.cpp
#include "list.h"
List::List()
{
    head = NULL;
    count = 0;
}

List::~List()
{
    Node * temp;
    while (head)
    {
        temp = head->next;
        delete head;
        head = temp;
    }
}

bool List::add(Item &i)
{
    if (count < MAX)
    {
        addItem(i);
        count++;
        return true;
    }
    else
        return false;
}

bool List::isfull() const
{
    if (count == MAX)
        return true;
    else
        return false;
}

bool List::isempty() const
{
    if (count == 0)
        return true;
    else
        return false;
}

void List::visit(void (*pf)(Item &))
{
    Node * temp = head;
    while (temp)
    {
        (*pf)(temp->item);
        temp = temp->next;
    }
}

void List::addItem(Item &item)
{
    if (head == NULL)
    {
        head = new Node;
        head->item = item;
        head->next = NULL;
    } else {
        Node * end = head;
        while (end->next)
            end = end->next;
        end->next = new Node;
        end->next->item = item;
        end->next->next = NULL;
    }
}