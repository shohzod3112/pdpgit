// Uch xonali son berilgan uning chapdan birinchi raqamini o’chirib o’ng tarafiga yozishdan hosil bo’lgan sonni aniqlovchi dastur va uning blok sxemasini tuzing.
// Masalan: son=123 -> natija=231.

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "100 <= son <= 999 oraliqda son kiriting: "; cin >> a;

    b = 100 * (((a - (a % 10)) / 10) % 10) + 10 * (a % 10) + a /100;

    cout << "Hosil bo'lgan son = " << b << endl;


    return 0;
}
