//
//  main.cpp
//  3_vazifa
//
//  Created by Shohzod on 11/01/22.
//  A, B, C butun sonlari berilgan. A va B sonlari orasida joylashgan C ga karrali sonlarni ekranga chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    
    cout << "A = "; cin >> A;
    cout << "B = "; cin >> B;
    cout << "C = "; cin >> C;

    for (int i = A + 1; i < B; i++) {
        if(i % C == 0)
            cout << "A va B sonlari orasida joylashgan C ga karrali sonlar:" << i << endl;
    }
    
    return 0;
}
