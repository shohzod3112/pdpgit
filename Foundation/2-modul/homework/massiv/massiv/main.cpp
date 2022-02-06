//
//  main.cpp
//  massiv
//
//  Created by Shohzod on 26/01/22.
//  Input: ["abc", "def", "gh", "!"] && "-"
//  Output:
//  Return Value: "abc-def-gh-!"

#include <iostream>

using namespace std;

int main() {
    string a, b;
    int i, j;
    
    for (i = 0; i < 3; i++)
    {
        cout << "a[" << i << "] = "; getline(cin,a);
        for (j = 0; j < a.length(); j++)
            b[i] = a[i] + a[j];
    }
//        b += a[i];
    for (i = 0; i < 3; i++)
        cout << "b = " << b[i] << endl;
    
    return 0;
}
