//
//  main.cpp
//  4_bilet
//
//  Created by Shohzod on 08/02/22.
//  Bir o'lchovli massivdagi manfiy sonlar necha marta qatnashganini toping

#include <iostream>

using namespace std;

int main() {
    int n, counter = 0;
    
    cout << "Bir o'lchovli massiv nechta elementdan iborat bo'lsin?" << endl;
    cout << "Elementlar soni = "; cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = "; cin >> a[i];
        if(a[i] < 0)
            counter++;
    }
    
    cout << "Massivda " << counter << " ta manfiy son qatnashgan" << endl;
    return 0;
}
