//
//  main.cpp
//  1_vazifa
//
//  Created by Shohzod on 20/01/22.
//  Berilgan butun son 5 ga qo’ldiqsiz bo’linsa true, aks holda false qiymatini qaytaruvchi funksiya tuzing.

#include <iostream>

using namespace std;

bool myFunc(int a)
{
    if(a % 5 == 0)
        return true;
    return false;
}

int main() {
    int n;
    
    cout << "Butun son kiriting: "; cin >> n;
    
        n = myFunc(n);
        if(n == 1)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    
    return 0;
}
