//
//  main.cpp
//  stringraqamlarisum
//
//  Created by Shohzod on 27/01/22.
//  Kiritilgan satrdagi raqamlar yig'indisini hisoblovchi dastur tuzing.

#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
    
    int sum = 0;
    
    string satr, satr2 = "";
    
    cout << "satr = "; getline(cin,satr);
    
    for (int i = 0; i < satr.length(); i++) {
        if(isdigit(satr[i]))
        {
            satr2 = satr[i];
            sum = sum + stoi(satr2);
        }
    }
    
    cout << "Raqamlar yig'indisi = " << sum << endl;
    return 0;
}
