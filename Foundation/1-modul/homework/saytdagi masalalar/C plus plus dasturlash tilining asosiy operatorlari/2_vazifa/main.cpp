// Klaviaturadan kiritilgan butun sonning oxirgi raqamini aniqlovchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Son kiriting: "; cin >> a;

    cout << "Kiritilgan sonning oxirgi raqami = " << a % 10 << endl;

    return 0;
}
