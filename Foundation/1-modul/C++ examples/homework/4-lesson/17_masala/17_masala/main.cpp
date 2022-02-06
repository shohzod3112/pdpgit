//
//  main.cpp
//  17_masala
//
//  Created by Shohzod on 14/12/21.
//  Userdan bitta son o’qing va uni int o’zgaruvchisiga saqlang. Shu sonni char o’zgaruvchisiga ko’chiring. Ikkala o’zgaruvchini qiymatlarini chop eting.

#include <iostream>

using namespace std;

int main() {
    
    int a;
    char b;
    
    cout << "Butun son kiriting!\n" << "son = "; cin >> a;
    cout << "Natija (int): " << a << endl;
    
    b = a;
    
    cout << "Natija (char): " << b << endl;
    
    return 0;
}
