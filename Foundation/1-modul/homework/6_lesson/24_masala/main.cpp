/*
24). Foydalanuvchini tug’ilgan kuni va oyini bir martada kiriting va quyidagicha chop eting.

---------- Birthdate ------------
Enter month and date: 3 5
Birthday is 03-05 (mm-dd).
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int date, month;

    cout << "---------- Birthdate ------------" << endl;
    cout << "Enter month and date: "; cin >> month >> date;

    cout << "Birthday is " << setw(2) << setfill('0') << month << "-" << setw(2) << setfill('0') << date << " (mm-dd)" << endl;

    return 0;
}
