// Haqiqiy sonni 2 xona aniqlikda chiqarish

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b;

    cout << "a sonini b soniga bo'lib 2 xona aniqlikda chiqarish" << endl;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    a = a / b;

    cout << "a = " << a << endl;
    cout << "a = " << setprecision(2) << fixed << a << endl;

    return 0;
}
