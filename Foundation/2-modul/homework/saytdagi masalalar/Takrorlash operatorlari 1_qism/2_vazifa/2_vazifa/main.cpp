//
//  main.cpp
//  2_vazifa
//
//  Created by Shohzod on 11/01/22.
//  N natural soni berilgan. 1 dan N gacha bo’lgan butun sonlar orasida 3 ga karrali, ammo 5 ga karrali bo’lmagan butun sonlarni ekranga chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main() {
    int n;
    
    cout << "N = "; cin >> n;
    
    for (int i = 1; i <= n; i++) {
        if(i % 3 == 0 && i % 5 != 0)
            cout << "1 dan N gacha bo’lgan butun sonlar orasida 3 ga karrali, ammo 5 ga karrali bo’lmagan butun sonlar: " << i << endl;
    }
    
    return 0;
}
