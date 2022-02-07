// 1-9 oraliqdagi N raqami berilgan. N ga mos ravishda, rasmda ko’rsatilgan shakldagi kabi yulduzchali piramidani ekranga chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int n, i, j, k = 1;

    cout << "Input number of rows: "; cin >> n;

    if(1 <= n && n <= 9)
    {
        while(n)
        {
            for(i = 1; i <= n; i++)
                cout << " ";

                for(j = 1; j <= k; j++)
                    cout << " *";
                k++;

                    cout << endl;
            n--;
        }
    }
    else
        cout << "1-9 oraliqda son kiriting!!!" << endl;

    return 0;
}
