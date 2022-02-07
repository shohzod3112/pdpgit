// Ikki xonali son berilgan. Uning raqamlari yig’indisini hisoblovchi dastur va uning blok sxemasini tuzing.

#include <iostream>

using namespace std;

int main()
{
    int n, sum;

    cout << "10 <= n << 99 oraliqda son kiriting: "; cin >> n;

    sum = n / 10 + n % 10;

    cout << "Ikki xonali son yig'indisi = " << sum << endl;
    return 0;
}
