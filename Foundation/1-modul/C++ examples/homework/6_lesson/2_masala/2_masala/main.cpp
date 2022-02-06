//
//  main.cpp
//  2_masala
//
//  Created by Shohzod on 18/12/21.
//  To’g’ri burchakli uchburchakning katetlari (a va b) berilgan. Uchburchakning gipotezasini (c) va yuzi (S) ni topuvchi dastur tuzing.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    float a, b, c, S;
    
    cout << "Uchburchakning a va b tomonlarini kiriting!!!" << endl;
    
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    c = sqrt(a * a + b * b);
    S = (a * b) / 2;
    
    cout << "Uchburchakning uchinchi tomoni = " << c << endl;
    cout << "Uchburchakning yuzi = " << S << endl;
    
    return 0;
}
