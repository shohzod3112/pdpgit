//
//  main.cpp
//  converter
//
//  Created by Shohzod on 04/01/22.
// Valyuta ayirboshlash

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float KiritilganSumma, natija;
    int WhichTypeOfMoney, ChangeWhichTypeOfMoney;
    string currentValue, convertValue;
    
    cout << "Pulingiz qaysi valyutada" << endl;
    cout << "1. Dollar (USD)" << endl;
    cout << "2. Euro (EUR)" << endl;
    cout << "3. Rubl (RUB)" << endl;
    cout << "4. So'm (UZS)" << endl;
    cin >> WhichTypeOfMoney;
    
    if (WhichTypeOfMoney < 1 || WhichTypeOfMoney > 4) {
        cout << "Xatolik yuz berdi\n"; main();
    }
    
    cout << "Pulingizni qaysi valyutaga almashtirmoqchisiz?" << endl;
    cout << "1. Dollar (USD)" << endl;
    cout << "2. Euro (EUR)" << endl;
    cout << "3. Rubl (RUB)" << endl;
    cout << "4. So'm (UZS)" << endl;
    cin >> ChangeWhichTypeOfMoney;
    
    cout << "Summani kiriting: "; cin >> KiritilganSumma;

    switch (WhichTypeOfMoney) {
        case 1:
        {
            currentValue = "dollor";
            switch (ChangeWhichTypeOfMoney) {
                case 1:
                    convertValue = "dollor";
                    natija = KiritilganSumma;
                    break;
                case 2:
                    convertValue = "euro";
                    natija = KiritilganSumma * 0.84;
                    break;
                case 3:
                    convertValue = "rubl";
                    natija = KiritilganSumma * 69;
                    break;
                case 4:
                    convertValue = "so'm";
                    natija = KiritilganSumma * 10837;
                    break;
                default:
                    cout << "Xatolik yuz berdi" << endl;
                    break;
            }
        } break;
        case 2:
        {
            currentValue = "euro";
            switch (ChangeWhichTypeOfMoney) {
                case 1:
                    convertValue = "dollor";
                    natija = KiritilganSumma * 1.2;
                    break;
                case 2:
                    convertValue = "euro";
                    natija = KiritilganSumma;
                    break;
                case 3:
                    convertValue = "rubl";
                    natija = KiritilganSumma * 85;
                    break;
                case 4:
                    convertValue = "so'm";
                    natija = KiritilganSumma * 12000;
                    break;
                default:
                    cout << "Xatolik yuz berdi" << endl;
                    break;
            }
        } break;
        case 3:
        {
            currentValue = "rubl";
            switch (ChangeWhichTypeOfMoney) {
                case 1:
                    convertValue = "dollor";
                    natija = KiritilganSumma / 69;
                    break;
                case 2:
                    convertValue = "euro";
                    natija = KiritilganSumma / 85;
                    break;
                case 3:
                    convertValue = "rubl";
                    natija = KiritilganSumma;
                    break;
                case 4:
                    convertValue = "so'm";
                    natija = KiritilganSumma * 145;
                    break;
                default:
                    cout << "Xatolik yuz berdi" << endl;
                    break;
            }
        } break;
         case 4:
        {
            currentValue = "so'm";
            switch (ChangeWhichTypeOfMoney) {
                case 1:
                    convertValue = "dollor";
                    natija = KiritilganSumma / 10837;
                    break;
                case 2:
                    convertValue = "euro";
                    natija = KiritilganSumma / 12000;
                    break;
                case 3:
                    convertValue = "rubl";
                    natija = KiritilganSumma / 145;
                    break;
                case 4:
                    convertValue = "so'm";
                    natija = KiritilganSumma;
                    break;
                default:
                    cout << "Xatolik yuz berdi" << endl;
                    break;
            }
        }
    break;
   // cout << natija << endl;
        default: 
            break;
    }
    cout << "Siz kiritgan " << setprecision(2) << fixed << KiritilganSumma << " " << currentValue << "ingiz " << natija << " " << convertValue << "ga teng" << endl;    
    
    return 0;
}