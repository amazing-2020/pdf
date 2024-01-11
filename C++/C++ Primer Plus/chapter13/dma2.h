#ifndef DMA2_H_
#define DMA2_H_
#include <iostream>

class DMA
{
private:
    char * label;
    int rating;
public:
    DMA(const char * l = "null", int r = 0);
    DMA(const DMA & rd);
    virtual ~DMA();
    DMA & operator=(const DMA & rd);
    friend std::ostream & operator<<(std::ostream & os, const DMA & rs);
};

class baseDMA : public DMA
{
public:
    baseDMA(const char * l = "null", int r = 0);
    baseDMA(const baseDMA & rs);
    virtual ~baseDMA();
    baseDMA & operator=(const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};

class lacksDMA : public DMA
{
private:
    enum { COL_LEN = 40};
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "null", const char * l = "null", int r = 0);
    lacksDMA(const char * c, const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
};

class hasDMA : public DMA
{
private:
    char * style;
public:
    hasDMA(const char * c = "blank", const char * l = "null", int r = 0);
    hasDMA(const char * c, const baseDMA & rs);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};

#endif