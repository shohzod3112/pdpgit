//
//  main.cpp
//  recursivefunc
//
//  Created by Shohzod on 20/01/22.
//  Berilgan sonni raqamlari yig'indisini recursive funksiya yordamida hisoblang

#include <iostream>

using namespace std;

int recurfunc(int n)
{
if(!n)  // if(!n) == if(n != 0)
    return 0;
    
    return (n % 10 + recurfunc(n / 10));
}

int main() {
    int n;
    
    cout << "n = "; cin >> n;
    
    cout << recurfunc(n) << endl;
    return 0;
}
