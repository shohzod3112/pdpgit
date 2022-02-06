//  Foydalanuvchi tomonidan kiritilgan satr ko’rinishida
//  parolni yaroqli yoki yaroqli emasligini tekshiring.
//  Parol yaroqli hisoblanadi, agarda:
//  1) Uzunligi 8 ta belgidan kam bo’lmasa;
//  2) Kamida bitta katta harf ishtirok etsa;
//  3) Kamida bitta kichik harf ishtirok etsa;
//  4) Kamida bitta raqam ishtirok etsa;

#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    string satr;
    bool katta = false, kichik = false, raqam = false;

    cout << "Parolni kiriting: "; cin >> satr;

    if(satr.length() > 8)
    {
    for(int i = 1; i <= satr.length(); i++)
    {
        if(isupper(satr[i]))
            katta = true;
        if(islower(satr[i]))
            kichik = true;
        if(isdigit(satr[i]))
            raqam = true;
    }
    }
    else
    {
        cout << "Parol kamida 8 ta belgidan iborat bo'lishi kerak!!!" << endl;
        return 0;
    }

    if(katta == true && kichik == true && raqam == true)
        cout << "Parol qabul qilindi :-)" << endl;
    else
        cout << "Parol qabul qilinmadi :-(" << endl;


    return 0;
}
