#include <iostream>

template<typename T>
double SumArray(T arr[], int n);
// 返回类型必须相同，选择模板的依据大多数和const参数有关,没有const参数将无法匹配合适的模板函数
struct debts {
    char name[50];
    double amount;
};

template<> double SumArray(const debts d[], int n);

int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    const struct debts mr_E[3] = {
            {"Ima Wolfe", 2400.7},
            {"Ura Foxe", 1300.0},
            {"Iby Stout", 1800.0}
    };
    cout << "Listening Mr. E's sum of things:\n";
    cout << SumArray(things, 6) << endl;
    cout << "Listening Mr. E's debts:\n";
    cout << SumArray(mr_E, 3);

    return 0;
}

template<typename T>
double SumArray(T arr[], int n)
{
    T sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i];
    return sum;
}

template <> double SumArray(const debts d[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; ++i)
        sum += d[i].amount;
    return sum;
}