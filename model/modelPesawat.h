#include <string>
#include <iostream>

#include "../Database/databasePesawat.h"

using namespace std;

void GenerateIDPS()
{
    string code = "77077";
    
}

void mAddPesawat(string inpNamaPS, string inpJumlahKursiPS)
{
    idPS[nPesawat] = GenerateID();
    namaPesawat[nPesawat] = inpNamaPS;
    jumlahKursiPS[nPesawat] = inpJumlahKursiPS;
    nPesawat++;
}

int mSearchBus(string inpIdBus, string inpNamaBus)
{
    int index = -1;
    for (int i = 0; i < nBus; i++)
    {
        if (idBus[i] == inpIdBus && namaBus[i] == inpNamaBus)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        cout << "**Maaf Bis yang anda cari tidak ada**\n";
    }
    return index;
}
