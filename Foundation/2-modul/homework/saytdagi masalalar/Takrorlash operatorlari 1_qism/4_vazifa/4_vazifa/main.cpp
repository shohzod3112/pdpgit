//
//  main.cpp
//  4_vazifa
//
//  Created by Shohzod on 11/01/22.
//  1 dan 1000 gacha oraliqdagi mukammal sonlarni ekranga chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main() {
    int s;
    
    for (int i = 1; i <= 1000; i++)
{   s = 0;
    for (int j = 1; j < i; j++)
        if(i % j == 0)
            s += j;
    if (i == s)
        cout << "1 dan 1000 gacha oraliqdagi mukammal sonlar: " << i << endl;
}
    
        
    return 0;
}
