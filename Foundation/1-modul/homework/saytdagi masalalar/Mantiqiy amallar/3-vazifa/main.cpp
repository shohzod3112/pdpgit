// Foydalanuvchi tomonidan ketma-ket kiritilgan 3 ta butun sonning o’suvchi tartibda kiritilganligini tekshiruvchi dastur tuzing.
// O’sish tartibida (x<y<z) bo’lsa, true qiymatini ekranga chiqaring.

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    bool x;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    x = ((a > b) && (a > c)) && (b > c);

    cout << x << endl;

    return 0;
}
