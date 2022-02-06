//
//  main.cpp
//  1_vazifa
//
//  Created by Shohzod on 18/01/22.
//  Foydalanuvchi tomonidan burchak o'lchovi gradusda kiritilganda, shu burchakning sinusi, cosinusi, tangensini hisoblovchi dastur tuzing.

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float gradus;
    
    cout << "Burchak o'lchovini gradusda kiriting: "; cin >> gradus;
    
    gradus = (M_PI * gradus) / 180;
    
    cout << "sin(x) = " << sin(gradus) << endl;
    cout << "cos(x) = " << cos(gradus) << endl;
    cout << "tan(x) = " << tan(gradus) << endl;

    return 0;
}
