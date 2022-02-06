//
//  main.cpp
//  6_vazifa
//
//  Created by Shohzod on 11/01/22.
//  N natural soni berilgan. 1 dan N gacha bo’lgan juft sonlarning yig’indisini va toq sonlarning yig’indisini alohida-alohida hisoblovchi dastur tuzing.

#include <iostream>

using namespace std;

int main() {
    int n, s = 0;
    
    cout << "N = "; cin >> n;
    
    for (int i = 2; i <= n; i += 2)
        s += i;
    cout << "1 dan N gacha bo’lgan juft sonlarning yig’indisi: " << s << endl;
    s = 0;
    for (int i = 1; i <= n; i += 2)
        s += i;
    cout << "1 dan N gacha bo’lgan toq sonlarning yig’indisi: " << s << endl;
    
    return 0;
}
