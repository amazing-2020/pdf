//compile with Exercise13.3.cpp
#include "dma2.h"
#include <cstring>

DMA::DMA(const char *l, int r)
{
    label = new char [std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

DMA::DMA(const DMA &rd)
{
    label = new char [std::strlen(rd.label) + 1];
    std::strcpy(label, rd.label);
    rating = rd.rating;
}

DMA::~DMA()
{
    delete [] label;
}

DMA &DMA::operator=(const DMA &rd)
{
    if (this == &rd)
        return *this;
    delete [] label;
    label = new char [std::strlen(rd.label) + 1];
    std::strcpy(label, rd.label);
    rating = rd.rating;
    return *this;
}

std::ostream & operator<<(std::ostream & os, const DMA & rs)
{
    os << "Label: " << rs.label << std::endl;
    os << "Rating: " << rs.rating << std::endl;
    return os;
}

baseDMA::baseDMA(const char *l, int r) : DMA(l, r)
{
}

baseDMA::baseDMA(const baseDMA &rs) : DMA(rs)
{
}

baseDMA::~baseDMA()
{
}

baseDMA &baseDMA::operator=(const baseDMA &rs)
{
    DMA::operator=(rs);
}

std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
    os << (const DMA &) rs;
    return os;
}

lacksDMA::lacksDMA(const char *c, const char *l, int r) : DMA(l, r)
{
    std::strcpy(color, c);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char *c, const baseDMA &rs) : DMA(rs)
{
    std::strcpy(color, c);
    color[39] = '\0';
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & ls)
{
    os << (const DMA &) ls;
    os << "Color: " << ls.color << std::endl;
    return os;
}

hasDMA::hasDMA(const char *c, const char *l, int r) : DMA(l, r)
{
    style = new char [std::strlen(c) + 1];
    std::strcpy(style, c);
}

hasDMA::hasDMA(const char *c, const baseDMA &rs) : DMA(rs)
{
    style = new char [std::strlen(c) + 1];
    std::strcpy(style, c);
}

hasDMA::hasDMA(const hasDMA &hs) : DMA(hs)
{
    delete [] style;
    style = new char [std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

hasDMA &hasDMA::operator=(const hasDMA &hs)
{
    if (this == &hs)
        return *this;
    DMA::operator=(hs);
    delete[] style;
    style = new char [std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & rs)
{
    os << (const DMA &) rs;
    os << "Style: " << rs.style << std::endl;
    return os;
}