// To’g’ri to’rtburchakning tamonlari berilgan. Uning perimetri va yuzini topuvchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{

float a, b, P, S;

    cout << "To'g'ri to'rtburchakning 1-tomonini kiriting = "; cin >> a;
    cout << "To'g'ri to'rtburchakning 2-tomonini kiriting = "; cin >> b;

    P = 2 * (a + b);
    S = a * b;

    cout << "To'g'ri to'rtburchakning perimetri = " << P << endl;
    cout << "To'g'ri to'rtburchakning yuzi = " << S << endl;

    return 0;
}
