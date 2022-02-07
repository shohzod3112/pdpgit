// Ikkita haqiqiy musbat son berilgan shu sonlarning o’rta arifmetigini topuvchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    float a, b, ortaarif;

    cout << "Ikkita musbat son kiriting = "; cin >> a; cin >> b;
    ortaarif = (a + b) / 2;

    cout << "O'rta arifmetigi = " << ortaarif << endl;

    return 0;
}
