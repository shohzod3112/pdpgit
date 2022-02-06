//
//  main.cpp
//  manfiylarsum
//
//  Created by Shohzod on 18/01/22.
//  N gacha bo'lgan sonlar ichidan manfiylari yig'indisini toping

#include <iostream>

using namespace std;

double manfiySon(double n)
{
    if(n < 0)
        return n;
    return 0;
}

double sum(double m)
{
    double s = 0;

    s += manfiySon(m);
    
    return s;
}

int main() {
    int n, s = 0;
    double a;
    cout << "n = "; cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "a = "; cin >> a;
        s = s + sum(a);
    }
    
    cout << "Yig'indi = " << s << endl;
    
    return 0;
}
