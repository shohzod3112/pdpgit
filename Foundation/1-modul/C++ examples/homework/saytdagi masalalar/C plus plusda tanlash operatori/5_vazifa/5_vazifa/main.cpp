//
//  main.cpp
//  5_vazifa
//
//  Created by Shohzod on 07/01/22.
//  Ikkita butun son berilgan day (kun) va month (oy). Kabisa bo’lmagan yil sanasi kiritiladi. Berilgan sanadan keying sanani ifodalovchi dastur tuzing.
//  Masalan:
//  1)    day=15, month=4 => natija: “16-aprel”
//  2)    day=28, month=2 => natija: “1-mart”
//  3)    day=31, month=12 => natija: “1-yanvar”

#include <iostream>

using namespace std;

int main() {
    
    int day, month;
    
    cout << "day = "; cin >> day;
    cout << "month = "; cin >> month;
    
    switch (month) {
        case 1:
            if(day >= 1 && day <= 30)
            {
                cout << "natija: " << day + 1 << " - yanvar" << endl;
                break;
            }
            if(day == 31)
                cout << "natija: 1 - fevral" << endl;
            else cout << "day yoki month xato kiritildi :-(" << endl;
            break;
        case 2:
            if(day >= 1 && day <= 27)
            {
                cout << "natija: " << day + 1 << " - fevral" << endl;
                break;
            }
            if(day == 28)
                cout << "natija: 1 - mart" << endl;
            else cout << "day yoki month xato kiritildi :-(" << endl;
            break;
        case 3:
            if(day >= 1 && day <= 30)
            {
                cout << "natija: " << day + 1 << " - mart" << endl;
                break;
            }
            if(day == 31)
                cout << "natija: 1 - aprel" << endl;
            else cout << "day yoki month xato kiritildi :-(" << endl;
            break;
        case 4:
            if(day >= 1 && day <= 29)
            {
                cout << "natija: " << day + 1 << " - aprel" << endl;
                break;
            }
            if(day == 30)
                cout << "natija: 1 - may" << endl;
            else cout << "day yoki month xato kiritildi :-(" << endl;
            break;
        case 5:
            if(day >= 1 && day <= 30)
            {
                cout << "natija: " << day + 1 << " - may" << endl;
                break;
            }
            if(day == 31)
                cout << "natija: 1 - iyun" << endl;
            else cout << "day yoki month xato kiritildi :-(" << endl;
            break;
        case 6:
            if(day >= 1 && day <= 29)
            {
                cout << "natija: " << day + 1 << " - iyun" << endl;
                break;
            }
            if(day == 30)
                cout << "natija: 1 - iyul" << endl;
            else cout << "day yoki month xato kiritildi :-(" << endl;
            break;
        case 7:
            if(day >= 1 && day <= 30)
            {
                cout << "natija: " << day + 1 << " - iyul" << endl;
                break;
            }
            if(day == 31)
                cout << "natija: 1 - avgust" << endl;
            else cout << "day yoki month xato kiritildi :-(" << endl;
            break;
        case 8:
            if(day >= 1 && day <= 30)
            {
                cout << "natija: " << day + 1 << " - avgust" << endl;
                break;
            }
            if(day == 31)
                cout << "natija: 1 - sentabr" << endl;
            else cout << "day yoki month xato kiritildi :-(" << endl;
            break;
        case 9:
            if(day >= 1 && day <= 29)
            {
                cout << "natija: " << day + 1 << " - sentabr" << endl;
                break;
            }
            if(day == 30)
                cout << "natija: 1 - oktabr" << endl;
            else cout << "day yoki month xato kiritildi :-(" << endl;
            break;
        case 10:
            if(day >= 1 && day <= 30)
            {
                cout << "natija: " << day + 1 << " - oktabr" << endl;
                break;
            }
            if(day == 31)
                cout << "natija: 1 - noyabr" << endl;
            else cout << "day yoki month xato kiritildi :-(" << endl;
            break;
        case 11:
            if(day >= 1 && day <= 29)
            {
                cout << "natija: " << day + 1 << " - noyabr" << endl;
                break;
            }
            if(day == 30)
                cout << "natija: 1 - dekabr" << endl;
            else cout << "day yoki month xato kiritildi :-(" << endl;
            break;
        case 12:
            if(day >= 1 && day <= 30)
            {
                cout << "natija: " << day + 1 << " - dekabr" << endl;
                break;
            }
            if(day == 31)
                cout << "natija: 1 - yanvar" << endl;
            else cout << "day yoki month xato kiritildi :-(" << endl;
            break;
        default: cout << "day yoki month xato kiritildi :-(" << endl;
            break;
    }
    return 0;
}
