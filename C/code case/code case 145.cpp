#include <stdio.h>
#include <string.h>

const int MAX_NAME_SIZE = 30;

class Student
{
    public:
        Student(char *pszName);
        ~Student();
    public:
        static void PrintfAllStudents();
    private:
        char m_name[MAX_NAME_SIZE];
        Student *next;
        Student *prev;
        static Student *m_head;
};

Student::Student(char *pszname)
{
    strcpy(this->m_name, pszname);

    this->next = m_head;
    this->prev = NULL;
    if (m_head != NULL)
    {
        m_head->prev = this;
    }
    m_head = this;
};

Student::~Student ()
{
    if (this == m_head)
    {
        m_head = this->next;
    } else {
        this->prev->next = this->next;
        this->next->prev = this->prev;
    }
}

void Student::PrintfAllStudents()
{
    for (Student *p = m_head; p != NULL; p = p->next)
    {
        printf("%s \n", p->m_name);
    }
}

Student* Student::m_head = NULL;

int main(void)
{
    Student studentA((char*)"AAA");
    Student studentB((char*)"BBB");
    Student studentC((char*)"CCC");
    Student studentD((char*)"DDD");
    Student student((char*)"MoreWindows");
    Student::PrintfAllStudents();

}

