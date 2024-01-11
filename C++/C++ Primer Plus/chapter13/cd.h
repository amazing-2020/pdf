#ifndef CD_H_
#define CD_H_
class Cd
{
private:
    char performance[50];
    char label[20];
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