#include <string>
#include <iostream>
#include <iomanip>
// #include "modelJadwal.h"

using namespace std;

void mTransaksiBus(string inpNamaBis, string inpStartKeberangkatan, string inpTujuanKeberangkatan)
{
    
    int indexBus = mSearchJdwlBus(inpNamaBis, inpStartKeberangkatan, inpTujuanKeberangkatan);
    if (indexBus != -1)
    {
        cout << "Informasi Tiket yang anda cari:\n";
        cout << "Nama BUS :" << namaBus[indexBus] << endl;
        cout << "Stasiun pertama :" << awalKeberangkatan[indexBus] << endl;
        cout << "Rute Tujuan Ke :" << tujuanKeberangkatan[indexBus] << endl;
        cout << "Harga Tiket : " << hargaTiket[indexBus] << endl;
        // Menampilkan semua jadwal bus
        cout << "Apakah Anda setuju dengan hasil data yang ditemukan? (y/n): ";
        char konfirmasi;
        cin >> konfirmasi;
        if (konfirmasi == 'y' || konfirmasi == 'Y')
        {
            cout << "Berapa tiket yang ingin Anda beli? ";
            int jumlahTiket;
            cin >> jumlahTiket;
            // Proses pembelian tiket
        }
    }
    else
    {
        cout << "Maaf, tiket yang Anda cari tidak ditemukan.\n";
    }
}

// void mTransaksiPesawat(string inpNamaPesawat, string inpStartKeberangkatan, string inpTujuanKeberangkatan)
// {
//     int indexPesawat = mSearchJdwlPesawat(inpNamaPesawat, inpStartKeberangkatan, inpTujuanKeberangkatan);
//     if (indexPesawat != -1)
//     {
//         cout << "Informasi Tiket yang anda cari:\n";
//         cout << "Nama Pesawat :" << namaPesawat[indexPesawat] << endl;
//         cout << "Stasiun pertama :" << awalKeberangkatan[indexPesawat] << endl;
//         cout << "Rute Tujuan Ke :" << tujuanKeberangkatan[indexPesawat] << endl;
//         // Menampilkan semua jadwal pesawat
//         cout << "Apakah Anda setuju dengan hasil data yang ditemukan? (y/n): ";
//         char konfirmasi;
//         cin >> konfirmasi;
//         if (konfirmasi == 'y' || konfirmasi == 'Y')
//         {
//             cout << "Berapa tiket yang ingin Anda beli? ";
//             int jumlahTiket;
//             cin >> jumlahTiket;
//             // Proses pembelian tiket
//         }
//     }
//     else
//     {
//         cout << "Maaf, tiket yang Anda cari tidak ditemukan.\n";
//     }
// }

// void mTransaksiKereta(string inpNamaKereta, string inpStartKeberangkatan, string inpTujuanKeberangkatan)
// {
//     int indexKereta = mSearchJdwlKereta(inpNamaKereta, inpStartKeberangkatan, inpTujuanKeberangkatan);
//     if (indexKereta != -1)
//     {
//         cout << "Informasi Tiket yang anda cari:\n";
//         cout << "Nama Kereta :" << namaKereta[indexKereta] << endl;
//         cout << "Stasiun pertama :" << awalKeberangkatan[indexKereta] << endl;
//         cout << "Rute Tujuan Ke :" << tujuanKeberangkatan[indexKereta] << endl;
//         // Menampilkan semua jadwal kereta
//         cout << "Apakah Anda setuju dengan hasil data yang ditemukan? (y/n): ";
//         char konfirmasi;
//         cin >> konfirmasi;
//         if (konfirmasi == 'y' || konfirmasi == 'Y')
//         {
//             cout << "Berapa tiket yang ingin Anda beli? ";
//             int jumlahTiket;
//             cin >> jumlahTiket;
//             // Proses pembelian tiket
//         }
//     }
//     else
//     {
//         cout << "Maaf, tiket yang Anda cari tidak ditemukan.\n";
//     }
// }
