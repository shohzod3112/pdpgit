//
//  main.cpp
//  kompoylagannumrecursive
//
//  Created by Shohzod on 20/01/22.
//  Kompyuter tomonidan 1 dan 10 gacha oraliqdagi tasodifiy
//    natural son generatsiya qilinadi. Ushbu tasodifiy sonni
//    foydalanuvchi tomonidan kiritilgan son bilan solishtiruvchi
//    rekursiv funksiya yozing va bu funksiya foydalanuvchi
//    tasodifiy sonni to’g’ri topmagunicha rekursiv tarzda
//    chaqirilsin.

#include <iostream>
#include <ctime>

using namespace std;

int kompfunc(int a, int n)
{
    
    cout << a << endl;
    
    if(a == n)
    {
        cout << "Qoyil topdingiz" << endl;
        return 0;
    }
    
    if(n != a)
    {
        if(n < a)
        {
            cout << "Kompyuter o'ylagan son katta" << endl;
            cout << "Kompyuter o'ylagan son = "; cin >> n;
        }
        if(n > a)
        {
            cout << "Kompyuter o'ylagan son kichik" << endl;
            cout << "Kompyuter o'ylagan son = "; cin >> n;
        }
        kompfunc(a, n);
    }
    return 0;
}

using namespace std;

int main() {
    int a, n;
    cout << "Kompyuter o'ylagan sonni toping" << endl;
    cout << "Kompyuter o'ylagan son = "; cin >> n;

    srand(time(NULL));
    a = rand() % 10 + 1;
    
    cout << kompfunc(a, n) << endl;
    return 0;
}
