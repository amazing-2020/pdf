#include <string>
typedef struct data {
    std::string name;
    double score;
    int ranking;
} Item;

typedef struct node {
    Item item;
    struct node * next;
}Node;

class List
{
private:
    static const int MAX = 10;
    Node * head;
    int count;
    void addItem(Item &item);
public:
    List();
    ~List();
    bool add(Item & i);
    bool isfull() const;
    bool isempty() const;
    void visit(void (*pf)(Item &));
};