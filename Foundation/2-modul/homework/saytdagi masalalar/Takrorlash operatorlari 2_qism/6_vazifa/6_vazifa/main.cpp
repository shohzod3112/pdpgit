//  1-26 oraliqdagi N natural soni berilgan. N ga mos ravishda, rasmda ko’rsatilgan shakldagi kabi harfli  piramidani ekranga chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
int n, k = 1;

    cout << "    Input number of Letters\n(less than 26) in the Pyramid: "; cin >> n;

    if(1 <= n && n <= 26)
    {
        while(n)
        {
            for(int l = 1; l <= n; l++)
                cout << " ";

            for(char i = 65; i < k + 65; i++)
                cout << i;

            for(char j = k + 63; j >= 65; j--)
                cout << j;

            cout << endl;

            k++;
            n--;
        }
    }
    else
        cout << "1-26 oraliqda son kiriting!!!" << endl;

    return 0;
}
