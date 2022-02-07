//
//  main.cpp
//  3_vazifa
//
//  Created by Shohzod on 18/01/22.
//  Berilgan 3 ta sonni (if-else, ternary operatorlarini ishlatmasdan) o’sish tartibida ekranga chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main() {

float a, b, c, m, m1;
    
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    
    m = max(a,b);
    m = max(m,c);
    
    m1 = min(a,b);
    m1 = min(m1,c);
    
    cout << m1 << " " << (a + b + c) - m - m1 << " " << m << endl;
    
    return 0;
}
