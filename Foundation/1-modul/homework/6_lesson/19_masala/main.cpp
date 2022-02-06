//  Tezligi v bo`lgan avtomabil s masofani qancha vaqtda bosib o`tadi.
// Agar v = 6 va s = 2 bo’lsa natija 0.33, 	v = 4 va s = 11 bo’lsa natija 2.75 bo’lishi kerak.

#include <iostream>

using namespace std;

int main()
{
    float v, s;

    cout << "v = "; cin >> v;
    cout << "s = "; cin >> s;

    cout << "Masofa = " << s / v << endl;

    return 0;
}
