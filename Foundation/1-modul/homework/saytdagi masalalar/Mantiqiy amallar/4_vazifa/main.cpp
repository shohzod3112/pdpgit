// Foydalanuvchi tomonidan kiritilgan 2 ta butun (x va y) sonlar uchun quyidagi mulohazani rostlikka tekshiruvchi dastur tuzing: "x va y sonlari toq sonlar".

#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "0. x va y sonlari toq sonlar emas" << endl;
    cout << "1. x va y sonlari toq sonlar" << endl;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    cout << ((x % 2 != 0) && (y % 2 != 0)) << endl;

    return 0;
}
