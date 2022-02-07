//
//  main.cpp
//  4_savol
//
//  Created by Shohzod on 06/01/22.
//  Oy raqamiga mos uning nomini consulga chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "1 ... 12 oraliqda oy raqamini kiriting: "; cin >> n;
    switch (n) {
        case 1:
            cout << "Yanvar oyi" << endl;
            break;
        case 2:
            cout << "Fevral oyi" << endl;
            break;
        case 3:
            cout << "Mart oyi" << endl;
            break;
        case 4:
            cout << "Aprel oyi" << endl;
            break;
        case 5:
            cout << "May oyi" << endl;
            break;
        case 6:
            cout << "Iyun oyi" << endl;
            break;
        case 7:
            cout << "Iyul oyi" << endl;
            break;
        case 8:
            cout << "Avgust oyi" << endl;
            break;
        case 9:
            cout << "Sentabr oyi" << endl;
            break;
        case 10:
            cout << "Oktabr oyi" << endl;
            break;
        case 11:
            cout << "Noyabr oyi" << endl;
            break;
        case 12:
            cout << "Dekabr oyi" << endl;
            break;
        default: cout << n << " inchi oy yo'q :-(. Qayta urinib ko'ring" << endl;
            break;
    }
    
    return 0;
}
