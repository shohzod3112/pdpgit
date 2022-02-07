//
//  main.cpp
//  beshnidarajasinianiqlash
//
//  Created by Shohzod on 03/02/22.
//  Massiv elementlari orasidan beshni darajasi bo'lgan elementlarni aniqlash

#include <iostream>

using namespace std;

int main() {
    int i, j, n, m, daraja;
    
    cout << "qatorlar soni = "; cin >> n;
    cout << "ustunlar soni = "; cin >> m;
    
    cout << endl;

    int a[n][m];

    for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
    {
        cout << "a[" << i << "][" << j << "] = "; cin >> a[i][j];
    }
    
    cout << endl;
    
    for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
    {
        daraja = 1;
        for (int k = 0; k < a[i][j]; k++)
        {
            daraja *= 5;
            if(a[i][j] == 1)
            {
                cout << "a[" << i << "][" << j << "] = " << a[i][j] << " => " << "True" << endl;
                break;
            }
                
            if(a[i][j] == daraja)
            {
                cout << "a[" << i << "][" << j << "] = " << a[i][j] << " => " << "True" << endl;
                break;
            }
            
            if(daraja > a[i][j])
            {
                cout << "a[" << i << "][" << j << "] = " << a[i][j] << " => " << "False" << endl;
                break;
            }
        }
    }
    cout << endl;

    return 0;
}
