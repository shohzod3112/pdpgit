//
//  main.cpp
//  test
//
//  Created by Shohzod on 16/12/21.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    char c1, c2;
  
    c1 = cin.get();
    if(c1 == 0)
    {
        c2 = cin.get();

        if(c2 == 72) {
            cout << endl << "Up Arrow" << endl;
        }
        else if(c2 == 80) {
            cout << endl << "Down Arrow" << endl;
        }
        else {
            cout << endl << "Incorrect Input" << endl;
        }

    }
    return 0;
}
