#include <string>
#include <iostream>
#include <iomanip>
#include "../database/databasetranspot.h"

void mAddBus(string inpNamaBus, string inpJumlahKursi){
    namaBus[nTransPort] = inpNamaBus;
    jumlahKursi[nTransPort] = inpJumlahKursi;
    nTransPort++;
}

void mViewBus(){
    cout << "Data Bus yang ada\n";
    cout << "==============================================================||" << endl;
    cout << setw(10) << "No. urut" << setw(19) << "Nama Bus" << setw(19) << "Jumlah Kursi" << endl;
    cout << "==============================================================||" << endl;
    for(int i = 0; i < nTransPort; i++){
        cout << setw(6) << i+1 << setw(25) << namaBus[i] << setw(13) << jumlahKursi[i] << endl;
    }
    cout << "==============================================================||" << endl;
    cout << endl;
}

int mSearchBus(string inpNamaBus){
    int index = -1;
    for(int i = 0; i < nTransPort; i++){
        if(namaBus[i] == inpNamaBus){
            index = i;
            break;
        }else{
        cout << "Nama Bis yang anda cari tidak ada";
        }
    }
    return index;
}