//  Darsda yozilgan “Son topish o’yini” dasturiga o’zgartirish kiriting.
//  Foydalanuvchiga kompyuter o’ylagan sonni topish uchun ko’pi bilan 3 ta imkoniyat beriladigan holatga keltiring.

#include <iostream>

using namespace std;

int randfunc(int a, int b, int c = 2)
{
    if(c > 0)
{
    if(a != b)
    {
        cout << "Topa olmadingiz :-(" << endl;
        cout << "Kompyuter o'ylagan son = ";
        cin >> b;
    }
    c--;
    if(a == b)
    {
        cout << "Qoyil topdingiz!!!" << endl;
        return 0;
    }
    if(c == 0)
    {
        cout << "Siz berilgan uchta imkoniyatda kompyuter o'ylagan sonni topa olmadingiz :-(" << endl;
        return 0;
    }
    
    if(c != 0)
        randfunc(a,b,c);
}
    return 0;
}

int main()
{
    int a, n;

    srand(time(NULL));
    a = rand() % 10 + 1;
    cout << a << endl;
    cout << "Kompyuter bir son o'yladi. Kompyuter o'ylagan sonni toping. Sizda uchta imkoniyat bor!!!" << endl;
    cout << "Kompyuter o'ylagan son = "; cin >> n;

    cout << randfunc(a, n) << endl;


    return 0;
}
