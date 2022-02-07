// Ternary operatori

#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Number = "; cin >> number;

    (number > 0) ? cout << "Musbat son" << endl : (number < 0) ? cout << "Manfiy son" << endl : cout << "Son nolga teng" << endl;

    return 0;
}
