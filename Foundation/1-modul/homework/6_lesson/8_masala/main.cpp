// Aylananing diametri d berilgan. Uning uzunligi aniqlansin. L = Pi * d, Pi = 3.14

#include <iostream>

using namespace std;

int main()
{

    float d, L;
    float const Pi = 3.14;

    cout << "Aylananing diametrini kiriting: "; cin >> d;

    L = Pi * d;

    cout << "Aylananing uzunligi = " << L << endl;

    return 0;
}
