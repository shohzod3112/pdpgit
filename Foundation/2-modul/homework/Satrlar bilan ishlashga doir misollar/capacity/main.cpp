// capacity, max_size(), length(), size(), empty()

#include <iostream>

using namespace std;

int main()
{
    string s;
    size_t n;

    cout << "Satr kiriting: "; getline(cin, s);

    cout << "s.capacity = " << s.capacity() << endl;
    cout << "s.max_size = " << s.max_size() << endl;
    cout << "s.length() = " << s.length() << endl;
    cout << "s.size() = " << s.size() << endl;
    cout << "s.empty() = " << s.empty() << endl;
    cout << "s.empty() metodidan keyin satrning qiymati = " << s <<
     " \nya'ni empty() metodi satr turgan o'zgaruvchini qiymatini addressdan bo'shatmaydi.\n"
     << "s.empty() metodi s satr bo'sh yoki bo'sh emasligini tekshirib bool qiymat qayataradi!\n" << endl;

      cout << "********************************************************************************" << endl;

//  bool empty() - funksiyasi satrni bo'shligini tekshirish uchun ishlatiladi. Agar satr bo'sh bo'lsa, true qiymat qaytaradi.

    string a, b;

    cout << "\na = " << a << endl;
    cout << "a.empty() = " << a.empty() << endl;

    cout << "Satr kiriting: a = "; getline(cin, a);
    cout << "a = " << a << endl;
    cout << "a.empty() = " << a.empty() << endl;

    return 0;
}
