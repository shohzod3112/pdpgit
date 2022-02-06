// Foydalanuvchi tomonidan kiritilgan [1; 999] oralig’idagi natural sonni so’zlar yordamida ifodalovchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "[1; 999] oralig’idagi natural son kiriting: "; cin >> a;

    if(1 <= a && a <= 999)
    {
        switch(a / 100)
        {
        /*
        case 0:
            cout << " yuz" << endl; break; */
        case 1:
            cout << "Bir yuz "; break;
        case 2:
            cout << "Ikki yuz "; break;
        case 3:
            cout << "Uch yuz "; break;
        case 4:
            cout << "To'rt yuz "; break;
        case 5:
            cout << "Besh yuz "; break;
        case 6:
            cout << "Olti yuz "; break;
        case 7:
            cout << "Yetti yuz "; break;
        case 8:
            cout << "Sakkiz yuz "; break;
        case 9:
            cout << "To'qqiz yuz "; break;
        }

        switch((((a - (a % 10)) / 10)) % 10)
        {
        case 1:
            cout << "o'n "; break;
        case 2:
            cout << "yigirma "; break;
        case 3:
            cout << "o'ttiz "; break;
        case 4:
            cout << "qirq "; break;
        case 5:
            cout << "ellik "; break;
        case 6:
            cout << "oltmish "; break;
        case 7:
            cout << "yetmish "; break;
        case 8:
            cout << "sakson "; break;
        case 9:
            cout << "to'qson "; break;
        }

        switch(a % 10)
        {
      /*  case 0:
            cout << " nol"; break; */
        case 1:
            cout << "bir"; break;
        case 2:
            cout << "ikki"; break;
        case 3:
            cout << "uch"; break;
        case 4:
            cout << "to'rt"; break;
        case 5:
            cout << "besh"; break;
        case 6:
            cout << "olti"; break;
        case 7:
            cout << "yetti"; break;
        case 8:
            cout << "sakkiz"; break;
        case 9:
            cout << "to'qqiz"; break;
        }
    }
    else
        cout << "Ko'rsatilgan oraliqda son kiritilmadi" << endl;
    return 0;
}
