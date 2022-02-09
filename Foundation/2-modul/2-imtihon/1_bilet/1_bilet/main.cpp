//
//  main.cpp
//  1_bilet
//
//  Created by Shohzod on 08/02/22.
//  s satr berilgan. s satrda "c" harfi necha marta qatnashganligini aniqlovchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    string s;
    int counter = 0;
    
    cout << "s = "; getline(cin,s);
    
    for(char letter : s)
    if(letter == 'c')
        counter++;
    
    cout << "s satrda c harfi " << counter << " marta qatnashgan!!!" << endl;
    return 0;
}
