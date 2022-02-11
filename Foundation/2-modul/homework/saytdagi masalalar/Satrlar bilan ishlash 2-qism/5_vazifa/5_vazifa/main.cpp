//
//  main.cpp
//  5_vazifa
//
//  Created by Shohzod on 11/02/22.
//  a va b satrlar berilgan. Ularning har biridan galma-gal bittadan olingan belgilardan yangi satr hosil qiluvchi dastur tuzing.
//  Masalan:
//  1) a="abc", b="xyz" bo’lsa, natijaviy satr "axbycz" bo’ladi;
//  2) a="Hi", b="There" bo’lsa, natijaviy satr "HTihere" bo’ladi;
//  3) a="xxxx", b="There" bo’lsa, natijaviy satr "xTxhxexre" bo’ladi.

#include <iostream>

using namespace std;

int main() {
    string a, b, c, natija = "";
    
    int n;
    
    cout << "a = "; getline(cin, a);
    cout << "b = "; getline(cin, b);
        
    n = max(a.length(), b.length());
    
    for (int i = 0; i < n; i++)
    {
        if(i > a.length() - 1 && a.length() != b.length())
        {
            natija += b.substr(i, b.length() - 1);
            cout << "yangi satr = " << natija << endl;
            return 0;
        }
        else
        {
            if(i > b.length() - 1 && a.length() != b.length())
        {
            natija += a.substr(i, a.length() - 1);
            cout << "yangi satr = " << natija << endl;
            return 0;
        }
            else
            {
                c = a.substr(i, 1) + b.substr(i, 1);
                natija = natija.append(c);
            }
        }
    }
    cout << "yangi satr = " << natija << endl;

    return 0;
}
