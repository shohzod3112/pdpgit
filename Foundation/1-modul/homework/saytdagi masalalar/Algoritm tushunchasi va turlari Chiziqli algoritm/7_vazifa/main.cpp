//  Ikki xonali son berilgan. Uning raqamlari o’rnini almashtirishdan hosil bo’lgan sonni topib, ekranga chiqaruvchi dastur va uning blok sxemasini tuzing.

#include <iostream>

using namespace std;

int main()
{
    int n, m;

    cout << "Ikki xonali son kiriting: "; cin >> n;

    m = 10 * (n % 10) + n / 10;

    cout << "Teskari son: " << m << endl;
    return 0;
}
