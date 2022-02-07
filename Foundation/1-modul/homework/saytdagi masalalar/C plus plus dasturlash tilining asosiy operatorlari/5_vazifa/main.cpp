// Ko’paytirish amalidan boshqasini ishlatmasdan berilgan a sonining 2 ta amal orqali a^4 (a ning 4-darajasi) ni hisoblash dasturini tuzing.

#include <iostream>

using namespace std;

int main()
{
    int a, x;

    cout << "a = "; cin >> a;

    x = a * a;

    x *= x;

    cout << "a ^ 4 = " << x << endl;

    return 0;
}
