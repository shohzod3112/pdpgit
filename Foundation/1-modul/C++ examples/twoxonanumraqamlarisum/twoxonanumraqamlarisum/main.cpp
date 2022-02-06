//
//  main.cpp
//  twoxonanumraqamlarisum
//
//  Created by Shohzod on 16/12/21.
//  Ikki xonali son berilgan. Uning raqamlari yig’indisi hisoblovchi dastur tuzing.

#include <iostream>

using namespace std;

int main() {
    
    int sum, num, qoldiq;
    
    cout << "Ikki xonali son kiriting = "; cin >> num;
    
    qoldiq = num % 10;
    sum = (num - qoldiq) / 10 + qoldiq;
    
    cout << "Ikki xonali son raqamlari yig'indisi = " << sum << endl; 
    
    return 0;
}
