// Aylananing uzunligi L berilgan. Uning radiusi R va S aniqlansin.

#include <iostream>

using namespace std;

int main()
{
    float L, S, R;
    const float Pi = 3.14;
    cout << "Aylananing uzunligi L ni kiriting: L = "; cin >> L;

    R = L / (2 * 3.14);
    S = Pi * R * R;

    cout << "Aylananing radiusi = " << R << endl;
    cout << "Aylananing yuzasi = " << S << endl;

    return 0;
}
