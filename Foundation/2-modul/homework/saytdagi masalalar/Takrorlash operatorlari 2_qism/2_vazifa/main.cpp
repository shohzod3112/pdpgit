// Barcha musbat 3 xonali juft sonlar yig’indisini hisoblovchi dastur tuzing.

#include <iostream>

using namespace std;

int main()
{
    int i, s = 0;

    for(i = 100; i < 999; i += 2)
        s += i;

    cout << s << endl;

    return 0;
}
