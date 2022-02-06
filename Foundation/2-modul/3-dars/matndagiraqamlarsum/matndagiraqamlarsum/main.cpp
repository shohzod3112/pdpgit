//
//  main.cpp
//  matndagiraqamlarsum
//
//  Created by Shohzod on 15/01/22.
//  Berilgan text ichidagi raqamlarni qo'shish

#include <iostream>

using namespace std;

int main() {
    int yigindi = 0;
    string word = "Bugun 15-yanvar 2022-yil 1-oy";
    
    for(int i = 0; i < word.length(); i++)
        if(isdigit(word[i]))
            yigindi += word[i] - 48;
    
    cout << "Natija = " << yigindi << endl;
    return 0;
}
