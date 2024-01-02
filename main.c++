#include <iostream>
#include <string>
#include "view/admin/viewBus.h"
#include "view/admin/viewUser.h"

using namespace std;

void static_value(){
    //! testing AddMember 
    mAddUser("kurniawan", "0147258369", "0369258147", "kurniawan@gmail.com", "123456");
    mAddUser("gracie", "321654987", "789456123", "gracie@gmail.com", "0123456");
    // mAddUser("gracie", "321654987", "789456123", "gracie@gmail.com", "0123456");

    //* Testing Kendaraan Bus Static_Value
    mAddBus("Sugeng rahayu", "50");
    mAddBus("Patas", "50");


}

void confirm(int &pilih){
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
        cout << "2. Tambah angkutan\n";
        cout << "3. Lihat Bus\n";
        cout << "4. Tambah Jadwal\n";
        cout << "5. Update Jadwal\n";
        cout << "9. Exit\n";
        cout << "Masukan Pilihan : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            vViewUser();
            break;
        case 2:
            vAddBus();
            break;
        case 3:
            vViewBus();
            break;
        case 4:
            
            break;
        case 5:
            break;  
        default:
            pilih = 9;
            break;
        }

        if(pilih != 9){
            confirm(pilih);
        }
        
    } while (pilih != 9);
    cout << "THX\n";
}

void MenuUser(){
    cout << "Fitur akan Segera Di Rilis 🙏🙏";
}

void LoginAuthentication(){
    string email, password;
    cout << "Masukan Email/NIK anda :";
    cin >> email;
    cout << "Masukan password anda ";
    cin >> password;

    int index = mLoginUser(email, password);
    if(email == "admin" && password == "admin"){
        MenuAdmin();
    }else if(index != -1){
        MenuUser();
    }else{
        cout << "Email/NIK atau Password yang anda masukan salah\n";
    }
}


int main (){
    static_value();
    LoginAuthentication();
    return 0;
}