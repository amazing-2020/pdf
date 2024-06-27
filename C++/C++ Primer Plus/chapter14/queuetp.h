#ifndef QUEUETP_H_
#define QUEUETP_H_

template<class Type>
class Queue{
    private:
        enum {SIZE = 10};
        int queuesize;
        Type * items;
        int end;
    public:
        explicit Queue(int ss = SIZE);
        Queue(Queue & q);
        ~Queue() { delete [] items;}
        bool isempty() {return end == 0;}
        bool isfull() {return end == SIZE;}
        bool enqueue(const Type & item);
        bool outqueue(Type & item);
};

template <class Type>
Queue<Type>::Queue(int ss) : queuesize(ss), end(0)
{
    items = new Type[ss];
}

template <class Type>
Queue<Type>::Queue(Queue & q)
{
    end = q.end;
    queuesize = q.queuesize;
    items = new Type[queuesize];
    for (int i = 0; i < queuesize; i++) {
        items[i] = q.items[i];
    }
}

template <class Type>
bool Queue<Type>::enqueue(const Type & item)
{
    if (end < queuesize)
    {
        items[end++] = item;
        return true;
    } else {
        return false;
    }
}

template <class Type>
bool Queue<Type>::outqueue(Type & item)
{
    if (end > 0) {
        item = items[0];
        for (int i = 0; i < end-1; i++) {
            items[i] = items[i+1];
        }
        end--;
        return true;
    } else {
        return false;
    }
}


#endif
