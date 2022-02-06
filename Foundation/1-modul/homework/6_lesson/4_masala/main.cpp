//Kvadratning tamoni (a) berilgan. Uning perimetri va yuzini topuvchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int a, P, S;

    cout << "Kvadratning tominini kiriting = "; cin >> a;

    P = 4 * a;
    S = a * a;

    cout << "Kvadratning perimetri = " << P << endl;
    cout << "Kvadratning yuzi = " <<  S << endl;

    return 0;
}
