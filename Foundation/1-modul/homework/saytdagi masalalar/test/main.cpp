// Muallif : Ro'ziev Shohzod
// Sana : 11.02.2013
// Maqsad : A, B, C berilgan. A ni qiymatini C ga, C ni qiymatini B ga, B ni qiymatini A ga o'zlashtirilsin.
// A = 1; B = 2; C = 3;
// A = 2; B = 3; C = 1;
#include <iostream>

using namespace std;

int main ()
{
    int A, B, C;

    cout << "A="; cin >> A;
    cout << "B="; cin >> B;
    cout << "C="; cin >> C;

    C = A + B + C;
    B = C - B - A;
    A = C - B - A;
    C = C - B - A;

    cout << "\nA=" << A << "\n" << "B=" << B << "\n" << "C=" << C << endl;

    return 0;
}
