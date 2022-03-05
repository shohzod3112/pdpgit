//  Haqiqiy sonlardan iborat N ta elementli massiv berilgan. Massiv elementlarining yig’indisini hisoblovchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "n = "; cin >> n;

    float arr[n], s = 0;

    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = "; cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
        s += arr[i];

    cout << "Massiv elementlari yig'indisi = " << s << endl;

    return 0;
}
