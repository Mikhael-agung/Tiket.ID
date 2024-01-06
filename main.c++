#include <iostream>
#include <string>
#include <limits>
#include "view/admin/viewBus.h"
#include "view/admin/viewUser.h"
// #include "model/modelKereta.h"
#include "view/admin/viewJadwal.h"

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
    mAddjadwal("Patas", "18-4-2024", "Surabaya", "Jember", "18.00", "15.00", "20000");
    mAddjadwal("Sugeng rahayu", "18-4-2024", "Jakarta", "Semarang", "18.00", "15.00", "20000");
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
        cout << "1. Lihat User\n";
        cout << "2. Delete User\n";
        cout << "3. Search user\n";
        cout << "4. Tambah Bus\n";
        cout << "5. Lihat Daftar Bus\n";
        cout << "6. Search Bus\n";
        cout << "7. Tambah jadwal Bus\n";
        cout << "8. Lihat Jadwal Bus\n";
        cout << "9. Exit\n";
        cout << "Masukan Pilihan : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            vViewUser();
            break;
        case 2:
            vDeleteUser();
            break;
        case 3:
            vSearchUser();
            break;
        case 4:
            vAddBus();
            break;
        case 5:
            vViewBus();
            break;
        case 6:
            vSearchBus();
            break;
        case 7: 
            vAddJadwal();
            break; 
        case 8:
            vViewJadwal();
            break;
        default:
            pilih = 9;
            break;
        }

        if (pilih != 9)
        {
            confirm(pilih);
        }

    } while (pilih != 9);
    cout << "THX\n";
}

void MenuUser()
{
    cout << "Fitur akan Segera Di Rilis 🙏🙏";
}

void LoginAuthentication()
{
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
    }
}

int main()
{
    static_value();

    // mViewTrain();
    LoginAuthentication();
    // mSearchJadwalBus();
    return 0;
}