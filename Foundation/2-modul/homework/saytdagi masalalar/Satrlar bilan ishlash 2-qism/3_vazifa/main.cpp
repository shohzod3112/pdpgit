//  Satr berilgan. Satrdagi barcha ‘*’ belgisi hamda uning o’ng va chap tomonidagi bittadan belgilarni o’chirib tashlang. Masalan:
//  1)	s="ab*cd" bo’lsa, natijada s="ad" bo’ladi;
//  2)	s="sm*eilly" bo’lsa, natijada s="silly" bo’ladi;
//  3)	s="sm**eil*ly" bo’lsa, natijada s="siy" bo’ladi.

#include <iostream>

using namespace std;

int main()
{
    string satr;

    cout << "text kiriiting: ";     getline(cin, satr);

    for(int i = 0; i < satr.length(); i++)
    {
        if(satr[i] == '*')
        {
            if(satr[i + 1] == '*')
            {
                satr.erase(i, 1);
                i--;
            }
        }
    }

    if(satr[0] == '*')
    {
        if(satr[0 + 2] != '*')
            satr.erase(0, 2);
        else
            satr.erase(0, 1);
    }
    if(satr[satr.length() - 1] == '*')
    {
        if(satr[satr.length() - 3] != '*')
            satr.erase(satr.length() - 2);
        else
            satr.erase(satr.length() - 1);
    }

    for(int i = 0; i < satr.length(); i++)
    {
        if(satr[i] == '*')
        {
           if(satr[i + 2] == '*')
            {
                satr.erase(i - 1, 2);
                i = i - 2;
            }
            else
            {
                satr.erase(i - 1, 3);
                i = i - 3;
            }
        }
    }

    cout << satr << endl;

 //   main();

    return 0;
}
