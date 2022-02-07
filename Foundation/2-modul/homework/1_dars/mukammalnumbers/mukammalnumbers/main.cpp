//
//  main.cpp
//  mukammalnumbers
//
//  Created by Shohzod on 09/01/22.
//  N natural soni berilgan. Uning mukammal mukammal yoki emasligini aniqlang.
//  Mukammal sonlar - oʻzidan farqli boʻluvchilarning yigʻindisiga teng natural sonlar.
//  Masalan, 6=1+2+3, 28=1+2+4+7+14.

#include <iostream>

using namespace std;

int main() {
    
    int N, s = 0;
    
    cout << "N = "; cin >> N;
    
    for(int i = 1; i < N; i++)
    {
        if(N % i == 0) s += i;
    }
    if(s == N)
        cout << "Mukammal son" << endl;
    else
        cout << "Mukammal son emas" << endl;
    
    return 0;
}
