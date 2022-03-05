//  N x N o’lchamdagi butun sonli massiv berilgan. Undagi ajratib ko’rsatilgan sohadagi elementlar yig’indisini aniqlang (vazifaga biriktirilgan rasmga qarang).

#include <iostream>

using namespace std;

int main()
{
int n, m, k, sum;

    cout << "Qatorlar soni: "; cin >> n;

    int arr[n][n], s = 0;

    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    {
        cout << "arr[" << i << "][" << j << "] = "; cin >> arr[i][j];
    }

    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < n; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < n; j++)
            if(i + j == n - 1)
                sum += arr[i][j];
    }
        cout << sum << endl;

    return 0;
}
