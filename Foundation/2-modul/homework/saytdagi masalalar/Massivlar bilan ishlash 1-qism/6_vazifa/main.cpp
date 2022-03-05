//  Satrlardan iborat massiv berilgan. Uzunlik jihatidan undagi eng qisqa so’zni va uning uzunligini aniqlovchi dastur tuzing.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, word, index = 0;

    cout << "Massiv elementlari soni: "; cin >> n;
    string str[n];

    for(int i = 0; i < n; i++)
    {
        cout << "str[" << i << "] = "; cin >> str[i];
    }

    word = str[0].length();

    for(int i = 1; i < n; i++)
    {
        if(word > str[i].length())
        {
            word = str[i].length();
            index = i;
        }
    }
        cout << endl;
        cout << "Massivdagi uzunlik jihatidan undagi eng qisqa so’z: " << str[index] << " va uning uzunligi: " << word << endl;

    return 0;
}
