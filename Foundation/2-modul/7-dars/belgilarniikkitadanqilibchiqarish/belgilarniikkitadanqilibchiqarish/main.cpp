//
//  main.cpp
//  belgilarniikkitadanqilibchiqarish
//
//  Created by Shohzod on 22/01/22.
//  Kiritilgan belgilarni ikkitadan qilib chiqarish

#include <iostream>

using namespace std;

int main() {
    string newWords = "", words;
    
    cout << "Belgilar kiriting: "; getline(cin, words);
    
    for(char letter : words)
        newWords = newWords + letter + letter;
    
    cout << "Yangi text = " << newWords << endl;
    
    cout << endl;
    return 0;
}
