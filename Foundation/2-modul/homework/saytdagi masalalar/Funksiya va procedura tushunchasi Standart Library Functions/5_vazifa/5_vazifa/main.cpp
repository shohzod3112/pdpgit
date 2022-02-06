//
//  main.cpp
//  5_vazifa
//
//  Created by Shohzod on 18/01/22.
//  S satr berilgan. Undagi raqamlardan iborat yangi satrlarni hosil qiluvchi dastur tuzing.  Masalan: S=”Today is 25 th August, year is 2005” bo’lsa, natijaviy satr “252005” kabi bo’lishi kerak.

#include <iostream>

using namespace std;

int main() {
    string S, natija;
    
    cout << "S = "; getline(cin,S);
    
    for(int i = 0; i <= S.length(); i++)
        if(isdigit(S[i]))
            natija += S[i];
    cout << natija << endl;
    cout << endl;
        
    return 0;
}
