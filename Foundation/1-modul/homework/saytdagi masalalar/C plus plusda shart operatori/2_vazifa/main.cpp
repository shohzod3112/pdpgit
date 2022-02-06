// Berilgan ikkita sonning avval kichigini, keyin kattasini ekranga chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{

    float a, b;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    if(a < b)
    {
        cout << "Kichigi = " << a << endl;
        cout << "Kattasi = " << b << endl;
    }
    else if(a > b)
        {
            cout << "Kichigi = " << b << endl;
            cout << "Kattasi = " << a << endl;
        }
    else cout << "Sonlar teng" << endl;
    return 0;
}
