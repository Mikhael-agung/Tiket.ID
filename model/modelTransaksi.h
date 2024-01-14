#include <string>
#include <iostream>
#include <iomanip>
// #include "modelJadwal.h"

using namespace std;

void mTransaksiBus(string inpNamaBis, string inpStartKeberangkatan, string inpTujuanKeberangkatan){
    int indexBus = mSearchJadwalBus(inpNamaBis, inpStartKeberangkatan, inpTujuanKeberangkatan);
    if(indexBus != -1){
        cout << "Informasi Tiket yang anda cari:\n";
        mViewjadwalBus(); // Menampilkan semua jadwal bus
        cout << "Apakah Anda setuju dengan hasil data yang ditemukan? (y/n): ";
        char konfirmasi;
        cin >> konfirmasi;
        if(konfirmasi == 'y' || konfirmasi == 'Y'){
            cout << "Berapa tiket yang ingin Anda beli? ";
            int jumlahTiket;
            cin >> jumlahTiket;
            // Proses pembelian tiket
        }
    } else {
        cout << "Maaf, tiket yang Anda cari tidak ditemukan.\n";
    }
}
