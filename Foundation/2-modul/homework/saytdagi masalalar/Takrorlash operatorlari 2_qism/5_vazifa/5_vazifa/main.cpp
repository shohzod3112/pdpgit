//  1-9 oraliqdagi N raqami berilgan. N ga mos ravishda, rasmda ko’rsatilgan shakldagi kabi raqamlarni ekranga chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
int n, i, j, k = 1;

    cout << "Input number of rows: "; cin >> n;

    j = n;

    if(1 <= n && n <= 9)
    {
        do {
            for(i = k; i <= j; i++)
                cout << i;

            cout << endl;

            k++;
            n--;
        } while(n);
    }
    else
        cout << "1-9 oraliqda son kiriting!!!" << endl;

    return 0;
}
