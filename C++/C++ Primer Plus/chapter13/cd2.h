#ifndef CD2_H_
#define CD2_H_
class Cd
{
private:
    char * performance;
    char * label;
    int selections;
    double playtime;
public:
    Cd(const char * s1 = "null", const char * s2 = "null", int n = 0, double x = 0);
    Cd(const Cd & d);
    virtual ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd & d);
};
#endif


