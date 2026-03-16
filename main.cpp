#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double C, F;

    cin >> C;

    F = (9 / 5.0) * C + 32;
    cout << setprecision(2) << fixed;

    cout << F << endl;

    return 0;
}
