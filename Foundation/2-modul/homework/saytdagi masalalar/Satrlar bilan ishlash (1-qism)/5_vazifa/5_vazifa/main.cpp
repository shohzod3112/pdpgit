//
//  main.cpp
//  5_vazifa
//
//  Created by Shohzod on 01/02/22.
//  Berilgan s satrni birinchi va oxirgi belgilarisiz ekranga chiqaruvchi dastur tuzing. Masalan: s=“sunday” bo’lsa, natija: “unda”.

#include <iostream>

using namespace std;

int main() {

    string a, n;
     
     cout << "a = "; getline(cin, a);
     
     n.assign(a,1,a.length() - 2);
    
     cout << n << endl;
    
    return 0;
}
