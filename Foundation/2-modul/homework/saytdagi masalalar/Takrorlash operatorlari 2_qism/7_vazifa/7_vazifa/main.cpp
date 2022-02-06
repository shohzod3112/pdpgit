//  N natural soni berilgan. 1 dan N gacha bo’lgan tub sonlarni ekranga chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int n, k;

    cout << "N = "; cin >> n;

    for(int i = 2; i <= n; i++)
    {
        k = 0;

        for(int j = 2; j < i; j++)
            if(i % j == 0)
            {
                k++;
                break;
            }

            if(k == 0)
                cout << i << " ";
    }
    return 0;
}
