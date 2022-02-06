//
//  main.cpp
//  4_vazifa
//
//  Created by Shohzod on 06/01/22.
//  Foydalanuvchi tomonidan kiritilgan [1; 999] oralig’idagi natural sonni so’zlar yordamida ifodalovchi dastur tuzing.

#include <iostream>

using namespace std;

int main() {
    
    int n;
    
    cout << "[1; 999] oralig’idagi natural son kiriting: " ; cin >> n;
    
    if(n >= 1 && n <= 999)
    {
        
        switch (n / 100) {
            case 1:
                cout << "Bir yuz ";
                break;
            case 2:
                cout << "Ikki yuz ";
                break;
            case 3:
                cout << "Uch yuz ";
                break;
            case 4:
                cout << "To'rt yuz ";
                break;
            case 5:
                cout << "Besh yuz ";
                break;
            case 6:
                cout << "Olti yuz ";
                break;
            case 7:
                cout << "Yetti yuz ";
                break;
            case 8:
                cout << "Sakkiz yuz ";
                break;
            case 9:
                cout << "To'qqiz yuz ";
                break;
            default:
                break;
        }
        switch ((n / 10) % 10) {
            case 1:
                cout << "o'n ";
                break;
            case 2:
                cout << "yigirma ";
                break;
            case 3:
                cout << "o'ttiz ";
                break;
            case 4:
                cout << "qirq ";
                break;
            case 5:
                cout << "ellik ";
                break;
            case 6:
                cout << "olmish ";
                break;
            case 7:
                cout << "yetmish ";
                break;
            case 8:
                cout << "sakson ";
                break;
            case 9:
                cout << "to'qson ";
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
    }
    else
        cout << "Bu oraliqda sin kiritilmadi" << endl;
    return 0;
}

