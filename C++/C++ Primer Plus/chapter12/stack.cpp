// compile with Exercise12_4.cpp
#include <iostream>
#include "stack.h"

Stack::Stack(int n)
{
    pitems = new Item [n]();
    size = 0;
    top = -1;
}

Stack::Stack(const Stack &st)
{
    if (st.size > 0)
    {
        pitems = new Item [st.size];
        size = st.size;
        top = st.top;
        for (int i = 0; i < size; ++i)
            pitems[i] = st.pitems[i];
    } else {
        pitems = nullptr;
        size = 0;
        top = -1;
    }
}

Stack::~Stack()
{
    if (size > 0)
        delete[] pitems;
}

bool Stack::isempty() const
{
    if (size == 0)
        return true;
    else
        return false;
}

bool Stack::isfull() const
{
    if (size == MAX)
        return true;
    else
        return false;
}

bool Stack::push(const Item &item)
{
    if (size < MAX)
    {
        size++;
        pitems[++top] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item &item)
{
    if (size > 0)
    {
        size--;
        item = pitems[top--];
        return true;
    }
    else
        return false;
}

Stack &Stack::operator=(const Stack &st)
{
    if (this == &st)
        return *this;
    if (st.size > 0)
    {
        delete[] pitems;
        pitems = new Item [st.size];
        size = st.size;
        top = st.top;
        for (int i = 0; i < size; ++i)
            pitems[i] = st.pitems[i];
    }
    return *this;
}