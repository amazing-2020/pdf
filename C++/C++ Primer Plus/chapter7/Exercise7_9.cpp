#include <iostream>
#include <cstring>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; ++i) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    int count = 0;
    cout << "Enter the full name of the student #" << count+1 << ": ";
    while (count < n && (cin.get(pa[count].fullname, SLEN).get()) && strcmp(pa[count].fullname, ""))
    {
        cout << "Enter the hoby: ";
        cin.get(pa[count].hobby, SLEN).get();
        cout << "Enter the ooplevel: ";
        (cin >> pa[count++].ooplevel).get();
        cout << "Enter the full name of the student #" << count+1 << ": ";
    }
    return count;
}

void display1(student st)
{
    cout << st.fullname << " has the hobby: " << st.hobby << ", and the ooplevel is " << st.ooplevel << endl;
}

void display2(const student * ps)
{
    cout << ps->fullname << " has the hobby: " << ps->hobby << ", and the ooplevel is " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << pa[i].fullname << " has the hobby: " << pa[i].hobby << ", and the ooplevel is " << pa[i].ooplevel << endl;
}