// int toifasida 2 ta o’zgaruvchi berilgan. Ularni qiymatlarini qo’shimcha o’zgaruvchi ishlatmasdan o’rnini almashtiring.

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << "\nb = " << b << endl;
    return 0;
}
