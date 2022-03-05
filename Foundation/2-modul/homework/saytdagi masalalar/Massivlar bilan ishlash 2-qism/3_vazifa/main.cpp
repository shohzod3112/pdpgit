//  N x M o’lchamdagi butun sonli massiv berilgan. Undagi eng kichik elementni aniqlang.

#include <iostream>

using namespace std;

int main()
{
int n, m, minnum;

    cout << "Qatorlar soni: "; cin >> n;
    cout << "Ustunlar soni: "; cin >> m;

    int arr[n][m];

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

    minnum = arr[0][0];

    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < m; j++)
            if(minnum > arr[i][j])
                minnum = arr[i][j];
    }
        cout << "Massivdagi eng kichik element = " << minnum << endl;

    return 0;
}
