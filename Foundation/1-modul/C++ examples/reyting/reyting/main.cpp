//
//  main.cpp
//  reyting
//
//  Created by Shohzod on 23/12/21.
//  Semestr davomida talaba to'plagan reyting ballga mos uning o'zlashtirishi haqida xabar chiqaring:
// 0-55   -> 2-qoniqarsiz
// 56-70  -> 3-qoniqarli
// 71-85  -> 4-yaxshi
// 86-100 -> 5-a'lo

#include <iostream>

using namespace std;

int main() {
    
    int n;
    
    cout << "Semestr davomida talaba to'plagan reyting ballingizni kiriting :"; cin >> n;
    
    if(0 <= n && n <= 55)
        cout << "2-qoniqarsiz" << endl;
    
    if(56 <= n && n <= 70)
        cout << "3-qoniqarli" << endl;
    
    if(71 <= n && n <= 85)
        cout << "4-yaxshi" << endl;
    
    if(86 <= n && n <= 100)
        cout << "5-a'lo" << endl;
    
    return 0;
}
