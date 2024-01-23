#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int mSearchUserNik(string inpNikOrNoTelp)
{
    for (int i = 0; i < nMember; ++i)
    {
        if (nikKtp[i] == inpNikOrNoTelp || noTelp[i] == inpNikOrNoTelp)
        {
            return i;
        }
    }
    return -1;
}


// Fungsi pembayaran Virtual Account
void mVirtualAccount(string inpNikKtp, int totalHarga[])
{
    cout << "Metode pembayaran Virtual Account\n";
    int indexNIK = mSearchUserNik(inpNikKtp);
    if (indexNIK != -1)
    {
        cout << "Total harga yang harus anda bayar: " << totalHarga[indexNIK] << endl;
    }
    else
    {
        cout << "Nik tidak ditemukan";
    }
}

// Fungsi pembayaran
void metodePembayaran(int hargaTotal, string inpNik)
{
    int totalHarga = 0;
    int pilih;
    string inpNikKtp;
    do
    {
        cout << "1. Virtual Account\n";
        cout << "2. Melalui ATM\n";
        cout << "3. Menggunakan Point\n";
        cout << "4. Batal\n";

        cout << "Silakan Pilih metode pembayaran : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            // Virtual Account
            cout << "Masukkan NIK atau Nomor Telepon anda : ";
            // cin >> inpNikKtp;
            // mVirtualAccount(inpNikKtp, hargaTotal);
            cout << "Pembayaran berhasil";
            break;
        case 2:
            // ATM
            break;
        case 3:
            int indexPoint;
            indexPoint = mSearchUserTU(inpNik);
            if(indexPoint ){

            }
            break;
        default:
            cout << "Transaksi yang anda batalkan";
            break;
        }
    } while (pilih != 0);
    // cout << "Terima Kasih";
}

void mTransaksiBus(string inpNamaBis, string inpStartKeberangkatan, string inpTujuanKeberangkatan)
{
    int jumlahTiket, hargaTotal;
    string inpNikKtp;
    int indexBus = mSearchJdwlBus(inpNamaBis, inpStartKeberangkatan, inpTujuanKeberangkatan);
    if (indexBus != -1)
    {
        cout << "Informasi Tiket yang anda cari:\n";
        cout << "Nama BUS :" << namaBus[indexBus] << endl;
        cout << "Stasiun pertama :" << awalKeberangkatan[indexBus] << endl;
        cout << "Rute Tujuan Ke :" << tujuanKeberangkatan[indexBus] << endl;
        cout << "Harga Tiket : " << hargaTiket[indexBus] << endl;

        cout << "Apakah Anda setuju dengan hasil data yang ditemukan? (y/n): ";
        char konfirmasi;
        cin >> konfirmasi;

        if (konfirmasi == 'y' || konfirmasi == 'Y')
        {
            cout << "Berapa tiket yang ingin Anda beli? ";
            cin >> jumlahTiket;

            hargaTotal = stoi(hargaTiket[indexBus]) * jumlahTiket;

            while (true)
            {
                cout << "Masukkan NIK atau Nomor Telepon Anda untuk pembayaran: ";
                cin >> inpNikKtp;

                int indexUser = mSearchUserNik(inpNikKtp);
                if (indexUser != -1)
                {
                    hargaTotal = stoi(hargaTiket[indexBus]) * jumlahTiket;
                    cout << "Jadi total Harga tiket yang harus anda Bayar : " << hargaTotal << endl;
                    cout << "Pilih metode Pembayaran anda : ";
                    metodePembayaran(hargaTotal, inpNikKtp);
                    break;
                }
                else
                {
                    cout << "NIK atau Nomor Telepon tidak ditemukan. Silakan coba lagi.\n";
                }
            }
        }
    }
    else
    {
        cout << "Maaf, tiket yang Anda cari tidak ditemukan.\n";
    }
}

// Fungsi pencarian user berdasarkan NIK atau nomor telepon

// Fungsi transaksi bus
// void mTransaksiBus(string inpNamaBis, string inpStartKeberangkatan, string inpTujuanKeberangkatan)
// {
//     int jumlahTiket, hargaTiketInt;
//     string inpNikKtp;
//     int indexBus = mSearchJdwlBus(inpNamaBis, inpStartKeberangkatan, inpTujuanKeberangkatan);
//     if (indexBus != -1)
//     {
//         cout << "Informasi Tiket yang anda cari:\n";
//         cout << "Nama BUS :" << namaBus[indexBus] << endl;
//         cout << "Stasiun pertama :" << awalKeberangkatan[indexBus] << endl;
//         cout << "Rute Tujuan Ke :" << tujuanKeberangkatan[indexBus] << endl;
//         cout << "Harga Tiket : " << hargaTiket[indexBus] << endl;
//         // Menampilkan semua jadwal bus
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
