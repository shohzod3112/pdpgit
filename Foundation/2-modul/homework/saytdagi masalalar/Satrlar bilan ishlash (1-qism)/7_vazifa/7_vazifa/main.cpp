//
//  main.cpp
//  7_vazifa
//
//  Created by Shohzod on 02/02/22.
//  s satr berilgan. Undagi yonma-yon kelgan bir xil belgilarning barchasini ekranga chiqaruvchi dastur tuzing. Masalan: s=”C++ ni muvaffaqiyatli o’rganish” bo’lsa, natija: ‘+’, ‘f’.

#include <iostream>

using namespace std;

int main() {
    string satr;
    
    cout << "Satr = "; getline(cin, satr);
    
    for(int i = 0; i < satr.length(); i++)
    {
        if(satr[i] == satr[i+1])
            cout << satr[i];
    }
    
    return 0;
}
