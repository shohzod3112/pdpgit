//
//  main.cpp
//  20_masala
//
//  Created by Shohzod on 15/12/21.
//  Bitta katta harf qabul qiling va uni kichik harfga convert qilib chop eting.

#include <iostream>

using namespace std;

int main() {
    
    char a;
    int b;
    
    cout << "Bitta katta harf kiriting!" << endl;
    cout << "Katta harf = "; cin >> a;
    
    b = a;
    b += 32;
    a = b;
    
    cout << "kichkina harf = " << a << endl;
    cout << b << endl;
    
    return 0;
}
