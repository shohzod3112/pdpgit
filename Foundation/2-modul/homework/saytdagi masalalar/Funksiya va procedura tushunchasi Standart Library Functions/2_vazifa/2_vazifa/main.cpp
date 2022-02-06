//
//  main.cpp
//  2_vazifa
//
//  Created by Shohzod on 18/01/22.
//  Berilgan 3 ta sonning kattasini (if-else, ternary operatorlarini ishlatmasdan) topuvchi dastur tuzing.

#include <iostream>

using namespace std;

int main() {
    float a, b, c;
    
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    
    cout << max(a,max(b,c)) << endl;
    
    return 0;
}
