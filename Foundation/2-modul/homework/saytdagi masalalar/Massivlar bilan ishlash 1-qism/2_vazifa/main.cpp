//  Butun sonlardan iborat N ta elementli massiv berilgan. Massivda nechta juft, nechta toq son borligini aniqlovchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "n = "; cin >> n;

    int arr[n], countjuft = 0, counttoq = 0;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            countjuft++;
        if(arr[i] % 2 != 0)
            counttoq++;
    }

    cout << "Massivdagi juft elementlar soni = " << countjuft << endl;
    cout << "Massivdagi toq elementlar soni = " << counttoq << endl;

    return 0;
}
