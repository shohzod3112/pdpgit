//
//  main.cpp
//  3_vazifa
//
//  Created by Shohzod on 20/01/22.
//  Berilgan 3 ta haqiqiy sonning o'rta arifmetigini hisoblab, natija sifatida qaytaradigan funksiya tuzing.

#include <iostream>

using namespace std;

float ortafunc(float a = 0, float b = 0, float c = 0)
{
    float n;
    n = (a + b + c) / 3;
    return n;
}

int main() {
    float a, b, c;
    
    cout << "Birinchi son = "; cin >> a;
    cout << "Ikkinchi son = "; cin >> b;
    cout << "Uchinchi son = "; cin >> c;
    
    cout << "Kiritilgan sonlarning o'rta arifmetigi = " << ortafunc(a, b, c) << endl;
    
    return 0;
}
