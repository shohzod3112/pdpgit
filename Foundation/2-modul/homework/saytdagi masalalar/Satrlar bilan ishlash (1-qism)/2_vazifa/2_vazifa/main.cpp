//
//  main.cpp
//  2_vazifa
//
//  Created by Shohzod on 01/02/22.
//  2 ta satr berilgan. Ularni uzun+qisqa+uzun shaklida birlashtirilishidan hosil bo'lgan yangi satrni hosil qiluvchi dastur tuzing. Masalan: s1="Salom", s2="Olam" =>  natija: "SalomOlamSalom".

#include <iostream>

using namespace std;

int main() {

    string a, b, uzun="", qisqa="", n;
    
    cout << "a = "; getline(cin, a);
    cout << "b = "; getline(cin, b);
    
    if(a.length() < b.length())
    {
        uzun = b;
        qisqa = a;
        n.assign(b);
        n.append(a);
        n.append(b);
    }
    if(a.length() > b.length())
    {
        uzun = a;
        qisqa = b;
        n.assign(a);
        n.append(b);
        n.append(a);
    }
    else
    {
        n.assign(a);
        n.append(b);
        n.append(a);
    }
    
    cout << "Yangi satr = " << n << endl;
    
    return 0;
}
