//
//  main.cpp
//  2_bilet
//
//  Created by Shohzod on 08/02/22.
//  B stringda "A" nechanchi indexda uchrashini aniqlovchi dastur tuzing.

#include <iostream>

using namespace std;

int main() {
    string B;
    
    cout << "B = "; getline(cin, B);
    
    cout << "B satrda A harfi " << B.find("A") << " indexda kelgan" << endl;
    return 0;
}
