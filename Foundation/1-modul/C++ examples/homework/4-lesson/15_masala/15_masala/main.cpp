//
//  main.cpp
//  15_masala
//
//  Created by Shohzod on 14/12/21.
//  C++ tilida foydalanuvchining ismi va familiyasini qabul qiladigan c++ dasturini yozing va ularni teskari tartibda, ular orasida bo‘sh joy qoldirib chop eting.

#include <iostream>

using namespace std;

int main() {
    
    string ism, familya;
    
    cout << "Isimingizni kiriting: "; cin >> ism;
    cout << "Familyangingizni kiriting: "; cin >> familya;
    
    cout << familya << " " << ism << endl;
    
    return 0;
}
