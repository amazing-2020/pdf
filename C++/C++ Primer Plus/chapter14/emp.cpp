#include "emp.h"
#include <iostream>
#include <string>
using std::cin;
using std::getline;
using std::cout;
using std::endl;

abstr_emp::abstr_emp()
{
    fname = "no body";
    lname = "no body";
    job = "no job";
}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln, const std::string & j)
 : fname(fn), lname(ln), job(j) {}

void abstr_emp::ShowAll() const
{
    cout << "First name: " << fname << ", Last name: " << lname << "\n";
    cout << "Job: " << job << endl;
}

void abstr_emp::SetAll()
{
    cout << "Enter the first name: ";
    getline(cin, fname);
    cout << "Enter the last name: ";
    getline(cin, lname);
    cout << "Enter the person's job: ";
    getline(cin, job);
}

std::ostream &operator<<(std::ostream & os, const abstr_emp & e)
{
    os << e.fname << " " << e.lname << ", job is: " << e.job << endl;
    return os;
}

abstr_emp::~abstr_emp() {}

employee::employee() : abstr_emp() {}

employee::employee(const std::string & fn, const std::string & ln, const std::string & j)
 : abstr_emp(fn, ln, j) {}

void employee::ShowAll() const
{
    cout << "\nThis is an employee:\n";
    abstr_emp::ShowAll();
}

void employee::SetAll()
{
    cout << "Enter the employee's data:\n";
    abstr_emp::SetAll();
}

manager::manager() 
 : abstr_emp(), inchargeof(0) {}

manager::manager(const std::string & fn, const std::string & ln, const std::string & j, int ico)
 : abstr_emp(ln, fn, j), inchargeof(ico) {}

manager::manager(const abstr_emp & e, int ico) 
 : abstr_emp(e), inchargeof(ico) {}

manager::manager(const manager & m)
 : abstr_emp(m), inchargeof(m.inchargeof) {} 

void manager::ShowAll() const
{
    cout << "\nHere is a manager: \n";
    abstr_emp::ShowAll();
    cout << "The manager manage " << inchargeof << " employee." << endl;
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter the amount that this manager \nis managing: ";
    cin >> inchargeof;
    while (cin.get() != '\n') {
        continue;
    }
}

fink::fink() 
 : abstr_emp(), reportsto("None") {}

fink::fink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo)
 : abstr_emp(fn, ln, j), reportsto(rpo) {}

fink::fink(const abstr_emp & e, const std::string & rpo)
 : abstr_emp(e), reportsto(rpo) {}

fink::fink(const fink & e)
 : abstr_emp(e), reportsto(e.reportsto) {}

void fink::ShowAll() const
{
    cout << "\nThis is a fink:\n";
    abstr_emp::ShowAll();
    cout << "To whom fink reports: " << reportsto << endl;
}

void fink::SetAll()
{
    cout << "Enter the fink's data:\n";
    abstr_emp::SetAll();
    cout << "Enter the name of the pereson the fink report to ";
    getline(cin, reportsto);
}

highfink::highfink() {}

highfink::highfink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo, int ico)
 : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}

highfink::highfink(const abstr_emp & e, const std::string & rpo, int ico)
 : abstr_emp(e), manager(e, ico), fink(e, rpo) {} 

highfink::highfink(const fink & f, int ico)
 : abstr_emp(f), manager(f, ico), fink(f) {}

highfink::highfink(const manager & m, const std::string & rpo)
 : abstr_emp(m), manager(m), fink(m, rpo) {}

highfink::highfink(const highfink & h)
 : abstr_emp(h), manager(h), fink(h) {}

void highfink::ShowAll() const
{
    cout << "\nThis is a highfink: \n";
    abstr_emp::ShowAll();
    cout << "This manager reports to " << fink::ReportsTo() <<
            " and manage " << manager::InChargeOf() << " employee." << endl;
}

void highfink::SetAll()
{
    cout << "Enter the highfink's data:\n";
    abstr_emp::SetAll();
    cout << "Enter the amount that this manager \nis managing: ";
    cin >> manager::InChargeOf();
    while (cin.get() != '\n') {
        continue;
    }
    cout << "Enter the name of the pereson the fink report to: ";
    getline(cin, fink::ReportsTo());
}