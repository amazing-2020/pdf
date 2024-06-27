#include <iostream>
#include <ostream>
using std::cout;
using std::endl;

template<typename T> void counts();
template<typename T> void report(T &);

template <typename TT>
class HasFriend
{
    private:
        TT item;
        static int ct;
    public:
        HasFriend(const TT & i) : item(i) {ct++;}
        ~HasFriend() {ct--;}
        friend void counts<TT>();
        friend void report<>(HasFriend<TT> &);
};

template<typename T>
int HasFriend<T>::ct = 0;

template<typename T>
void counts()
{
    cout << "templates size: " << sizeof(HasFriend<T>) << "; ";
    cout << "templates count: " << HasFriend<T>::ct << endl;
}

template<typename T>
void report(T & hf)
{
    cout << hf.item << endl;
}

int main()
{
    counts<int>();
    HasFriend<int> hfi1(10);
    HasFriend<int> hfi2(20);
    HasFriend<double> hfdb(10.5);
    report(hfi1);
    report(hfi2);
    report(hfdb);
    cout << "counts<int>() output:\n";
    counts<int>();
    cout << "counts<double>() output:\n";
    counts<double>();

    return 0;
}
