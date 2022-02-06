//
//  main.cpp
//  4_vazifa
//
//  Created by Shohzod on 01/02/22.
//  2 ta satr berilgan. Ularni birinchi belgilarisiz bitta satr ko’rinishida ekranga chiqaruvchi dastur tuzing. Masalan: s1 = “c++”, s2 = “code” bo’lsa, natija: “++ode”.

#include <iostream>

using namespace std;

int main() {
    string a, b, n, m;
    
    cout << "a = "; getline(cin, a);
    cout << "b = "; getline(cin, b);
    
    n.assign(a,1,a.length());
    m.assign(b,1,b.length());
    
    cout << n << m << endl;
    
    return 0;
}
