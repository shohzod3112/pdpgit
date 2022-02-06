// int va float toifasidagi ikki ta o’zgaruvchi e’lon qiling. Ularning qiymatlari foydalanuvchi tomonidan klaviatura orqali kiritilsin (cin orqali).
// Natija sifatida ekranga ularning yig’indisini chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int a; float b;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    cout << "a + b = " << a + b << endl;
    return 0;
}
