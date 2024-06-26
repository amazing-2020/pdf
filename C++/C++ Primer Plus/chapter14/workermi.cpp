//compile with example14.12.cpp
#include "workermi.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

Worker::~Worker() {}

void Worker::Data() const
{
    cout << "Name: " << fullname << "\n";
    cout << "Employee ID: " << id << "\n";   
}

void Worker::Get()
{
    getline(cin, fullname);
    cout << "Enter the worker's ID: ";
    cin >> id;
    while (cin.get() != '\n')
        continue;
}

void Waiter::Set()
{
    cout << "Enter the worker name: ";
    Worker::Get();
    Get();
}

void Waiter::Show() const
{
    cout << "Category: waiter\n";
    Worker::Data();
    Data();
}

void Waiter::Data() const
{
    cout << "Panache rating: " << panache << "\n";
}

void Waiter::Get()
{
    cout << "Enter waiter's panache rating: ";
    cin >> panache;
    while (cin.get() != '\n')
        continue;
}

char * Singer::pv[] = {"other", "alto", "contralto", "soprano", 
                    "bass", "baritone", "tenor"};

void Singer::Set()
{
    cout << "Enter Singer's name: ";
    Worker::Get();
    Get();
}

void Singer::Show() const
{
    cout << "Category: singer\n";
    Worker::Data();
    Data();
}

void Singer::Data() const
{
    cout << "Vocal range: " << pv[voice] << "\n";
}

void Singer::Get()
{
    cout << "Enter number for singer's vocal range:\n";
    int i;
    for (i = 0; i < Vtypes; i++)
    {
        cout << i << ": " << pv[i] << " ";
        if (i % 4 == 3)
            cout << endl;
    }
    if (i % 4 != 0)
        cout << endl;
    while (cin >> voice && (voice < 0 || voice >= Vtypes)) 
        cout << "Please enter a value >= 0 and < " << Vtypes << endl;
    while (cin.get() != '\n')
        continue;
}


void SingingWaiter::Data() const
{
    Singer::Data();
    Waiter::Data();
}

void SingingWaiter::Get()
{
    Waiter::Get();
    Singer::Get();
}

void SingingWaiter::Set()
{
    cout << "Enter Singing waiter's name: ";
    Worker::Get();
    Get();
}

void SingingWaiter::Show() const
{
    cout << "Category: singing waiter\n";
    Worker::Data();
    Data();
}
