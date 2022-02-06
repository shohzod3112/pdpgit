//
//  main.cpp
//  1_imtihon
//
//  Created by Shohzod on 06/01/22.
// Agar avtomobil o'rtacha 70km/soat tezlik bilan harakatlansa,10 000km yo'lni nechi kun, soat, minut va sekundda bosib o'tishini aniqlovchi
// dastur va block sxemasini tuzing

#include <iostream>

using namespace std;

int main() {
    
    int V = 70, S;
    // 1 - 70
    // x - 10 000

    S = 10000 / V;
    
    cout << "Avtomobil 10 000km yo'lni " << S / 24 << " kun " << S << " soat " << S * 60 << " minut " << S * 3600 << " sekundda bosib o'tadi" << endl;
    
    return 0;
}
