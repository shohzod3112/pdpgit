//
//  main.cpp
//  2_vazifa
//
//  Created by Shohzod on 20/01/22.
//  Berilgan sonning toq yoki juftligini aniqlab, u juft bo’lsa kvadratini, aks holda kubini natija sifatida qaytaruvchi funksiya tuzing.

#include <iostream>

using namespace std;

int juftfunc(int a)
{
    if (a % 2 == 0) {
        return a * a;
    }
    else
        return a * a * a;
}

int main() {
    int n;
    
    cout << "N = "; cin >> n;
    
    cout << juftfunc(n) << endl;
    
    return 0;
}
