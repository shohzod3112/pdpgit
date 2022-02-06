#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string currentValyuta, convertValyuta;
    double userMoney, natija;
    int mavjudPulBirligi, otkazilishiKerakbolganPulBirligi;

    cout << "Pulingiz qaysi valyutada?"
         << "\n1.Dollar\n"
         << "2.Evro\n"
         << "3.So'm\n"
         << "4.Rubl\n\n";

    cin >> mavjudPulBirligi;
    if(mavjudPulBirligi < 1 || mavjudPulBirligi > 4)
        cout << "Xatolik yuz berdi!!!\n"; //main();

    cout << "Summani kiriting: ";   cin >> userMoney;

    cout << "\nQaysi valyutaga pulingizni almashtirmoqchisiz?"
         << "\n1.Dollar\n"
         << "2.Evro\n"
         << "3.So'm\n"
         << "4.Rubl\n\n";

    cin >> otkazilishiKerakbolganPulBirligi;
    if(otkazilishiKerakbolganPulBirligi < 1 || otkazilishiKerakbolganPulBirligi > 4)
        cout << "Xatolik yuz berdi!!!\n"; //main();

    switch(mavjudPulBirligi)
    {
        case 1:
        {
            currentValyuta = "Dollor";
            switch(otkazilishiKerakbolganPulBirligi)
            {
                case 1:
                    convertValyuta = "Dollor";
                    natija = userMoney;
                    break;
                case 2:
                    natija = userMoney * 0.84;
                    convertValyuta = "Evro";
                    break;
                case 3:
                    natija = 10000 * userMoney;
                    convertValyuta = "So'm";
                    break;
                default:
                    natija = 69 * userMoney;
                    convertValyuta = "Rubl";
            }
        } break;

        case 2:
        {
            currentValyuta = "Evro";
            switch(otkazilishiKerakbolganPulBirligi)
            {
                case 1:
                    natija = 1.2 * userMoney;
                    convertValyuta = "Dollor";
                    break;
                case 2:
                    natija = userMoney;
                    convertValyuta = "Evro";
                    break;
                case 3:
                    natija = 12000 * userMoney;
                    convertValyuta = "So'm";
                    break;
                default:
                    natija = 85 * userMoney;
                    convertValyuta = "Rubl";
            }
        } break;

        case 3:
        {
            currentValyuta = "So'm";
            switch(otkazilishiKerakbolganPulBirligi)
            {
                case 1:
                    convertValyuta = "Dollor";
                    natija = userMoney / 10000;
                    break;
                case 2:
                    natija = userMoney / 12000;
                    convertValyuta = "Evro";
                    break;
                case 3:
                    natija = userMoney;
                    convertValyuta = "So'm";
                    break;
                default:
                    natija = userMoney / 145;
                    convertValyuta = "Rubl";
            }
        } break;
        default:
        {
            currentValyuta = "Rubl";
            switch(otkazilishiKerakbolganPulBirligi)
            {
                case 1:
                    natija = userMoney / 69;
                    convertValyuta = "Dollor";
                    break;
                case 2:
                    natija = userMoney / 85;
                    convertValyuta = "Evro";
                    break;
                case 3:
                    natija = userMoney * 145;
                    convertValyuta = "So'm";
                    break;
                default:
                    natija = userMoney;
                    convertValyuta = "Rubl";
            }
        }
    }

    cout << "Sizning " << userMoney << " " << currentValyuta << "ingiz "
         << setprecision(2) << fixed << natija << " " << convertValyuta << "ga teng!" << endl;

    return 0;
}
