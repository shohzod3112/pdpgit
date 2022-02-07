//
//  main.cpp
//  20_masala
//
//  Created by Shohzod on 15/12/21.
//  ASCII jadvalida katta harflar A ~ Z va kichik a ~ z ketma – ket joylashtirilgan. Ushbu hususiyatdan foydalanib bitta kichik harf qabul qiling va katta harfga convert qilib chop eting.

#include <iostream>

using namespace std;

int main() {
    
    char a;
    int b;
    
    cout << "Bitta kichkina harf kiriting!" << endl;
    cout << "kichkina harf = "; cin >> a;
    
    b = a;
    b -= 32;
    a = b;
    
    cout << "Katta harf = " << a << endl;
    cout << b << endl;
    
    return 0;
}
