#include <iostream>
int count = 0;
void print_str(const char * str);
void print_str(const char * str, int n);
int main()
{
    using namespace std;
    const char * str = "I love beautiful girls.";
    print_str(str, 0);
    print_str(str);
    print_str(str, 1);

    return 0;
}

void print_str(const char * str)
{
    count++;
    std::cout << str << std::endl;
}

void print_str(const char * str, int n)
{
    count++;
    if (n != 0)
        for (int i = 0; i < count; ++i)
            std::cout << str << std::endl;
}