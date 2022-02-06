// Butun son berilgan. Agar u 20 dan kichik bo’lsa, shu sonning kvadratini; aks holda uning oxirgi raqamini ekranga chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "a = "; cin >> a;

    if(a < 20)
        cout << "Shu sonning kvadrati = " << a * a << endl;
    else
        cout << "Shu sonning oxirgi raqami = " << a % 10 << endl;
    return 0;
}
