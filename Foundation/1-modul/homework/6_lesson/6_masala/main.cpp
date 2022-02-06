// Nolga teng bo’lmagan ikkita son berilgan. Ularning yig’indisini, ko’paytmasini va har birining kvadratini aniqlovchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{

    float a, b, sum, kopaytma, kvadrat1, kvadrat2;

    cout << "Nolga teng bo’lmagan 1-sonni kiriting = "; cin >> a;
    cout << "Nolga teng bo’lmagan 2-sonni kiriting = "; cin >> b;

    sum = a + b;
    kopaytma = a * b;
    kvadrat1 = a * a;
    kvadrat2 = b * b;

    cout << "Ikkita son yig'indisi = " << sum << endl;
    cout << "Ikkita son ko'paytmasi = " << kopaytma << endl;
    cout << "Birinchi son kvadrati = " << kvadrat1 << endl;
    cout << "Ikkinchi son kvadrati = " << kvadrat2 << endl;

    return 0;
}
