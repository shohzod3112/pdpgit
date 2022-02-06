// resize(), assign(), append(),

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s, b;
    size_t n;

    cout << "Satr kiriting: "; getline(cin, s);

    cout << "****************************resize()***************************************" << endl;

    n = s.length();
    cout << "n = s.length();\nn = " << n << endl;
    s.resize(n+2, '!');

    cout << "s.resize(n+2, '!') = " << s << endl;

//  resize() funksiyasini coutni ichida ishlatib bo'lmaydi
//  cout << "s.resize(123, '+') = " << s.resize(123, '+') << endl;

    s.resize(15, '+');
    cout << "s.resize(15, '+') = " << s << endl;

    cout << "***************************************assign()**********************************************" << endl;

    cout << "\nSatr kiriting: b = "; getline(cin, b);
    cout << "b = " << b << endl;

//  b satrga s o'zgaruvchisidagi satrning to'liq nusxasini olish
    b.assign(s);
    cout << "b.assign(s); //b satrga s o'zgaruvchisidagi satrning to'liq nusxasini olish\nb = " << b << endl;

//  b satrga s o'zgaruvchisidagi nolinchi o'rindagi belgisidan boshlab 3 ta belgi nusxasini olish
    b.assign(s, 0, 3);
    cout << "b.assign(s, 0, 3); //b satrga s o'zgaruvchisidagi nolinchi o'rindagi belgisidan boshlab 3 ta belgi"
    << " nusxasini olish\nb = " << b << endl;

//  b satrga char toifasidagi s1 o'zgaruvchisini 0 indeksidan boshlab 3ta elementini olish.

    char s1[] = "Sunday";

    b.assign(s1, 3);
    cout << "b.assign(s1, 3);\nb satrga char toifasidagi s1 o'zgaruvchisini 0 indeksidan boshlab 3ta elementini olish.\nb = " << b << endl;

    cout << "***************************************append()**********************************************" << endl;

    string z;

    cout << "\nSatr kiriting: z = "; getline(cin, z);

    b.append(z);
    cout << "b.append(z);\nb = " << b << endl;

    b.append(z, 2, 4);
    cout << "b.append(z, 2, 4);\nb = " << b << endl;

    b.append(s1,2);
    cout << "b.append(s1,2);\nb = " << b << endl;

    cout << "***************************************clear()**********************************************" << endl;

//  char array toifasidagi satrni string toifasiga o’tkazish

    char c[100], e[100];

    string d = s;

    cout << "\nSatr kiriting: c = "; cin.getline(c, sizeof(c));

//  b satriga char toifasidagi c satrini nusxasini olish

    b.assign(c, strlen(c));
    cout << "\nb satriga char toifasidagi c satrini nusxasini olish\nb.assign(c, strlen(c));" << endl;

    cout << "b = " << b << endl;
    cout << "\nd = s;\nd = " << d << endl;

//  string toifasidagi satrni char array toifasiga o’tkazish uchun c_str() yoki data() foydalanish mumkin.

    b.data();
    d.c_str();

    cout << "string toifasidagi satrni char array toifasiga o’tkazish uchun c_str() yoki data() foydalanish mumkin." << endl;
    cout << "\nb.data();\nb = "  << b << endl;
    cout << "\nd.c_str();\nd = " << d << endl;

    b.clear(); // b ning qiymati tozalandi.
    cout << "b.clear(); // b ning qiymati tozalandi.\nb = " << b << endl;

    string j = "olma";

    cout << "j = olma" << endl;

    j.erase(0,2);
    cout << "j.erase(0,2);\nj = " << j << endl;

    return 0;
}

