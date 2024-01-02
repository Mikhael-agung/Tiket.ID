#include <iostream>
#include <string>
#include "../../model/modelUser.h"

using namespace std;

void vAddUser(){
    string inpNamaUser, inpNikKtp, inpNoTelp, inpEmail, inpPassword;
    cout << "Masukan Nama anda :";
    cin >> inpNamaUser;
    cout << "Masukan Nik KTP anda : ";
    cin >> inpNikKtp;
    cout << "Masukan No Telepon anda : ";
    cin >> inpNoTelp;
    cout << "Masukan email anda : ";
    cin >> inpEmail;
    cout << "Masukan Password anda : ";
    cin >> inpPassword;
    mAddUser(inpNamaUser, inpNikKtp, inpNoTelp, inpEmail, inpPassword);
    cout << endl;
}

void vViewUser(){
    mViewUser();
}

void vSearchUser(){
    string inpNoTelp;
    cout << "Masukan No Telepon : ";
    cin >> inpNoTelp;
    int index = mSearchUser(inpNoTelp);
    cout << "Data Para Member\n";
    cout << "Jumlah member : " << index << endl;
    cout << "================================================================================================================" << endl;
    cout << setw(13) << "No. urut "<< setw(11) << "Nama" << setw(17) << "No Nik Ktp" << setw(14) << "No. Telp" << setw(20) << "Email" << setw(20) << "Password" << endl;
    cout << "================================================================================================================" << endl;
    if (index != -1){
        cout << setw(8) << index+1 <<setw(18) << namaMember[index] << setw(15) << nikKtp[index] << setw(15) << noTelp[index] << setw(25) << email[index] << setw(15) << password[index] << endl;
    }else{
        cout << "No.Telp yang anda cari tidak ada";
    }
    cout << "================================================================================================================" << endl;
}

