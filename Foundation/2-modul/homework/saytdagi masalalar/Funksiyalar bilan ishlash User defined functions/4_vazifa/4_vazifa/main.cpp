//
//  main.cpp
//  4_vazifa
//
//  Created by Shohzod on 20/01/22.
//  Berilgan 3 ta sonning o’rta arifmetigini 4-darajaga oshirib, natija sifatida qaytaruvchi funksiya tuzing.
#include <iostream>
#include <cmath>

using namespace std;

float ortafour(float a = 0, float b = 0, float c = 0)
{
    float n, daraja;
    
    n = (a + b + c) / 3;
    daraja = pow(n,4);
    
    return daraja;
}

int main() {
    float a, b, c;
    
    cout << "Birinchi son = "; cin >> a;
    cout << "Ikkinchi son = "; cin >> b;
    cout << "Uchinchi son = "; cin >> c;
    
    cout << "Kiritilgan sonlarning o'rta arifmetigining to'rtinchi darajasi = " << ortafour(a, b, c) << endl;
    
    return 0;
}
