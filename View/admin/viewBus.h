#include <iostream>
#include <string>
#include <limits>
#include "../../model/modelBus.h"
// #include "../../model/modelJadwal.h"

using namespace std;

void vAddBus() {
    string inpNamaBus, inpJumlahKursi, idBus;
    idBus = GenerateID();
    cin.ignore();
    cout << "Masukan Nama Bus : ";
    getline(cin, inpNamaBus);
    cout << "Masukan Jumlah Kursi : ";
    getline(cin, inpJumlahKursi);
    mAddBus(inpNamaBus, inpJumlahKursi);
}


void vViewBus(){
    mViewBus();
}

void vSearchBus(){
    string inpIdBus,inpNamaBus;
    cout << "Masukan ID Bus : ";
    cin >> inpIdBus;
    cin.ignore();
    cout << "Masukan Nama Bus : ";
    getline(cin, inpNamaBus);
    int index = mSearchBus(inpIdBus,inpNamaBus);
    cout << "Data Bus\n";
    cout << "Jumlah Bus : " << (index != -1 ? 1 : 0)<< endl;
    cout << "================================================================================================================" << endl;
   cout << setw(10) << "No. urut" << setw(10) << "ID " << setw(24) << "Nama Bus" << setw(19) << "Jumlah Kursi" << endl;
    cout << "================================================================================================================" << endl;
    if (index != -1){
        cout << setw(6) << index + 1 << setw(15)<< idBus[index] << setw(25) << namaBus[index] << setw(13) << jumlahKursi[index] << endl;
    }
    cout << "================================================================================================================" << endl;
}