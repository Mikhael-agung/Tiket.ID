#include <iostream>
#include <string>
#include <iomanip>
#include "../database/databaseJadwal.h"
// #include "../model/modelBus.h"

using namespace std;

void mAddjadwal(string inpBusName, string inpTanggal, string inpAwalKeberangkatan ,string inpTujuanKeberangkatan ,string inpJamKeberangkatan, string inpJamKedatangan, string inpHargaTiket ){

    int indexNamaBus = mSearchBus(inpBusName);
    // tanggalKeberangkatan[nJadwal] = inpTanggal;
    // jamKeberangkatan[nJadwal] = inpJamKeberangkatan;
    // jamKedatangan[nJadwal] = inpJamKedatangan;
    // hargaTiket[nJadwal] = inpHargaTiket;
    // nJadwal++;
}

// void mViewJadwal(){
//     cout << "daftar jadwal" << endl;
//     cout << "==============================================================||" << endl;
//     cout << setw(10) << "No. urut" << setw(10) << "ID " << setw(24) << "Nama Bus" << setw(19) << "Jam Kedatangan" << setw(19) << "Jam Keberangkatan" << setw(19) << "Harga Tiket" << endl;
//     cout << "==============================================================||" << endl;
//     for (int i = 0; i < nJadwal; i++)
//     {
//         cout << setw(6) << i + 1 << setw(15) << idBus[i] << setw(25) << namaBus[i] << setw(13) << jamKedatangan[i] << setw(19) << jamKeberangkatan[i] << hargaTiket[i] << endl;
//     }
//     cout << "==============================================================||" << endl;
//     cout << endl;
// }