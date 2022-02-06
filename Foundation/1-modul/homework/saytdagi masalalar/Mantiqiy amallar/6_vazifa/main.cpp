// Foydalanuvchi tomonidan kiritilgan natural sonning "uch xonali juft son" ekanligini tekshiruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "a = "; cin >> a;

    cout << "0. Uch xonali juft son emas" << endl;
    cout << "1. Uch xonali juft son" << endl;

    cout << ((a > 99) && (a < 1000) && ((a % 2) == 0)) << endl;

    return 0;
}
