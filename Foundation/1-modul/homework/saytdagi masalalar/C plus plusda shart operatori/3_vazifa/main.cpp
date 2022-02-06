// Berilgan 3 ta sonni kamayish tartibida ekranga chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    float a, b, c, max, min, orta;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    if(a > b && a > c)
        max = a;
    else if(b > a && b > c)
        max = b;
    else max = c;

    if(a < b && a < c)
        min = a;
    else if(b < a && b < c)
        min = b;
    else min = c;

    cout << "Sonlar kamayish tartibida: " << max << " " << a + b + c - (max + min) << " " << min << endl;
    return 0;
}
