//
//  main.cpp
//  pshaklchiqarish
//
//  Created by Shohzod on 03/02/22.
//  |_| shu shaklni teskarisini (ya'ni п ni chiqarish)

#include <iostream>

using namespace std;

int main() {
   
    srand(time(NULL));

    int n, total = 0;

    cout << "n = "; cin >> n;

    int massiv[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            massiv[i][j] = rand() % 10;
            cout << massiv[i][j] << "\t";
        }
        cout << endl;
    }
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            if(i == 0 || j == 0 || j == (n - 1))
            total += massiv[i][j];
        }

    cout << "Sum = " << total << endl;
    
    return 0;
}
