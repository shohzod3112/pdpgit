//
//  main.cpp
//  6_bilet
//
//  Created by Shohzod on 08/02/22.
//  Konsoldan kiritilgan satr ichida "is" uchraganda jumlani teskari ma'noga o'giring, Misol: "there is a car" -->
//  --> "there is not a car". Ammo  "is" dan keyin so'zning o'zida not bo'lsa o'zgartirilmasin misol: "this is not my pen" --> "this is not my pen".

#include <iostream>

using namespace std;

int main() {
    string str, s1 = "not", natija;
    int index = 0, indexnot = 0;
    
    cout << "Satr kiriting:"; getline(cin,str);

    for (int i = 0; i < str.length(); i++) {
        if(str.substr(i,2) == "is")
            index = i + 1;
        if(str.substr(i,3) == "not")
            indexnot = i + 1;
    }
    
    if(index > 0 && indexnot > 0)
        cout << str << endl;
    else
    {
        natija = str.insert(index + 2, s1);
        if(index > 0)
            cout << natija << endl;
    }
            
    cout << index << endl;
    cout << indexnot << endl;
    
    return 0;
}
