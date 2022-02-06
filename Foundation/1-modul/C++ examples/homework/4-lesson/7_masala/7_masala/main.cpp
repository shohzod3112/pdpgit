//
//  main.cpp
//  7_masala
//
//  Created by Shohzod on 14/12/21.
// Foydalanuvchi tug’ilgan kuni oy va kun ini kiriting, va natijani quyidagicha chop eting
//---------- Birthdate ------------
//Enter month 5
//Enter date:  10
//Birthday is 5/10 (mm-dd).

#include <iostream>

using namespace std;

int main() {
    
    int month, date;
    
    cout << "---------------Birthdate-------------------" << endl;
    
    cout << "Enter month: "; cin >> month;
    cout << "\nEnter date: "; cin >> date;
    
    cout << "\nBirthday is " << month << "/" << date << "(mm-dd).\n" << endl;
    
    return 0;
}
