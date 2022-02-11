//  s satr berilgan. Agar s satrda “code” jumlasi necha marta qatnashganini aniqlovchi dastur tuzing.
//  Istisno tariqasida ‘d’ belgisi o’rnida istalgan belgi bo’lishi mumkin (“cope”, “cooe” va h.k.z). Masalan:
//  1)	s="aaacodebbb" bo’lsa, natija: 1;
//  2)	s="codexxcode" bo’lsa, natija: 2;
//  3)	s= "cozexxcope" bo’lsa, natija: 2;
//  4)	s="AAcodeBBcoleCCccoreDD" bo’lsa, natija: 3.

#include <iostream>

using namespace std;

int main()
{
    string s;

    int index, counter = 0;

    cout << "s = "; getline(cin,s);

    index = s.find("co");

    if(index > 0)
        counter = 0;

    for(int i = index; i < s.length(); i++)
    {
        if(s[index + 3] == 'e')
            counter++;
        if(index < 0)
            break;
        index = s.find("co", index + 1);
    }

    cout << "s satrda co*e jumlasi " << counter << " marta qatnashgan!!!" << endl;

    return 0;
}
