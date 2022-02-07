//
//  main.cpp
//  5_vazifa
//
//  Created by Shohzod on 20/01/22.
//  Berilgan 4 ta haqiqiy sonning eng katta va eng kichigini yig'indisini hisoblab natija sifatida qaytaruvchi funksiya tuzing.

#include <iostream>

using namespace std;

double maxminfunc(double a, double b, double c, double d)
{
    double natija;
    
    natija = max(max(a,b),max(c,d)) + min(min(a,b),min(c,d));
    
    return natija;
}

int main() {
    float a, b, c, d;
    
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "d = "; cin >> d;
    
    cout << maxminfunc(a, b, c, d) << endl;
    
    return 0;
}
