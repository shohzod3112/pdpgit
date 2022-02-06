//
//  main.cpp
//  uchxonaliraqamlariteskari
//
//  Created by Shohzod on 16/12/21.
//  Uch xonali son berilgan. Uning raqamlarini teskari tartibda yozilishidan hosil bo’lgan sonni topuvchi dastur tuzing.

#include <iostream>

using namespace std;

int main() {
    
// Birinchi usul

//    int son1, son2;
//
//    cout << "Uch xonali son kiriting = "; cin >> son1;
//
//    son2 = (son1 - (son1 / 100) * 100) / 10;
//
//    cout << "Uch xonali son teskari tartibda = " << (son1 % 10) * 100 + son2 * 10 + son1 / 100 << endl;
    
// Ikkinchi usul
    
//    int number, birlarXonasi, onlarXonasi, yuzlarXonasi;
//
//    cout << "Uch xonali son kiriting = "; cin >> number;
//
//    birlarXonasi = number % 10;
//    onlarXonasi = ((number - birlarXonasi) / 10) % 10;
//    yuzlarXonasi = (number - birlarXonasi - onlarXonasi * 10) / 100;
//
//    cout << "Uch xonali son teskari tartibda = " << birlarXonasi * 100 + onlarXonasi * 10 + yuzlarXonasi << endl;
//
    
    // Uchinchi usul
    
    int number, birlarXonasi, onlarXonasi, yuzlarXonasi;
   
    cout << "Uch xonali son kiriting = "; cin >> number;

    birlarXonasi = number % 10;
    
    number -= birlarXonasi;
    onlarXonasi = (number / 10) % 10;

    number -= onlarXonasi * 10;
    yuzlarXonasi = number / 100;
    
    cout << "Uch xonali son teskari tartibda = " << number << endl;
    
    return 0;
}
