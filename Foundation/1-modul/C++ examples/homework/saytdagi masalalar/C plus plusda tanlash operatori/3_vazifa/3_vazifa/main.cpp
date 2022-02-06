//
//  main.cpp
//  3_vazifa
//
//  Created by Shohzod on 06/01/22.
// Yilda 365 kun bor. 1-yanvar haftaning dushanba kuni bo’lsa, yilning K-kuni haftaning qaysi kuni ekanligini aniqlovchi dastur tuzing (1<=K<=365).

#include <iostream>

using namespace std;

int main() {
    
    int k;
    
    cout << "1 <= son <= 365 oraliqda son kiriting" << endl;
    cout << "Son = "; cin >> k;
    
    switch (k % 7) {
        case 0:
            cout << "Yakshanba" << endl;
            break;
        case 1:
            cout << "Dushanba" << endl;
            break;
        case 2:
            cout << "Seshanba" << endl;
            break;
        case 3:
            cout << "Chorshanba" << endl;
            break;
        case 4:
            cout << "Payshanba" << endl;
            break;
        case 5:
            cout << "Juma" << endl;
            break;
        case 6:
            cout << "Shanba" << endl;
            break;
        default: cout << "bunday hafta kuni yoq" << endl;
            break;
    }
    
    return 0;
}
