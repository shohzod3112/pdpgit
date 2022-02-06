/*
Ishchining oylik maoshi (salary) va o’rnatilgan tartibdagi eng kam oylik ish haqi (minimum wage) berilgan.
Quyidagilar asosida ishchidan olinadigan bir oylik daromad solig’ini hisoblang.
1) Agar salary <= 5*minimumWage bo’lsa, 9 foiz;
2) Agar salary > 5*minimumWage va salary <= 10*minimumWage bo’lsa, 16 foiz;
3) Agar salary > 10*minimumWage bo’lsa, 23 foiz.
*/

#include <iostream>

using namespace std;

int main()
{
    int salary, minimumWage, soliq;

    cout << "Salary: "; cin >> salary;
    cout << "Minimum wage: "; cin >> minimumWage;

    if(salary <= 5 * minimumWage)
        soliq = salary * 0.09;
    else
    {
        if((salary > 5 * minimumWage) and (salary <= 10 * minimumWage))
        soliq = salary * 0.16;
    else
        soliq = salary * 0.23;
    }
    cout << "Bir oyda ishchidan olinadiga soliq " << soliq << " so'mga teng!"<< endl;

    return 0;
}
