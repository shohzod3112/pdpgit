//  1 ta A haqiqiy sonni parametr sifatida qabul qilganda uning kvadratini;
//  2 ta A va B haqiqiy sonlarini parametr sifatida qabul qilganda esa A sonining B-darajasini hisoblab natija sifatida qaytaruvchi power() funksiyasini yozing.
//  Masalan: power (5)=25, power(3, 4)=81.

#include <iostream>
#include <cmath>

using namespace std;

float power(float a)
{
    return a * a;
}
float power(float a, float b)
{
    return pow(a,b);
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
            cout << power(a) << endl;
                break;
        }
        case 2:
        {
            cout << "a = "; cin >> a;
            cout << "b = "; cin >> b;

            cout << power(a, b) << endl;
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
