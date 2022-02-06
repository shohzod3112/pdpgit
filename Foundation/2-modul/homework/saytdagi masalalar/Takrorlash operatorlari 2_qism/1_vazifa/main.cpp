// Raqamlari yig’indisi 10 ga teng bo’lgan barcha 3 xonali natural sonlarni ekranga chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int n, s = 0, num1, num2, num3;

    for(int i = 100; i <= 999; i++)
    {
        num3 = i % 10;
        num2 = ((i - num3) / 10) % 10;
        num1 = i / 100;

        s = num1 + num2 + num3;
        if(s == 10)
            cout << i << endl;
    }

    return 0;
}
