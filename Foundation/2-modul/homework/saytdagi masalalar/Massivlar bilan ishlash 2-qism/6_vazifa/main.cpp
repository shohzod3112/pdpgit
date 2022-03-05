//  N x N o’lchamdagi butun sonli massiv berilgan. Undagi ajratib ko’rsatilgan sohadagi elementlar yig’indisini aniqlang (vazifaga biriktirilgan rasmga qarang).

#include <iostream>

using namespace std;

int main()
{
int n, m, k, sum = 0;

    cout << "Qatorlar soni: "; cin >> n;

    int arr[n][n];

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

    //for(int i = 0; i < 2; i++)
        for(int j = 0; j < n - 1; j++)
        {
            sum += arr[j][0];
            sum += arr[j][n - 1];
        }

    for(int i = 0; i < n; i++)
    {
        sum += arr[n - 1][i];
    }

    cout << sum << endl;

    return 0;
}
