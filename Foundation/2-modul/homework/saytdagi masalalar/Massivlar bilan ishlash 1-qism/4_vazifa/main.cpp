//  Haqiqiy sonlardan iborat N ta elementli massiv berilgan. Massivning eng kichik elementi unda necha marta qatnashganini aniqlovchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "n = "; cin >> n;

    float arr[n], engmin, counter = 0;

    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = "; cin >> arr[i];
    }

    engmin = arr[0];

    for(int i = 0; i < n; i++)
        engmin = min(engmin, arr[i]);

    for(int i = 0; i < n; i++)
        if(engmin == arr[i])
            counter++;

    cout << "Massivning eng kichik elementi " << engmin << " massivda " << counter << " marta qatnashgan!!!" << endl;

    return 0;
}
