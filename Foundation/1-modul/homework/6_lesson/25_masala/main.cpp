/*
25). Shu haftadagi sanalarni quyidagicha chop eting.
Sun  Mon  Tue  Wed  Thu  Fri   Sat
 23  24   25   26   27   28     1
Etibor bering, har bir hafta kuni va sanani chop etish uchun 3 tadan yacheyka berilgan, va sanalar 3 ta yacheykaga to’lmagani uchun ular o’ng tarafga rostlab yozilgan.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Sun   Mon   Tue   Wed   Thu   Fri   Sat" << endl;
    cout << setw(2) << 23 << setw(6) << 24 << setw(6) << 25
         << setw(6) << 26 << setw(6) << 27 << setw(6) << 28
         << setw(6) << 1 << endl;

    return 0;
}
