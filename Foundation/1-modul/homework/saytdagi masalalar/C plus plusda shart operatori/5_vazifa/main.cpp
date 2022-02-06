// Dekart koordinata tekisligida Ox va Oy o’qlarida yotmaydigan nuqtaning koordinatalari x va y berilgan.
// Shu nuqta tekislikning qaysi choragida joylashganini aniqlovchi dastur tuzing (rasmga qarang).

#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    if(x != 0 && y != 0)
    {
        if(x > 0 && y > 0)
            cout << "I - chorak" << endl;
        if(x < 0 && y > 0)
            cout << "II - chorak" << endl;
        if(x < 0 && y < 0)
            cout << "III - chorak" << endl;
        if(x > 0 && y < 0)
            cout << "IV - chorak" << endl;
    }
    else    cout << "Dekart koordinata tekisligida Ox va Oy o’qlarida yotmaydigan nuqtaning koordinatalari x va y ni kiriting!!!" << endl;

    return 0;
}
