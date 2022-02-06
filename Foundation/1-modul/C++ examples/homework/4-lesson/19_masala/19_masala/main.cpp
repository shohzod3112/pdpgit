//
//  main.cpp
//  18_masala
//
//  Created by Shohzod on 15/12/21.
//  To’rtburchakni eni va bo’yi haqiqiy son qilib berilgan. Uning yuzi va perimetrini hisoblovchi dastur tuzing.

#include <iostream>

using namespace std;

int main() {
    
    float width, length;
    
    cout << "Enter width: "; cin >> width;
    cout << "Enter length: "; cin >> length;
    
    cout << "Area is " << width * length << endl;
    cout << "Perimetr is " << 2 * (width + length) << endl;
    
    return 0;
}
