// Dastlabki 10 ta fibanachi sonlarini chop eting.
// Fibanachi soni o’zidan oldingi ikkita fibanachi sonining yig’inisiga teng bo’ladi.
// Birinchi va ikkinchi fibanachi sonlari mos ravishda 0 va 1 ga teng.

#include <iostream>

using namespace std;

int main()
{
    int f0 = 0, f1 = 1, fn, n;

    cout << "n = "; cin >> n;

    for (int i = 0; i < n; i++)
    {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    cout << "fn = " << fn << endl;
    }

    return 0;
}
