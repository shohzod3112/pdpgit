// Foydalanuvchi tomonidan kiritilgan yilning kabisa yili yoki kabisa yili emasligini aniqlovchi dastur tuzing.
// Kabisa yili deb 4 ga karrali yillarga aytiladi. Lekin yuzga karrali yillar ichida faqat 400ga
// karrali bo'lganlari kabisa yili hisoblanadi. Masalan: 300, 1300, va 1900 kabisa yili emas 1200 va 2000 kabisa yili.

#include <iostream>

using namespace std;

int main()
{
    int yil;

    cout << "Yilni kiriting!\nYil = "; cin >> yil;

    if(yil % 400 == 0 || (yil % 4 == 0 && yil % 100 != 0))
        cout << yil << " = Kabisa yili" << endl;
    else
        cout << yil << " = Kabisa yili emas" << endl;

    return 0;
}
