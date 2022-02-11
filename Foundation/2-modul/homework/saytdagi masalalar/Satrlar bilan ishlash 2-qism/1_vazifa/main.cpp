//  1-vazifa

//    s satr berilgan. Agar s satrning birinchi yoki ikkinchi belgisi ‘x’ ga teng bo’lsa, ‘x’ belgisi olib tashlang, aks holda satr o’zgarmasin. Masalan:
//    1)	s="xHi" bo’lsa, natijada s="Hi" bo’ladi;
//    2)	s="Hxi" bo’lsa, natijada s="Hi" bo’ladi;
//    3)	s="Hi" bo’lsa, natijada s="Hi" bo’ladi;
//    4)	s="xaxb" bo’lsa, natijada s="axb" bo’ladi.

#include <iostream>

using namespace std;

int main()
{
    string s;

    cout << "s = "; getline(cin,s);

    if(s[1] == 'x')
        s.erase(1,1);
    if(s[0] == 'x')
        s.erase(0,1);

    cout << "Yangi satr = " << s << endl;

    return 0;
}
