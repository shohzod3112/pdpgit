// Yuzasi s va balandligi h bo`lgan uch burchak berilgan. Uning asosini toping.

#include <iostream>

using namespace std;

int main()
{
    float asos, h, s;

    cout << "Yuza: "; cin >> s;
    cout << "Balandlik: "; cin >> h;

    //s = asos * h / 2;

    asos = 2 * s / h;

    cout << "Asos = " << asos << endl;
    return 0;
}
