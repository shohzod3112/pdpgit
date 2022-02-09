//
//  main.cpp
//  3_bilet
//
//  Created by Shohzod on 08/02/22.
//  Foydalanuvchi tomonidan kiritilgan bahoga mos ravishda examda olgan darajasini chop etuvchi funksiya tuzing.

#include <iostream>

using namespace std;

void grade(int n)
{
    if(n >= 91 && n <= 100)
        cout << "AA" << endl;
    if(n >= 81 && n <= 90)
        cout << "AB" << endl;
    if(n >= 71 && n <= 80)
        cout << "BB" << endl;
    if(n >= 61 && n <= 70)
        cout << "BC" << endl;
    if(n >= 51 && n <= 60)
        cout << "CD" << endl;
    if(n >= 41 && n <= 50)
        cout << "DD" << endl;
    if(n <= 40)
        cout << "Fail" << endl;
}

int main() {
    int n;
    
    cout << "Bahoni kiriting: "; cin >> n;
    grade(n);
    
    return 0;
}
