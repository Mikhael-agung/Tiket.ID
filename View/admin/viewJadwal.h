#include <string>
#include <iostream>
#include "../../model/modelJadwal.h"

using namespace std;

void vAddJadwal(){
    string inpNamaBus, inpTanggal, inpAwalKeberangkatan, inpTujuanKeberangkatan, inpJamKeberangkatan, inpJamKedatangan, inpHargaTiker;

    cout << "Tambahkan Jadwal Bus\n";
    cout << "Masukan Nama Bus : "; 
    cin >> inpNamaBus;
    cout << "Masukan Tanggal untuk jadwal :";
    cin >> inpTanggal;
    cout << "Masukan Awal Keberangkatan : ";
    cin >> inpAwalKeberangkatan;
    cout << "Masukan Tujuan Keberangkatan :";
    cin >> inpTujuanKeberangkatan;
    cout << "Masukan Jam Keberangkatan :";
    cin >> inpJamKeberangkatan;
    cout << "Masukan Jam Kedatangan : ";
    cin >> inpJamKedatangan;
    cout << "Masukan Harga Tiket : ";
    cin >> inpHargaTiker;
    mAddjadwalBus(inpNamaBus, inpTanggal, inpAwalKeberangkatan, inpTujuanKeberangkatan, inpJamKeberangkatan, inpJamKedatangan, inpHargaTiker);

}

void vViewJadwal(){
    mViewJadwal();
};

void vSearchJadwalBus(){
    
}
