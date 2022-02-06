// Aylananing yuzasi S berilgan. Uning diametri d va R aniqlansin.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float S, d, R;
    const float Pi = 3.14;

    cout << "Aylananing yuzasi S = "; cin >> S;

    R = sqrt(S / Pi);
    d = 2 * R;

    cout << "Alananing diametri = " << d << "\n" << "Aylananing radiusi = " << R << endl;

    return 0;
}
