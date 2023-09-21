#ifndef BANK_H_
#define BANK_H_
#include <string>
class Bank {
private:
    std::string name;
    std::string account;
    double money;
public:
    Bank();
    Bank(const std::string & s1, const std::string & s2, const double & d);
    ~Bank();
    void show() const;
    void addMoney(const double m);
    bool withdrawMoney(double m);
};
#endif