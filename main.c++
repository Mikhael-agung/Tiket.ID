#include <iostream>
#include <string>
#include <limits>
// #include "view/user/viewTransaksi.h"
#include "view/admin/viewBus.h"
#include "view/admin/viewUser.h"
// #include "model/modelKereta.h"
#include "view/admin/viewJadwal.h"
#include "view/user/viewTransaksi.h"
// #include "model/modelTransaksi.h"

using namespace std;

void static_value()
{
    //! testing AddMember
    mAddUser("kurniawan", "0147258369", "0369258147", "kurniawan@gmail.com", "123456");
    mAddUser("gracie", "321654987", "789456123", "gracie@gmail.com", "0123456");
    // mAddUser("gracie", "321654987", "789456123", "gracie@gmail.com", "0123456");

    //* Testing Kendaraan Bus Static_Value
    mAddBus("Sugeng rahayu", "50");
    mAddBus("Patas", "50");

    // //* Testing Fitur Kereta dan Gerbong
    // mAddTrain("Agro bromo", "Ekonomi ekslusif", "200");
    // mAddTrain("Melati", "Eksekutif", "100");

    //*Testing jadwal
    mAddjadwalBus("Patas", "18-4-2024", "Surabaya", "Jember", "18.00", "15.00", "20000");
    mAddjadwalBus("Sugeng rahayu", "18-4-2024", "Jakarta", "Semarang", "18.00", "15.00", "150000");

    //*Testing Transaksi
}

void confirm(int &pilih)
{
    char konfirmasi;
    cout << "kembali ke menu utama? (Y/N): ";
    cin >> konfirmasi;
    if (konfirmasi == 'y' || konfirmasi == 'Y')
    {
        pilih = 0;
    }

    if (konfirmasi == 'n' || konfirmasi == 'N')
    {
        pilih = 9;
    }
}

void MenuAdmin()
{
    int pilih;
    do
    {
        cout << "Menu Admin\n";
        cout << "1. Menu Edit User\n";
        cout << "2. Menu Edit Bus\n";
        cout << "3 Tambah jadwal Bus\n";
        cout << "6. Lihat Jadwal Bus\n";
        cout << "7. Exit\n";
        cout << "Masukan Pilihan : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            vMenuUser();
            break;
        case 2:
            vMenuBus();
            break;
        case 3:
            vAddJadwalBus();
            break;
        case 4:
            vViewJadwal();
            break;
        case 5:

            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        default:
            pilih = 9;
            break;
        }

    } while (pilih != 7);
    cout << "THX\n";
}

void MenuUser()
{
    int pilih;
    do
    {
        cout << "1. transaksi ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            vTransaksiBus();
            break;

        default:
            break;
        }
    } while (pilih != 0);
}

void LoginAuthentication()
{
    char jawab;
    string email, password;
    cout << "Masukan Email/NIK anda :";
    cin >> email;
    cout << "Masukan password anda ";
    cin >> password;

    int index = mLoginUser(email, password);
    if (email == "admin" && password == "admin")
    {
        MenuAdmin();
    }
    else if (index != -1)
    {
        MenuUser();
    }
    else
    {
        cout << "Email/NIK atau Password yang anda masukan salah\n";
        cout << "Apakah anda ingin membuat akun ? (y/n):";
        cin >> jawab;
        if (jawab == 'y')
        {
            vAddUser();
            LoginAuthentication();
        }
        else
        {
            cout << "TerimaKasih" << endl;
        }
    }
}

int main()
{
    static_value();
    // mSearchJdwlBus("Patas", "Surabaya", "Jember");
    mViewjadwalBus();
    // mTransaksiBus("Patas", "Surabaya", "Jember");
    // mViewTrain();
    // LoginAuthentication();
    vTransaksiBus();
    // mSearchJadwalBus();
    // vSearchJadwalBus();
    return 0;
}