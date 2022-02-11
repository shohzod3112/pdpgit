//  str satri va c belgisi berilgan. str satrining har bir belgisidan keyin c belgisini joylashtirib yangi satr hosil qiluvchi dastur tuzing.
//  Masalan: str=”hello”, c=’a’ bo’lsa, natijaviy satr “haealalaoa” kabi bo’ladi.


#include <iostream>

using namespace std;

int main()
{
    string s, c, natija;

    cout << "s = "; getline(cin,s);
    cout << "c = "; getline(cin,c);

    for(int i = 0; i < s.length(); i++)
    {
        cout << "i = " << i << endl;
        natija = s.insert(i, c);
        cout << "natija = " << natija << endl;
    }

    //cout << "Yangi satr = " << natija << endl;

    return 0;
}
