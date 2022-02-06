//
//  main.cpp
//  1_vazifa
//
//  Created by Shohzod on 11/01/22.
//  N natural soni berilgan. 1 dan N gacha bo’lgan butun sonlarning kvadratlarining yig’indisini hisoblovchi dastur tuzing.

#include <iostream>

using namespace std;

int main() {
    int n, s = 0;
    
    cout << "N = "; cin >> n;
    
    for(int i = 1; i <= n; i++)
        s += i * i;
    cout << s << endl;

    return 0;
}
