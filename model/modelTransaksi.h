#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

// Fungsi pembayaran Virtual Account
void mVirtualAccount(int totalHarga[])
{
    cout << "Metode pembayaran Virtual Account\n";

    string inpNikKtp;
    bool nikValid = false;

    while (!nikValid)
    {
        cout << "Masukkan NIK atau Nomor Telepon Anda untuk pembayaran: ";
        cin >> inpNikKtp;

        int indexUser = mSearchUserNik(inpNikKtp);

        if (indexUser != -1)
        {
            cout << "Jadi total Harga tiket yang harus anda Bayar : " << totalHarga[indexUser] << endl;
            nikValid = true;
        }
        else
        {
            cout << "NIK atau Nomor Telepon tidak ditemukan. Silakan coba lagi.\n";
        }
    }
}

// Fungsi pembayaran
void metodePembayaran(int totalHarga[])
{
    int pilih;

    do
    {
        cout << "1. Virtual Account\n";
        cout << "2. Melalui ATM\n";
        cout << "3. Batal\n";
        cout << "Silakan Pilih metode pembayaran : ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
            // Virtual Account
            mVirtualAccount(totalHarga);
            break;
        case 2:
            // ATM
            break;
        case 3:
            pilih = 0;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
            break;
        }
    } while (pilih != 0);

    cout << "Terima Kasih\n";
}

// Fungsi transaksi bus
void mTransaksiBus(string inpNamaBis, string inpStartKeberangkatan, string inpTujuanKeberangkatan)
{
    int jumlahTiket, hargaTiketInt;
    string inpNikKtp;

    // Implementasi fungsi pencarian jadwal bus
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
            cin >> jumlahTiket;
            hargaTiketInt = stoi(hargaTiket[indexBus]);
            inpNikKtp = ""; // Reset NIK untuk input ulang

            int indexUser = mSearchUserNik(inpNikKtp);
            if (indexUser != -1)
            {
                totalHarga[indexUser] = hargaTiketInt * jumlahTiket;
                cout << "Jadi total Harga tiket yang harus anda Bayar : " << totalHarga[indexUser] << endl;
                metodePembayaran(totalHarga);
            }
            else
            {
                cout << "NIK atau Nomor Telepon tidak ditemukan. Transaksi dibatalkan.\n";
            }
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
