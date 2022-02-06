
// Uch xonali son berilgan uning o’nliklar xonasidagi raqam bilan yuzliklar xonasidagi raqamni almashtirishdan hosil bo’lgan sonni aniqlovchi dastur va uning blok sxemasini tuzing.
// Masalan: son=123 -> natija=213.

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "100 <= son <= 999 oraliqda son kiriting: "; cin >> a;

    b = 100 * (((a - (a % 10)) / 10) % 10) + 10 * (a / 100) + a % 10;

    cout << "Hosil bo'lgan son = " << b << endl;

    return 0;
}
