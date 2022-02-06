//
//  main.cpp
//  1_vazifa
//
//  Created by Shohzod on 01/02/22.
//  a va b satrlar berilgan bo’lsa, ularni abba ko`rinishida ketma-ket joylashtirilishidan hosil bo’lgan yangi satrni ekranga chiqaruvchi dastur tuzing. Masalan: a=“Salom” va b=“Olam”  bo’lsa, natija:  “SalomOlamOlamSalom”.

#include <iostream>

using namespace std;

int main() {

    string a, b, n;
    
    cout << "a = "; getline(cin, a);
    cout << "b = "; getline(cin, b);
    
    n.assign(a);
    n.append(b);
    n.append(b);
    n.append(a);
    
    cout << "Yangi satr = " << n << endl;
    
    return 0;
}
