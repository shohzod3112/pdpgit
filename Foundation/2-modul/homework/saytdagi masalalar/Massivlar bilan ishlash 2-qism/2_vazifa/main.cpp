//  N x M o’lchamdagi butun sonli massiv berilgan. Qaysi ustundagi elementlarning yig’indisi eng kichik ekanligini aniqlang.

#include <iostream>

using namespace std;

int main()
{
int n, m, k, minsum;

    cout << "Qatorlar soni: "; cin >> n;
    cout << "Ustunlar soni: "; cin >> m;

    int arr[n][m], s = 0;

    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
    {
        cout << "arr[" << i << "][" << j << "] = "; cin >> arr[i][j];
    }

    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    cout << endl;

    for(int j = 0; j < m; j++)
    {
        k = s; s = 0;
        for(int i = 0; i < n; i ++)
            s += arr[i][j];
            k = s;

        if(minsum > k)
            minsum = k;
        cout << s << " ";
        cout << minsum << endl;
    }
    return 0;
}
