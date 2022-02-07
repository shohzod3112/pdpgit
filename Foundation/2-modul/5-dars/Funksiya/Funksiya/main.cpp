//
//  main.cpp
//  Funksiya
//
//  Created by Shohzod on 18/01/22.
//  Katta sonni topish funksiya yordamida

#include <iostream>

using namespace std;

double kattaSonniTopish (double num1, double num2)
{
    if (num1 > num2)
        return num1;
    return num2;
}

int main() {
// 1 - usul
    
    cout << kattaSonniTopish(15.6, 8.2) << endl;
    
    return 0;
}
