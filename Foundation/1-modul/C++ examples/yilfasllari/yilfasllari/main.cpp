//
//  main.cpp
//  yilfasllari
//
//  Created by Shohzod on 23/12/21.
//  Kiritilgan songa mos yil faslini chiqaring.

#include <iostream>

using namespace std;

int main() {
    
    int n;
    
    cout << "1 <= son <= 12 oraliqda son kiriting\n"; cin >> n;
    
    switch (n) {
        case 1:
        case 2:
        case 12:
            cout << "Qish fasli!" << endl;
            break;
        case 3:
        case 4:
        case 5:
            cout << "Bahor fasli!" << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "Yoz fasli!" << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "Kuz fasli!" << endl;
            break;
        default:
            cout << "Bunday yil fasli yoq!" << endl;
    }
    
    return 0;
}
