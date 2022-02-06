//
//  main.cpp
//  upperlowergetline
//
//  Created by Shohzod on 15/01/22.
//  Katta harflarni kichikga, kichik harflarni kattaga aylantiruvchi dastur

#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
    
    string text;
    
    cout << "Text kiriting: "; getline(cin, text);
    cout << "Text kiriting: "; getline(cin, text);
    cout << "Text kiriting: "; getline(cin, text);

// tolower funksiyasi kichik harflikka o’tkazadi.
// toupper funksiyasi katta harflikka o’tkazadi.
// isupper funksiyasi katta harflikka tekshiradi.
// islower funksiyasi kichik harflikka tekshiradi.
    
    for (int i = 0; i < text.length(); i++) {
        if(islower(text[i]))
            text[i] = toupper(text[i]);
        else
            text[i] = tolower(text[i]);
    }
    
    cout << text << endl;
    
// isalnum(c) - c belgisini harflikka va raqamlikka tekshiradi. Harf va raqam bo'lsa 1, aks holda 0 qaytaradi.
    
    cout << "<================   isalnum   ===========================>" << endl;
    
    cout  << "isalnum('a') = " << isalnum('a') << endl;
    cout  << "isalnum('w') = " << isalnum('w') << endl;
    cout  << "isalnum('B') = " << isalnum('B') << endl;
    cout  << "isalnum('9') = " << isalnum('9') << endl;
    cout  << "isalnum('!') = " << isalnum('!') << endl;
    cout  << "isalnum(' ') = " << isalnum(' ') << endl;

// isalpha funksiyasi belgini harflikka tekshiradi. Katta harf bo'lsa 1, Kichina harf bo'lsa 2, Simvol bo'lsa 0 qaytaradi.

    cout << "<================   isalpha   ===========================>" << endl;
    
    cout  << "isalpha('a') = " << isalpha('a') << endl;
    cout  << "isalpha('w') = " << isalpha('w') << endl;
    cout  << "isalpha('B') = " << isalpha('B') << endl;
    cout  << "isalpha('9') = " << isalpha('9') << endl;
    cout  << "isalpha('!') = " << isalpha('!') << endl;
    cout  << "isalpha(' ') = " << isalpha(' ') << endl;

    return 0;
}
