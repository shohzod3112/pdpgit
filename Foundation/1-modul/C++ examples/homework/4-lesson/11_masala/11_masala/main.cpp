//
//  main.cpp
//  11_masala
//
//  Created by Shohzod on 14/12/21.
//  To’rtta o’zgaruvchi kiriting va ularga boshlang’ich qiymatlarni bering. Va ularni quyidagicha console ga chiqaring:
//    5 + 7 = 12
//    3.7 + 8.0 = 11.7
//    5 + 8.0 = 13.0
//    5 – 7 = - 2
//    3.7 – 8.0 = -4.3
//    5 – 8.0 = -3.0
//    5 * 7 = 35
//    3.7 * 8.0 = 29.6

#include <iostream>

using namespace std;

int main() {
    
    float a, b, c, d;
    
    cout << "Birinchi sonni kiriring = "; cin >> a;
    cout << "Ikkinchi sonni kiriring = "; cin >> b;
    cout << "Uchinchi sonni kiriring = "; cin >> c;
    cout << "To'rtinchi sonni kiriring = "; cin >> d;

    cout << "\n" << a << " + " << b << " = " << a + b << endl;
    cout << c << " + " << d << " = " << c + d << endl;
    cout << a << " + " << d << " = " << a + d << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << c << " - " << d << " = " << c - d << endl;
    cout << a << " - " << d << " = " << a - d << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << c << " * " << d << " = " << c * d << endl;
        
    cout << endl;
    
    return 0;
}
