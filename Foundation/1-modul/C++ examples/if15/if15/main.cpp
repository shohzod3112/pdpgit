// Muallif: Ro'ziyev Shohzod
// Sana: 15.02.2013
// Maqsad: Uchta son berilgan. Shu sonlarning yig'indisi eng katta bo'ladigan ikkitasini ekranga chiqaruvchi programma tuzing.
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    if(a > b && a > c && b < c) cout << a << " " << c << endl; // a > c > b
    if(a > b && a > c && b > c) cout << a << " " << b << endl; // a > b > c
    if(b > a && b > c && c < a) cout << b << " " << a << endl; // b > a > c
    if(b > a && b > c && c > a) cout << b << " " << c << endl; // b > c > a
    if(c > b && c > a && a < b) cout << c << " " << b << endl; // c > b > a
    if(c > b && c > a && a > b) cout << c << " " << a << endl; // c > a > b

    return 0;
}
