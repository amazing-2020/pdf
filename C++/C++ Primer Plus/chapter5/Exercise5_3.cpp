#include <iostream>
int main()
{
    int num, sum = 0;

    while ((std::cin >> num) && num != 0)
    {
        sum += num;
        std::cout << "until now, sum = " << sum << std::endl;
    }
    std::cout << "Done\n";
    return 0;
}