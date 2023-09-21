#ifndef PLORG_H_
#define PLORG_H_
class Plorg
{
private:
    static const int len = 19;
    char name[len];
    int CI;
public:
    Plorg(const char * str = "Plorg");
    void edit(const int a);
    void showprolg() const;
};
#endif