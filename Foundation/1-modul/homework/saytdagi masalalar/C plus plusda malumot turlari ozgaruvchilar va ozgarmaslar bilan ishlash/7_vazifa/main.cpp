// Klaviaturadan 97 dan 122 gacha bo’lgan biror natural son kiritilganda, ASCII kodi shu songa teng bo’lgan belgi ekranga chiqarilsin.

#include <iostream>

using namespace std;

int main()
{
    int a;
    char b;

    cout << "97 <= son <= 122 shu oraliqda son kiriting = "; cin >> a;
    b = a;

    cout << "ASCII kodida shu son " << b << " belgiga teng." << endl;

    return 0;
}
