//  2 ta sonni parametr sifatida qabul qilganda ularning yig’indisini, 3 ta sonni parametr sifatida qabul qilganda esa ularning ko’paytmasini hisoblab,
//  natija sifatida qaytaruvchi calculate() funksiyasini yozing.
//  Masalan: calculate (5, 6)=11, calculate (3, 4, 5)=60.

#include <iostream>

using namespace std;

float calculate(float a, float b)
{
    return a + b;
}
float calculate(float a, float b, float c)
{
    return a * b * c;
}

int main()
{
    int n, a, b, c;

    cout << "1. 2 ta qiymat kiritish\n2. 3 ta qiymat kiritish\n" << endl;   cin >> n;

    switch(n)
    {
        case 1:
        {
            cout << "a = "; cin >> a;
            cout << "b = "; cin >> b;

            cout << calculate(a, b) << endl;
                break;
        }
        case 2:
        {
            cout << "a = "; cin >> a;
            cout << "b = "; cin >> b;
            cout << "c = "; cin >> c;

            cout << calculate(a, b, c) << endl;
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
