//  to_string(), stoi(), stol(), stof(), stod() funksiyalari

#include <iostream>

using namespace std;

int main()
{
    int numberInt = 100;
    long numberLong = 100000L;
    float numberFloat = 36.6f;
    double numberDouble = 125.75;

    string strInt = to_string(numberInt);
    string strLong = to_string(numberLong);
    string strFloat = to_string(numberFloat);
    string strDouble = to_string(numberDouble);

    cout << "strInt = " << strInt << endl;
    cout << "strLong = " << strLong << endl;
    cout << "strFloat = " << strFloat << endl;
    cout << "strDouble = " << strDouble << endl;

    string s1 = "77.75 kg";

    int num1 = stoi(s1);
    cout << "num1 = " << num1 << endl;

    float num2 = stof(s1);
    cout << "num2 = " << num2 << endl;

    double num3 = stod(s1);
    cout << "num3 = " << num3 << endl;

    return 0;
}
