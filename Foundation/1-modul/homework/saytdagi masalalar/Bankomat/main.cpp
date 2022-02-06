// Bankomat dasturi

#include <iostream>

using namespace std;

int main()
{
    double summa = 100000;
    const int JORIY_PAROL = 7777, qoldiq = 5000;
    int kartaParoli, tanlanganBolim;

    cout << "=========== Bankamotga xush kelibsiz!!! ===========\n";

    cout << "Parolni kiriting: ";   cin >> kartaParoli;

    switch(kartaParoli)
    {
        case JORIY_PAROL:
          {

    cout << "\n1. Balansni ko'rish\n";
     cout << "2. Naqt pul yechish\n";
            cout << "3. Parolni o'zgartirish\n";
     cout << "4. Tel raqam ulashh\n\n";

 cin >> tanlanganBolim;

            switch(tanlanganBolim)
            {
                case 1:  if(tanlanganBolim == 1)
                    cout << "Sizning balansizgizda " << summa << " so'm bor!" << endl;
                    break;

                case 2: if(tanlanganBolim == 2)
                    {

                    double yechiladiganPulMiqdori, natija;

                    cout << "Qancha pul yechasiz? : "; cin >> yechiladiganPulMiqdori;

                    natija = yechiladiganPulMiqdori + yechiladiganPulMiqdori * 0.01;

                    if(summa - qoldiq >= natija)
                    {
                        summa = summa - natija;

                        cout << "Sizning hisobingizda " << summa << " so'm miqdordagi pul qoldi\n";
                    }

                    else
                        cout << "Hisobingizda mablag' yetarli emas!\n";

                        break;
                    }

                case 3:
                    {
                        int pppp, ppp1;

                        cout << "Yangi parol kiriting: ";   cin >> pppp;
                        cout << "Yangi parolni tasdiqlang: ";   cin >> ppp1;

                        if(ppp1 == pppp)
                            cout << "Parol muvaffaqiyatli o'rnatildi\n";

                        else
                            cout << "Xatolik yuz berdi! Iltimos boshqatdan urinib ko'ring!\n";
                    } break;

                case 4:
                    {
                        string raqam;

                        cout << "Raqamni kirriting: ";  cin >> raqam;
                        cout << "Raqam ulandi tabriklaymiz!\n";
                    } break;

                default:
                    cout << "Xatolik yuz berdi! Boshqattan urinib ko'ring\n";
            }
          } break;

        default:
            cout << "Parolni noto'g'ri parol kiritdingiz\n";
            return 0;
    }

    return 0;
}
