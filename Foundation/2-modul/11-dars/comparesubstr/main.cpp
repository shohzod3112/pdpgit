// compare() va substr() funksiyasi

#include <iostream>

using namespace std;

int main()
{

    string s = "olma", s1 = "anor", s2 = "xurma";

    cout << "***************************************** compare() ***********************************" << endl;
    cout << "compare() funksiyasi satrni alifbo tartibida chiqarishga yordam beradi" << endl;
    cout << "Solishtirilayotgan satrlar teng bo'lsa nol qaytaradi. compare() funksiyasi satrni alifbo tartibida chiqarishga yordam beradi" << endl;

    cout << "s = " << s << endl;
    cout << "s1 = " << s1 << endl;

    cout << "s.compare(s1);\ns.compare(s1) = " << s.compare(s1) << endl;

    cout << endl;

    cout << "1 - satr: "; getline(cin, s1);
    cout << "2 - satr: "; getline(cin, s2);

    if(s1.compare(s2) < 0)
        cout << s1 << " " << s2 << endl;
    else
        cout << s2 << " " << s1 << endl;


    string a = "java", b = "javascript";

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "a.compare(0, 4, b, 0, 4) = " << a.compare(0, 4, b, 0, 4) << endl;

    cout << endl;

    cout << "***************************************** substr() ***********************************" << endl;
    cout << "Qayyerdan boshlab nusxa olmoqchisan? va nechta elementni nusxasini olmoqchisan degan 2ta savolga javob beradi" << endl;

    string c = "guloy";

    cout << "c = " << c << endl;

    cout << "c.substr(3,2) + c.substr(0, 3) = " << c.substr(3,2) + c.substr(0, 3) << endl;

    return 0;
}
