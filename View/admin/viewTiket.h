#include <string>
#include <iostream>
#include "../../model/modelTiket.h"

void vAddTiket(string inpNikTiket)
{
    string inpNamaBus, inpTempatKeberangkatan, inpTujuan;
    int inpJumlahTIKET, hargaTotal;
    cout << "Nama BUS : ";
    cin >> inpNamaBus;
    cout << "Tempat keberangkatan : ";
    cin >> inpTempatKeberangkatan;
    cout << "Tujuan : ";
    cin >> inpTujuan;
    cout << "Jumlah Tiket : ";
    cin >> inpJumlahTIKET;
    int indexJadwal = 1;
    indexJadwal = mSearchJadwalForBus(inpNamaBus);
    for (int i = jumlahKursi[indexJadwal];  i <= inpJumlahTIKET; i++)
    {
        cout << "Kuris Duduk Anda";
    }
}