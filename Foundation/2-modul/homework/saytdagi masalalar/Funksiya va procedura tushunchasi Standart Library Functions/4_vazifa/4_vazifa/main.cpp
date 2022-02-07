//
//  main.cpp
//  4_vazifa
//
//  Created by Shohzod on 18/01/22.
//  S satr berilgan. Undagi katta harflardan va kichik harflardan 2 ta yangi satrlarni hosil qiluvchi dastur tuzing.  Masalan: S=”HellO woRLd” bo’lsa, 1-satr: “HORL”, 2-satr: “ellwod” kabi bo’lishi kerak.

#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
    string S, uppernumber = "", lowernumber = "";
    
    cout << "S = "; getline(cin, S);
    
    for(int i = 0; i <= S.length(); i++)
    {
        if(islower(S[i]))
            lowernumber += S[i];
            
        else if(isupper(S[i]))
            uppernumber += S[i];
    }
        cout << "1-satr: " << uppernumber << endl;
        cout << "2-satr: " << lowernumber << endl;
        
    return 0;
}
