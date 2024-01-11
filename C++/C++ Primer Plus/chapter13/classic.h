#ifndef CLASSIC_H_
#define CLASSIC_H_
#include "cd.h"
class Classic : public Cd
{
private:
    char songs[50];
public:
    Classic(const char * song, const char * s1, const char * s2, int n, double x);
    Classic(const Classic & c);
    Classic();
    ~Classic();
    void Report() const;
    Classic & operator=(const Classic & c);
};
#endif