//
//  main.cpp
//  5_bilet
//
//  Created by Shohzod on 08/02/22.
//  M x N o'lchamli matritsa berilgan. Matritsadagi musbat sonlar sonini aniqlang.

#include <iostream>

using namespace std;

int main() {
    int n, m, counter = 0;
   
    cout << "Ikki o'lchovli massiv nechta satrdan iborat bo'lsin?" << endl;
    cout << "Elementlar soni = "; cin >> n;
    
    cout << "Ikki o'lchovli massiv nechta ustundan iborat bo'lsin?" << endl;
    cout << "Elementlar soni = "; cin >> m;

    int a[n][m];

    for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    {
       cout << "a[" << i << "][" << j << "] = "; cin >> a[i][j];
       if(a[i][j] > 0)
           counter++;
    }
   
    for (int i = 0; i < n; i++)
    {
        cout << endl;

        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
            cout << endl;
    }
    cout << endl;

    cout << "Matritsada " << counter << " ta musbat son qatnashgan" << endl;
    return 0;
}
