/*
23). Foydalanuvchi tug’ilgan kuni va oyini kiriting, va natijani quyidagicha chop eting. Agar oy va kun 1 xonali son bo’lsa, ularning oldiga 0 qo’yib to’ldiring.
---------- Birthdate ------------
Enter month 3
Enter date: 5
Birthday is 03-05 (mm-dd).
Agar 2 xonali son bo’lsa
Enter month 12
Enter date: 16
Birthday is 12-16 (mm-dd).
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int date, month;

    cout << "---------- Birthdate ------------" << endl;
    cout << "Enter month: "; cin >> month;
    cout << "Enter date: "; cin >> date;

    cout << "Birthday is " << setw(2) << setfill('0') << month << "-" << setw(2) << setfill('0') << date << " (mm-dd)" << endl;

    return 0;
}
