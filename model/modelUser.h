#include <string>
#include <iostream>
#include <iomanip>
#include "../database/databaseUser.h"

void mAddUser(string inpNamaUser, string inpNikKtp, string inpNoTelp, string inpEmail, string inpPassword )
{
    namaMember[nMember] = inpNamaUser;
    noTelp[nMember] = inpNoTelp;
    password[nMember] = inpPassword;
    email[nMember] = inpEmail;
    nikKtp[nMember] = inpNikKtp;
    nMember++;
}

int mLoginUser(string inpEmail, string inpPassword){
    for(int i = 0; i < nMember; i++){
        if((email[i] == inpEmail && password[i] == inpPassword) || (nikKtp[i] == inpEmail && password[i] == inpPassword)){
            return i;
        }
    }
    return -1;
}

void mViewUser()
{
    cout << "Data Para Member\n";
    cout << "Jumlah member : " << nMember << endl;
    cout << "================================================================================================================" << endl;
       cout << setw(10) << "No. urut" << setw(13) << "Nama" << setw(17) << "No Nik Ktp" << setw(14) << "No. Telp" << setw(20) << "Email" << setw(20) << "Password" << endl;
    cout << "================================================================================================================" << endl;
    for (int i = 0; i < nMember; i++)
    {
        cout << setw(7) << i+1 <<setw(18) << namaMember[i] << setw(15) << nikKtp[i] << setw(15) << noTelp[i] << setw(25) << email[i] << setw(15) << password[i] << endl;
    }
    cout << "================================================================================================================" << endl;
}

int mSearchUser(string inpNoTelp){
    for(int i = 0; i< nMember; i++ ){
        if(noTelp[i] == inpNoTelp){
            return i;
        }
    }
    return -1;
}

void mUpdatePassword(string inpNoTelp, string inpPass){
    int index = mSearchUser(inpNoTelp);
    if(index != -1){
        password[index] = inpPass;
        cout << "Password berhasil Di rubah";
    }else{
        cout << "NO.Telp yang anda masukan tidak di temukan\n";
        cout << "Password Gagal untuk di rubah";
    }
}