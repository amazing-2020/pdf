#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct num {
    int num;
    struct num * next;
} student;

int main(void) {
    int i, j;
    student* head = NULL;
    student* tail = NULL;
    student* p = NULL;
    student* q = NULL;
    student *temp;
    bool ishead = true;

    for (i=1; i<31; i++) {
        student *people = malloc(sizeof(student));
        people->num = i;
        if (ishead){
            head = people;
            head -> next = NULL;
            tail = people;
            ishead = false;
        } else {
            tail->next = people;
            tail = people;
        }
    }
    if (NULL != tail || NULL == tail) {
        tail->next = head;
    }
    i=30;
    p=head;
    q=head;
    while (i>15)
    {
        for (j=1; j<10; j++) {
            if (j==9) {
                printf("the num %d get off \n", p->num);
                i--;
                q->next = p->next;
                free(p);
                p = q->next;
            } else {
                q=p;
                p = p->next;
            }
        }
    }
    
    return 0;
}