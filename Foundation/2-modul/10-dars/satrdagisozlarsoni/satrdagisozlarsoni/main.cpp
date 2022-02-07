//
//  main.cpp
//  satrdagisozlarsoni
//
//  Created by Shohzod on 03/02/22.
//  Berilgan satrdagi so'zlar soni

#include <iostream>

using namespace std;

int main() {
    string satr;
 //   char a;
    int counter = 1;
    
    cout << "Satr = "; getline(cin, satr);

    for(int i = 0; i < satr.length(); i++)
        if(satr[i] == ' ' && satr[i + 1] != ' ')
            counter++;
        if(satr[0] == ' ')
            counter--;
    if(satr[satr.length() - 1] == ' ')
        counter--;
    
    cout << "Satrda " << counter << " ta so'z bor" << endl;
    
    return 0;
}
