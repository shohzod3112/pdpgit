//
//  main.cpp
//  2_vazifa
//
//  Created by Shohzod on 06/01/22.
// Biror oyning tartib raqami kiritilganda, shu oyda necha kun borligini ekranga chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main() {
    int monthnum;
    
    cout << "Oyning tartib raqamini kiriting: "; cin >> monthnum;
    
    switch (monthnum) {
        case 1:
            cout << "Yanvar oyi 31 kun" << endl;
            break;
        case 2:
            cout << "Fevral oyi 28 yoki 29 kun" << endl;
            break;
        case 3:
            cout << "Mart oyi 31 kun" << endl;
            break;
        case 4:
            cout << "Aprel oyi 30 kun" << endl;
            break;
        case 5:
            cout << "May oyi 31 kun" << endl;
            break;
        case 6:
            cout << "Iyun oyi 30 kun" << endl;
            break;
        case 7:
            cout << "Iyul oyi 31 kun" << endl;
            break;
        case 8:
            cout << "Avgust oyi 31 kun" << endl;
            break;
        case 9:
            cout << "Sentabr oyi 30 kun" << endl;
            break;
        case 10:
            cout << "Oktabr oyi 31 kun" << endl;
            break;
        case 11:
            cout << "Noyabr oyi 30 kun" << endl;
            break;
        case 12:
            cout << "Dekabr oyi 31 kun" << endl;
            break;
        default:
            cout << "1 dan 12 gacha bo'lgan oraliqda son kiriting" << endl;
            break;
    }
    
    return 0;
}
