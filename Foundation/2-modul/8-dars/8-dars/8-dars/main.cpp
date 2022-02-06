//
//  main.cpp
//  8-dars
//
//  Created by Shohzod on 27/01/22.
//   S1 va S2 satrlari berilgan. S2 satrini S1 satrida takrorlanishlar sonini chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

string kichkinaharfgaaylantirish(string satr1)
{
    for (int i = 0; i < satr1.length(); i++)
    {
        if(isupper(satr1[i]))
            satr1[i] = tolower(satr1[i]);
    }
    
    return satr1;
}

int main() {
    string satr1, satr2;
    int result, k = 0;
    
    cout << "satr1 = "; getline(cin, satr1);
    cout << "satr2 = "; getline(cin, satr2);
    
    satr1 = kichkinaharfgaaylantirish(satr1);
    
    cout << "satr1 = " << satr1 << endl;
    
    result = satr1.find(satr2);
    while(result >= 0)
    {
        k++;
        result = satr1.find(satr2, result + 1);
    }
    
    cout << "Satr1 ichida satr2 " << k << " marta qatnashgan!!!" << endl;
    
    
    return 0;
}
