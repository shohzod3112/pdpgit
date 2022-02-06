// Foydalanuvchi tomonidan kiritilgan 3 ta butun (x, y, z) sonlar uchun quyidagi mulohazani rostlikka tekshiruvchi dastur tuzing:
// " x, y, z sonlaridan istalgan bittasi qolgan ikkitasining yig’indisidan kichik".

#include <iostream>

using namespace std;

int main()
{
    int x, y, z;

    cout << "0. x, y, z sonlaridan istalgan bittasi qolgan ikkitasining yig’indisidan kichik emas." << endl;
    cout << "1. x, y, z sonlaridan istalgan bittasi qolgan ikkitasining yig’indisidan kichik." << endl;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "z = "; cin >> z;

    cout << ((x <= (y + z)) && (y <= (x + z)) && (z <= (x + y))) << endl;

    return 0;
}
