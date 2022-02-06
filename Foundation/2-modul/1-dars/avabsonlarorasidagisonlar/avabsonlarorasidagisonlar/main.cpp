//
//  main.cpp
//  avabsonlarorasidagisonlar
//
//  Created by Shohzod on 08/01/22.
//  a va b butun sonlar berilgan (a < b). a va b orasidagi sonlar yig'indisini toping.

#include <iostream>

using namespace std;

int main() {
    
    int a, b, s = 0;
    
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    if(a < b)
    {
        for (int i = a + 1; i < b; i++)
            s += i;
        cout << "Yig'indi = " << s << endl;
    }
    else
        cout << "a > b shartni qanoatlantiradigan sonlar kiriting" << endl;
    
    return 0;
}
