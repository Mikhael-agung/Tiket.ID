#include <iostream>
#include <iomanip>
#include <string>
#include "../../model/modelTransaksi.h"

using namespace std;

void vTransaksiBus()
{
    string namaBusInp, jamKeberangkatanInp, tujuanKeberangkatanInp;
    cout << "Masukkan Nama BUS :";
    cin >> namaBusInp;
    cout << "Masukkan Jam Keberangkatan :";
    cin >> jamKeberangkatanInp;
    cout << "Masukkan Tujuan Keberangakatan :";
    cin >> tujuanKeberangkatanInp;
    mTransaksiBus(namaBusInp, jamKeberangkatanInp, tujuanKeberangkatanInp);
}