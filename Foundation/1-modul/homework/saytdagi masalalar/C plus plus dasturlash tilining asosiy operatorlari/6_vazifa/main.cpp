// Ko’paytirish amalidan boshqasini ishlatmasdan berilgan a sonining 3 ta amal orqali a^6 (a ning 6-darajasi)ni hisoblash dasturini tuzing.

#include <iostream>

using namespace std;

int main()
{
    int a, x;

    cout << "a = "; cin >> a;

    x = a * a * a;

    x *= x;

    cout << "a ^ 6 = " << x << endl;

    return 0;
}
