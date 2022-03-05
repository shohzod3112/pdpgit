//
//  main.cpp
//  6_vazifa
//
//  Created by Shohzod on 01/02/22.
//  Berilgan s satrni uzunligicha marta takrorlanishidan hosil bo’lgan yangi satrni hosil qiluvchi dastur tuzing. Masalan s=“satr” bo’lsa, natija: “satrsatrsatrsatr”.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string satr;
    size_t n;
    
    cout << "Satr = "; getline(cin, satr);
    
    n = satr.length();
    
    for (int i = 0; i < n; i++)
        cout << satr;
            
    cout <<endl;
    
    return 0;
}
