// Butun son berilgan. Berilgan songa mos ravishda “musbat toq son”,”manfiy juft son”,”son nolga teng” va h.k. ekranga chiqruvchi dastur va uning blok sxemasini tuzing.

#include <iostream>

using namespace std;

int main()
{
    int n;
    string musbat, manfiy, nol, juft, toq;

    cout << "n = "; cin >> n;

    if(n > 0)
    {
        musbat = "Musbat ";
        cout << musbat;
    }
    if(n < 0)
    {
        manfiy = "Manfiy ";
        cout << manfiy;
    }
    if(n == 0)
    {
        nol = "son nolga teng";
        cout << nol << endl;
        return 0;
    }
    if(n % 2 != 0)
    {
        toq = "toq son";
        cout << toq << endl;
    }
    if(n % 2 == 0)
    {
        juft = "juft son";
        cout << juft << endl;
    }

    return 0;
}
