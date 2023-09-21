#ifndef GOLF_H_
#define GOLF_H_
class Golf
{
private:
    static const int len = 40;
    char fullname[len];
    int handicap_;
public:
    Golf();
    Golf(const char * str, int a);
    int setgolf();
    void handicap(const int hc);
    void showgolf() const;
};
#endif