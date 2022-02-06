//  Berilgan N natural sonining raqamlari yig'indisini rekursiv funksiya yordamida hisoblovchi dastur tuzing.

#include <iostream>

using namespace std;

int sumFunc(int n)
{
    if(n == 0)
        return 0;

    return (n % 10 + sumFunc(n / 10));
}

int main()
{
    int n;

    cout << "n = "; cin >> n;

    cout << "Kiritilgan sonning raqamlari yig'indisi = " << sumFunc(n) << endl;

    return 0;
}
