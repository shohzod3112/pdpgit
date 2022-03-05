//  65-90 oraliqdagi butun sonlarni o’zida saqlovchi N ta elementli massiv berilgan. ASCII kodi massiv elementlariga mos bo’lgan belgilarni ekranga chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
     int n;

    cout << "n = "; cin >> n;

    int arr[n], countjuft = 0, counttoq = 0;

    for(int i = 0; i < n; i++)
    {
        arr[i] = rand() % 26 + 65;
        cout << "a[" << i << "] = " << arr[i] << "-->" << (char)arr[i] << endl;
    }

    return 0;
}
