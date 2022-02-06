// Uchta son berilgan shu sonlarning yig’indisi eng katta bo’ladigan ikkitasini ekranga chiqaruvchi dastur va uning blok sxemasini tuzing.

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
    if(b > a && b > c)
        max = b;
    if(c > a && c > b)
        max = c;

    if(a < b && a < c)
        min = a;
    if(b < a && b < c)
        min = b;
    if(c < a && c < b)
        min = c;

    orta = a + b + c - max - min;

    cout << max << " va " << orta << " sonlarining yig'indisi eng katta bo'ladi" << endl;
    return 0;
}
