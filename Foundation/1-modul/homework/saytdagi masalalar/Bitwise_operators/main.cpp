// C++ dasturlash tilining asosiy operatorlari
// Bitwise operators: &, |, ^, ~, <<, >>

#include <iostream>

using namespace std;

int main()
{
    int x = 12, y = 25;

    // Bitwise(razryadli va) and &
    cout << x << " & " << y << " = " << (x & y) << endl;

    // Bitwise(razryadli yoki) or |
    cout << x << " | " << y << " = " << (x | y) << endl;

    // Bitwise(razryadli istisnoli yoki) XOR ^
    cout << x << " ^ " << y << " = " << (x ^ y) << endl;

    // Bitwise (razryadli to'ldiruvchi) complement ~
    int z = -120;
    cout << "~" << x << " = " << ~x << "\n" << "~" << z << " = " << ~z << endl;

    // Razryadli o'ngga surish

    x = 3;
    cout << "( " << x << " >> 1 ) = " << (x >> 1) << endl;

    // Razryadli o'ngga surish

    x = 3;
    cout << "( " << x << " << 1 ) = " << (x << 1) << endl;

    return 0;
}
