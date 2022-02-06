//
//  main.cpp
//  7_vazifa
//
//  Created by Shohzod on 11/01/22.
//  Foydalanuvchi tomonidan butun sonlar kiritilaveradi. Bu jarayon manfiy son kiritilguncha davom etadi. Shu sonlarning ichida nechtasi 5 ga karrali ekanligini aniqlovchi dastur tuzing.

#include <iostream>

using namespace std;

int main() {
    int n, k = 0;
    
    do {
        cout << "Manfiy son kiritilganda dastur o'z ishini yakunlaydi!!!\nButun son kiriting:"; cin >> n;
        if(n % 5 == 0 && n != 0)
            k++;
    } while(n >= 0);
    cout << "Kiritilgan sonlardan " << k << " tasi 5 ga karrali." << endl;
    return 0;
}
