//
//  main.cpp
//  isalphaceilfloor
//
//  Created by Shohzod on 15/01/22.
//

#include <iostream>
//#include <ctype.h>
#include <cmath>

using namespace std;

int main() {
    
//    cout << abs(-1.7) << endl;
//    cout << abs(-1.775) << endl;
//    cout << abs(-5) << endl;
//    cout << abs(5) << endl;
//    cout << fabs(05) << endl;
//    cout << fabs(-1.7) << endl;
//
//    // floor funksiyasi sonni chap tomondagi songa qarab yaxlitlaydi
//
//    cout << floor(1.5) << endl;
//    cout << floor(1.2) << endl;
//    cout << floor(1) << endl;
//    cout << floor(-1.5) << endl;
//    cout << floor(-4.1) << endl;
//
//
//    cout << "ceil() ==== \n\n";
//
//    // ceil funksiyasi sonni o'ng tomondagi songa qarab yaxlitlaydi
//
//    cout << ceil(1.5) << endl;
//    cout << ceil(1.2) << endl;
//    cout << ceil(1) << endl;
//    cout << ceil(-1.5) << endl;
//    cout << ceil(-4.1) << endl;
//
////    -5   -4.1   -4   -1.5    -1.2   -1    0     1   1.1    1.2   1.5  2   2.1
//
//    cout << "max(20, 15) = " << max(20, 15) << endl;
//    cout << "fmax(15.5, -8.9) = " << fmax(15.5, -8.9) << endl;
//    cout << "max(15.5, -8.9) = " << max(15.5, -8.9) << endl;
//    cout << "min(15.5, -8.9) = " << min(15.5, -8.9) << endl;

    char symbol;

    cout << "Harf kiriting: ";  cin >> symbol;
// isalpha funksiyasi belgini harflikka tekshiradi. Katta harf bo'lsa 1, Kichina harf bo'lsa 2, Simvol bo'lsa 0 qaytaradi.
// tolower funksiyasi kichik harflikka o’tkazadi.
// toupper funksiyasi katta harflikka o’tkazadi.
// isupper funksiyasi katta harflikka tekshiradi.
// islower funksiyasi kichik harflikka tekshiradi.

    
    if(isalpha(symbol))
    {
        if(isupper(symbol))
            symbol = tolower(symbol);

        else
            symbol = toupper(symbol);
        cout << symbol << endl;
    }
    else
        cout << "Harf kiritilmadi!!!" << endl;

    return 0;
}
