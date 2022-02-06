//
//  main.cpp
//  6_vazifa
//
//  Created by Shohzod on 20/01/22.
//  Berilgan 3 ta sonning o’sish tartibida joylashgandagi o’rtadagisini aniqlab natija sifatida qaytaruvchi funksiya tuzing. Masalan: findMedium(100, 50, 75) = 75

#include <iostream>

using namespace std;

double findMedium(double a, double b, double c)
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
    
    cout << findMedium(a, b, c) << endl;
    
    return 0;
}
