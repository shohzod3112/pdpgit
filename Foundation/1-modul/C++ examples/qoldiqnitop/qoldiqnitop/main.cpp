//
//  main.cpp
//  qoldiqnitop
//
//  Created by Shohzod on 14/12/21.
//  Ikki xonali son berilgan. Avval uning o'nlar xonasidagi sonlarni va pastdan qoldiqni toping.

#include <iostream>

using namespace std;

int main() {
    
    int num, onlarXonasi, qoldiq;
    
    cout << "0 ... 99 oraliqda son kiriting = "; cin >> num;
    
    qoldiq = num % 10;
    onlarXonasi = (num - qoldiq) / 10;
    
    cout << onlarXonasi << "\n" << qoldiq << endl;
    
    return 0;
}
