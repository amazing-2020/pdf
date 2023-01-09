#include <iostream>
#include <array>

int main()
{
    using namespace std;
    array<float, 4> score;
    score[3] = 0;
    for (int i = 0; i < 3; ++i) {
        cout << "Enter the " << i+1 << " time score: ";
        cin >> score[i];
        score[3] += score[i];
    }
    cout << "Run 3 times, the avg is: " << score[3] / 3.0 << endl;
    return 0;
}