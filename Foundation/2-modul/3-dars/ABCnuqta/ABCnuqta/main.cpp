//
//  main.cpp
//  ABCnuqta
//
//  Created by Shohzod on 15/01/22.
//  Ox son o'qida A, B, C nuqtalar berilgan. B va C nuqtalardan qaysi biri A nuqtaga yaqin ekanligini va oraliq masofani toping.

#include <iostream>

using namespace std;

int main() {
    float A, B, C;
    
    cout << "A = "; cin >> A;
    cout << "B = "; cin >> B;
    cout << "C = "; cin >> C;
    
    if(abs(A - B) < abs(A - C))
        cout << "Natija: " << abs(A - B) << endl;
    else
        cout << "Natija: " << abs(A - C) << endl;
    
    return 0;
}
