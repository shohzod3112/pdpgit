//
//  main.cpp
//  massivningmaxelementinitoping
//
//  Created by Shohzod on 29/01/22.
//  Butun sonlardan iborat N ta element berilgan.(-25...+25) oraliqdagi sonlar bilan to'ldiring. Kiritilgan sonlarning maximumini toping.

#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int n, max;
    
    cout << "n = "; cin >> n;
    int arr[n];
    
    srand(time(NULL));
    
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 51 - 25;
    }
    
    max = arr[0];
    
    for (int i = 0; i < n; i++) {
        if(max < arr[i])
            max = arr[i];
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    cout << "Max = " << max << endl;
        return 0;
}
