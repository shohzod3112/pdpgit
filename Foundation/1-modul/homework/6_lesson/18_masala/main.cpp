// Jo`mrakdan 1 s da 1 milli litr suv tomsa x yilda necha litr suv tomadi. Agar x = 2 bo’lsa natija 63072, 	x = 3 bo’lsa natija 94608 bo’lishi kerak.

#include <iostream>

using namespace std;

int main()
{
    float yil, litr = 0.001, x;

//    1 - sekund - 0.001 litr
//    1 - soatda - 3.6 litr
//    1 - kunda  - 86.4 litr
//    1 - yilda - 35536 litr

    yil = litr * 3600 * 24 * 365;

    cout << "Yil = "; cin >> x;

    yil *= x;

    cout << x << " yilda " << yil << " litr suv tomadi." << endl;

    return 0;
}
