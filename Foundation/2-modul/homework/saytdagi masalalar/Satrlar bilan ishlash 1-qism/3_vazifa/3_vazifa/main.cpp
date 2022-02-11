//
//  main.cpp
//  3_vazifa
//
//  Created by Shohzod on 01/02/22.
//  Juft uzunlikdagi s satr berilgan. Avval uning 2-yarmini, keyin esa 1-yarmini ekranga chiqaruvchi dastur tuzing. Masalan: s=”sunday”, natija: “daysun”.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b, c;
    size_t n;
    
    cout << "Juft uzunlikdagi satr kiriting = "; getline(cin, a);
    
    if(a.length() % 2 == 0)
    {
        n = a.length() / 2;
        b.assign(a,0,n);
        c.assign(a,n,a.length()-1);
        cout << c << b << endl;
    }
    else
        cout << "Juft uzunlikdagi satr kiritilmadi" << endl;
    
    return 0;
}
