// 1 dan n gacha sonlar berilgan. Berilgan sonlarni yig`indisini toping.

#include <iostream>

using namespace std;

int main()
{
    int n, x;

    cout << "n = "; cin >> n;

    x = (1 + n) * n / 2;

    cout << "1 dan n gacha sonlar yig'indisi = " << x << endl;

    return 0;
}
