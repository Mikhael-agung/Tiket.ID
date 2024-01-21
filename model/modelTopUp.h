#include <string>
#include <iostream>

using namespace std;

void mtopUpAkun(string inpNikKtp, string inpPassword)
{
    int inpSaldoAkun;
    int indexTUakun = mSearchUserTU(inpNikKtp);
    if (indexTUakun)
    {
        cout << "TU SALDO AKUN" << endl;
        cout << "Isi Saldo Akun : "<<endl;
        cin >> inpSaldoAkun;
        saldoAkun[indexTUakun] = inpSaldoAkun + saldoAkun[indexTUakun];
    }
}