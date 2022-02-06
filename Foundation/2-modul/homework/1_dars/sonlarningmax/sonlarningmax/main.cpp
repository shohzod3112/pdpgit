//
//  main.cpp
//  sonlarningmax
//
//  Created by Shohzod on 10/01/22.
//  Foydalanuvchi tomonidan sonlar kiritilaveradi. Bu jarayon 0 kiritilguncha davom sonlarning eng kattasini toping.

#include <iostream>

using namespace std;

int main() {
    int n;
    
    cout << "n = "; cin >> n;
    if(n == 0)
        return 0;
    else
        main();
    return 0;
}
