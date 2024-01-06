#include <iostream>
#include <string>
#include <iomanip>
#include "../database/databaseJadwal.h"
// #include "../model/modelBus.h"

using namespace std;

void mAddjadwal(string inpNamaBus, string inpTanggal, string inpAwalKeberangkatan ,string inpTujuanKeberangkatan ,string inpJamKeberangkatan, string inpJamKedatangan, string inpHargaTiket ){
    int index = mSearchJadwalBus(inpNamaBus);
    if (index != -1) {
        tujuanKeberangkatan[nJadwal] = inpTujuanKeberangkatan;
        awalKeberangkatan[nJadwal] = inpAwalKeberangkatan;
        tanggalKeberangkatan[nJadwal] = inpTanggal;
        jamKeberangkatan[nJadwal] = inpJamKeberangkatan;
        jamKedatangan[nJadwal] = inpJamKedatangan;
        hargaTiket[nJadwal] = inpHargaTiket;
        nJadwal++;
    } else {
        cout << "Bus dengan nama " << inpNamaBus << " tidak ditemukan.";
    }
}

void mViewJadwal(){
    cout << "daftar jadwal" << endl;
    cout << "==============================================================||" << endl;
    cout << setw(10) << "No. urut" << setw(10) << "ID " << setw(24) << "Nama Bus" << setw(19) << "Jam Kedatangan" << setw(19) << "Jam Keberangkatan" << setw(19) << "Harga Tiket" << endl;
    cout << "==============================================================||" << endl;
    for (int i = 0; i < nJadwal; i++)
    {
        cout << setw(6) << i + 1 << setw(15) << idBus[i] << setw(25) << namaBus[i] << setw(13) << jamKedatangan[i] << setw(19) << jamKeberangkatan[i] << hargaTiket[i] << endl;
    }
    cout << "==============================================================||" << endl;
    cout << endl;
}

// int mSearchJadwalBus(string inpNamaBus, string inpAwalKeberangkatan, string inpTujuanKeberangkatan){
//     int indexBus = mSearchJadwalBus(inpNamaBus);
//     for(int i = 0; i < nBus; i++){
//         if((namaBus[i] == inpNamaBus && awalKeberangkatan[i] == inpAwalKeberangkatan && tujuanKeberangkatan[i] == inpTujuanKeberangkatan) || (namaBus[i] == inpNamaBus && awalKeberangkatan[i] == inpAwalKeberangkatan && tujuanKeberangkatan[i] == "") || (namaBus[i] == "" && awalKeberangkatan[i] == inpAwalKeberangkatan && tujuanKeberangkatan[i] == inpTujuanKeberangkatan)){
//             indexBus = i;
//             break;
//         }
//     }
    
//     if(indexBus == -1){
//             cout << "**Maaf Bus dan tujuan yang anda cari tidak ada";
//         }
//     return indexBus;
// }