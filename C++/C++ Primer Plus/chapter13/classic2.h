#ifndef CLASSIC2_H_
#define CLASSIC2_H_
#include "cd2.h"
class Classic : public Cd
{
private:
    char * songs;
public:
    Classic(const char * song, const char * s1, const char * s2, int n, double x);
    Classic(const Classic & c);
    Classic();
    ~Classic();
    void Report() const;
    Classic & operator=(const Classic & c);
};
#endif