//  str satri va c belgisi berilgan. str satrining har bir belgisidan keyin c belgisini joylashtirib yangi satr hosil qiluvchi dastur tuzing.
//  Masalan: str=”hello”, c=’a’ bo’lsa, natijaviy satr “haealalaoa” kabi bo’ladi.


#include <iostream>

using namespace std;

int main()
{
    string s, c, natija;
    int j;

    cout << "s = "; getline(cin,s);
    cout << "c = "; getline(cin,c);

//    for(int i = 0; i < s.length(); i++)
//    {
//        cout << "i = " << i << endl;
    j = s.length();
    while(j)
    {
        natija = s.insert(j, c);
        j--;
    }

    cout << "Yangi satr = " << natija << endl;

    return 0;
}
