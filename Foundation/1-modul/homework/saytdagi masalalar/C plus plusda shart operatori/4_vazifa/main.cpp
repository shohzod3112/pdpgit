// Berilgan 5 ta son orasida nechta musbat, nechta manfiy, nechta nol qatnashganini aniqlovchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4, num5, musbat = 0, manfiy = 0, null = 0;

    cout << "Beshta son kiriting" << endl;

    cout << "Birinchi son: ";   cin >> num1;
    cout << "Ikkinchi son: ";   cin >> num2;
    cout << "Uchinchi son: ";   cin >> num3;
    cout << "To'rtinchi son: "; cin >> num4;
    cout << "Beshinchi son: ";  cin >> num5;

    if(num1 > 0) musbat++;
    if(num1 < 0) manfiy++;
    if(num1 == 0) null++;

    if(num2 > 0) musbat++;
    if(num2 < 0) manfiy++;
    if(num2 == 0) null++;

    if(num3 > 0) musbat++;
    if(num3 < 0) manfiy++;
    if(num3 == 0) null++;

    if(num4 > 0) musbat++;
    if(num4 < 0) manfiy++;
    if(num4 == 0) null++;

    if(num5 > 0) musbat++;
    if(num5 < 0) manfiy++;
    if(num5 == 0) null++;

    cout << "\n" << musbat << " ta musbat.\n" << manfiy << " ta manfiy.\n" << null << " ta nol." << endl;

    return 0;
}
