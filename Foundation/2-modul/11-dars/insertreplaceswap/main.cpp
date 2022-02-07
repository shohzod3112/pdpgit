// insert(), replacec(), swap() funksiyalarini ishlatish.

#include <iostream>

using namespace std;

int main()
{
    string n, s = "Hello world!";

    cout << "***************************************** insert() ***********************************" << endl;

    cout << "s = " << s << endl;

    n.insert(0, s, 4, 7);

    cout << "n.insert(0, s, 4, 7);\nn = " << n << endl;

    cout << endl;

    n.insert(0,s);

    cout << "n.insert(0,s);\nn = " << n << endl;

    cout << endl;

    n.insert(9,s);

    cout << "n.insert(9,s);\nn = " << n << endl;

    cout << "***************************************** replace() ***********************************" << endl;

    string s1 = "Olma va apelsin";

    cout << "s1 = " << s1 << endl;

    n.replace(6, n.length(), s1, 8, 15);

    cout << "n.replace(7, n.length(), s1, 1, 4);\nn = " << n << endl;

    cout << endl;

    cout << "***************************************** swap() ***********************************" << endl;

    string a = "C++", b = "python";

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    a.swap(b);

    cout << "a.swap(b);\na = " << a << endl;
    cout << "b = " << b << endl;

    cout << endl;

    return 0;
}
