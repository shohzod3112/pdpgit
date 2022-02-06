// Foydalanuvchi tomonidan kiritilgan 3 ta butun (x, y, z) sonlar uchun quyidagi mulohazani rostlikka tekshiruvchi dastur tuzing: " x, y, z sonlaridan faqat bittasi musbat son ".

#include <iostream>

using namespace std;

int main()
{
    int x, y, z;

    cout << "0. x, y, z sonlaridan faqat bittasi musbat son emas." << endl;
    cout << "1. x, y, z sonlaridan faqat bittasi musbat son." << endl;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "z = "; cin >> z;

    cout << (((x > 0) && (y < 0) && (z < 0)) || ((x < 0) && (y > 0) && (z < 0)) || ((x < 0) && (y < 0) && (z > 0))) << endl;

    return 0;
}
