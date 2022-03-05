//  Haqiqiy sonlardan iborat N ta elementli massiv berilgan. Massivning eng kichik elementini aniqlovchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "n = "; cin >> n;

    float arr[n], engmin;

    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = "; cin >> arr[i];
    }

    engmin = arr[0];

    for(int i = 0; i < n; i++)
        engmin = min(engmin, arr[i]);

    cout << "Massivning eng kichik elementi = " << engmin << endl;

    return 0;
}
