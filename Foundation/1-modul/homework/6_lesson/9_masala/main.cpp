// Doiraning radiusi R berilgan. Uning uzunligi L va yuzasi S aniqlansin. L = 2 * Pi * R; S = Pi * R * R, Pi = 3.14

#include <iostream>

using namespace std;

int main()
{
    const float Pi = 3.14;
    float R, L, S;

    cout << "Doiraning radiusini kiriting = "; cin >> R;

    L = 2 * Pi * R;
    S = Pi * R * R;

    cout << "Doiraning uzunligi L = " << L << endl;
    cout << "Doiraning yuzasi S = " << S << endl;

    return 0;
}
