#include <iostream>
#include <string>
#include "../../model/modelBus.h"

using namespace std;

void vAddBus (){
    string inpNamaBus,  inpJumlahKursi;
    cout << "Masukan Nama Bus : ";
    cin >> inpNamaBus;
    cin.ignore();
    cout << "Masukan Jumlah Kursi : ";
    getline(cin, inpJumlahKursi);
    mAddBus(inpNamaBus, inpJumlahKursi);
}

void vViewBus(){
    mViewBus();
}

void vSearchBus(){
    string inpNamaBus;
    cout << "Masukan Nama Bus : ";
    cin >> inpNamaBus;
    int index = mSearchBus(inpNamaBus);
    cout << "Data Para Member\n";
    cout << "Jumlah member : " << index << endl;
    cout << "================================================================================================================" << endl;
    cout << setw(13) << "No. urut "<< setw(11) << "Nama Bus" << setw(17) << "Jumlah Kursi" << endl;
    cout << "================================================================================================================" << endl;
    if (index != -1){
        cout << setw(6) << index+1 << setw(25) << namaBus[index] << setw(13) << jumlahKursi[index] << endl;
    }else{
        cout << "No.Telp yang anda cari tidak ada";
    }
    cout << "================================================================================================================" << endl;
}