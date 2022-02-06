//  1 ta haqiqiy sonni parametr sifatida qabul qilganda uni aylananing radiusi deb hisoblab, aylananing uzunligini hisoblovchi;
//  2 ta haqiqiy sonni parametr sifatida qabul qilganda esa ularni to’g’ri burchakli uchburchakning katetlari deb hisoblab,
//  shu uchburchakning perimetrini hisoblovchi perimetr() funksiyasini yozing. Masalan: perimetr(1)=6.28, perimetr(3, 4)=12.

#include <iostream>
#include <cmath>

using namespace std;

float perimetr(float a)
{
    float const PI = 3.1415;
    return 2 * a * PI;
}
float perimetr(float a, float b)
{
    float c;

    c = sqrt(a * a + b * b);
    return a + b + c;
}

int main()
{
    int n;
    float a, b;

    cout << "1. 1 ta qiymat kiritish\n2. 2 ta qiymat kiritish\n" << endl;   cin >> n;

    switch(n)
    {
        case 1:
        {
            cout << "a = "; cin >> a;
            cout << perimetr(a) << endl;
                break;
        }
        case 2:
        {
            cout << "a = "; cin >> a;
            cout << "b = "; cin >> b;

            cout << perimetr(a, b) << endl;
                break;
        }
        default:
        {
            cout << "Noto'g'ri qiymat kiritildi!!!" << endl;
                break;
        }
    }
    return 0;
}
