#include <string>
#include <iostream>
// #include "modelUser.h"

using namespace std;

void mtopUpAkun(string inpNikKtp)
{
    int salah = 0;
    string inpPassword;
    int inpSaldoAkun;
    // int indexTiket = 
    int indexTUakun = mSearchUserTU(inpNikKtp);
    if (indexTUakun != 1)
    {
        cout << "TOP UP SALDO AKUN" << endl;
        cout << "Isi Saldo Akun : ";
        cin >> inpSaldoAkun;
        while (salah < 3)
        {
            cout << "Konfirmasi Masukkan Password anda";
            cin >> inpPassword;
            if (inpPassword == password[indexTUakun])
            {
                saldoPoint[indexTUakun] = inpSaldoAkun + saldoPoint[indexTUakun];
                salah = 3;
            }
            else
            {
                salah++;
                if (salah == 3)
                {
                    cout << "AKUN TERBLOKIR TOLONG HUBUNGI CS" << endl;
                }
                else
                {
                    cout << "ANDA SUDAH MEMASUKKAN PASSWORD SEBANYAK " << salah << "\n AKUN AKAN TERBLOKIR JIKA SALAH MEMASUKKAN PASSWORD 3x" << endl;
                }
            }
        }
        cout << "Pembayaran berhasil" << endl;
    }
}