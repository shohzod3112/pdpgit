//
//  main.cpp
//  sekundsoatminut
//
//  Created by Shohzod on 16/12/21.
//  Kun boshidan boshlab N sekund o’tdi. Kun boshidan boshlab qancha soat, minut, sekund o’tganini hisoblovchi dastur tuzing.

#include <iostream>

using namespace std;

int main() {
    
    int min, soat, sekund;
    
    cout << "Kun boshidan beri necha sekund o'tganini kiriting!" << endl;
    
    cout << "Sekund = "; cin >> sekund;
    
    soat = sekund / 3600;
    
    min = (sekund - soat * 3600) / 60;
    
    sekund = sekund - (soat * 3600) - min * 60;
    
    cout << "Kun boshidan beri " << soat << " soat " << min << " minut " << sekund << " sekund o'tdi!!!" << endl;
    
    return 0;
}
