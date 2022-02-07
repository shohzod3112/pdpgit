// a va b haqiqiy sonlar berilgan. Ular ustida arifmetik operatorlarni bajarib, natijani ekranga chiqaruvchi dastur tuzing.
// Masalan: a=25, b=10 bo’lsa, natija a+b=35, a-b=15, …

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    cout << a << " + " << b << " = " << (a + b) << endl;
    cout << a << " - " << b << " = " << (a - b) << endl;
    cout << a << " * " << b << " = " << (a * b) << endl;
    cout << a << " / " << b << " = " << (a / b) << endl;
    cout << a << " & " << b << " = " << (a & b) << endl;
    cout << a << " ^ " << b << " = " << (a ^ b) << endl;
    cout << a << " | " << b << " = " << (a | b) << endl;

    return 0;
}
