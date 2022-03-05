//  Natural sonlardan iborat N ta elementli massiv berilgan. Massivdagi tub sonlarni ekranga chiqaruvchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
     int n;

    cout << "n = "; cin >> n;

    int arr[n], tub = 0;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
    {
        tub = 0;

        for(int j = 2; j < arr[i]; j++)
            if(arr[i] % j == 0)
                tub++;
            if(tub == 0)
                cout << arr[i] << " ";
    }

    return 0;
}
