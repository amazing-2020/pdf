#include <iostream>
struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void show(const box);
void set_v(box *);
int main()
{
    using namespace std;
    box myBox;
    cout << "Please enter the box maker's name: ";
    cin.getline(myBox.maker, 40);
    cout << "Please enter the three borders of the box(\u006D\u006D): ";
    cin >> myBox.length >> myBox.width >> myBox.height;
    set_v(&myBox);
    show(myBox);

    return 0;
}

void show(const box x)
{
    std::cout << x.maker << " make this box, its three borders is " << x.length << "\u006D\u006D, " << x.width << "\u006D\u006D and " << x.height
                << "\u006D\u006D, the volume of it is " << x.volume << "\u006D\u006D\u00B3" << std::endl;
}

void set_v(box * x)
{
    x->volume = x->length * x->width * x->height;
}