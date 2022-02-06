//
//  main.cpp
//  7_vazifa
//
//  Created by Shohzod on 20/01/22.
//  Berilgan 3 ta sonni kamayish tartibida ekranga chiqaruvchi funksiya tuzing.

#include <iostream>

using namespace std;

double downfunc(double a, double b, double c)
{
    double natija;

    natija = (a + b + c) - max(max(a,b),c) - min(min(a,b),c);
    
    return natija;

}

int main() {
    double a, b, c;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    
    cout << max(max(a,b),c) << " " << downfunc(a, b, c) << " " << min(min(a,b),c) << endl;

    return 0;
}
