//
//  main.cpp
//  ozlashtirishkorsatgichi
//
//  Created by Shohzod on 06/01/22.
//  Talabaning o’zlashtirish ko’rsatkichi berilgan. 0-100 oraliqdagi butun son. Uning o’zlashtirishiga qarab, natijani so’zlarda ifodalovchi dastur tuzing (“nol ball”, “ellik ball”, “sakson yetti ball”).

#include <iostream>

using namespace std;

int main() {
    int n;
    
    cout << "Talabaning o’zlashtirish ko’rsatkichini kiriting: "; cin >> n;
    
    switch (n / 10) {
        case 1:
            cout << "O'n ";
            break;
        case 2:
            cout << "Yigirma ";
            break;
        case 3:
            cout << "O'ttiz ";
            break;
        case 4:
            cout << "Qirq ";
            break;
        case 5:
            cout << "Ellik ";
            break;
        case 6:
            cout << "Olmish ";
            break;
        case 7:
            cout << "Yetmish ";
            break;
        case 8:
            cout << "Sakson ";
            break;
        case 9:
            cout << "To'qson ";
            break;
        default:
            break;
    }
        switch (n % 10) {
            case 1:
                cout << "bir" << endl;
                break;
            case 2:
                cout << "ikki" << endl;
                break;
            case 3:
                cout << "uch" << endl;
                break;
            case 4:
                cout << "to'rt" << endl;
                break;
            case 5:
                cout << "besh" << endl;
                break;
            case 6:
                cout << "olti" << endl;
                break;
            case 7:
                cout << "yetti" << endl;
                break;
            case 8:
                cout << "sakkiz" << endl;
                break;
            case 9:
                cout << "to'qqiz" << endl;
                break;
                default:
                    break;
            }
    return 0;
}
