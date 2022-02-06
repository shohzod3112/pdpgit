// 99 dan katta bo’lgan natural son berilgan. Berilgan sonning yuzliklar xonasidagi raqamni aniqlovchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "99 dan katta bo’lgan natural son kiriting: "; cin >> a;

    cout << "Kiritilgan sonning yuzliklar xonasidagi raqami = " << (a / 100) % 10 << endl;

    return 0;
}
