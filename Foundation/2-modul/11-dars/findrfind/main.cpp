// find() va rfind() funksiyasi

#include <iostream>

using namespace std;

int main()
{
    string s = "olmaxon", s1 = "xon", s2 = "find() funksiyasi topilgan satr indeksini qaytaradi", s3 = "satr";

    cout << "***************************** find() ***************************" << endl;

    cout << "s = " << s << endl;
    cout << "s1 = " << s1 << endl;

    cout << "s.find(s1) = " << s.find(s1) << endl;


    cout << "s2 = " << s2 << endl;
    cout << "s3 = " << s3 << endl;

    cout << "s2.find(s3) = " << s2.find(s3) << endl;
    cout << endl;

    cout << "***************************** rfind() ***************************" << endl;

    string a = "olmaxon", b = "xon", c = "rfind() funksiyasi topilgan satr indeksini qaytaradi", d = "satr";

    cout << "a = " << s << endl;
    cout << "b = " << s1 << endl;

    cout << "a.rfind(b) = " << a.rfind(b) << endl;


    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    cout << "c.rfind(d) = " << c.rfind(d) << endl;
    cout << endl;


    return 0;
}
