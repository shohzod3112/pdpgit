// Kubning qirrasi (a) berilgan. Uning hajmini va yon tamoni yuzasini hisoblovchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int a, V, S;

    cout << "Kubning qirrasini kiriting = "; cin >> a;

    V = a * a * a;
    S = 6 * a * a;

    cout << "Kubning hajmi = " << V << endl;
    cout << "Kubning yuzasi = " << S << endl;

    return 0;
}
