//
//  main.cpp
//  6_vazifa
//
//  Created by Shohzod on 18/01/22.
//  Berilgan N natural sonining necha xonali ekanligini (takrorlash operatorlaridan foydalanmasdan) aniqlovchi dastur tuzing.

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int N, m = 0;
    
    cout << "N = "; cin >> N;
  
//    while(N)
//    {
//        N = N / 10;
//        m++;
//    }
//    cout << m << " xonali son kiritildi!!!" << endl;
    
    N = log10(N) + 1;
  
    cout << N << " xonali son kiritildi!!!" << endl;
    
    return 0;
}
