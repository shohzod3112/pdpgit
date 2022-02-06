// Abituriyent 1-fandan N1 ta, 2-fandan N2 ta savolga to’g’ri javob berdi.
// 1-fandagi har bir to’g’ri javob uchun M1, 2-fanda esa M2 ball berildi.
// Abituriyent F foizli imtiyozliga ega.
// Uning umumiy yig’gan balini hisoblovchi dastur tuzing.
// Bunda: UMUMIY BALL = (N1*M1+N2*M2)*(100+F)/100 kabi hisoblanadi.

#include <iostream>

using namespace std;

int main()
{
    float N1, N2, M1, M2, F, umumBall;

    cout << "N1 = "; cin >> N1;
    cout << "N2 = "; cin >> N2;
    cout << "M1 = "; cin >> M1;
    cout << "M2 = "; cin >> M2;
    cout << "F = ";  cin >> F;

    umumBall = (N1 * M1 + N2 * M2) * (100 + F) / 100;

    cout << "Umumiy ball = " << umumBall << endl;

    return 0;
}
