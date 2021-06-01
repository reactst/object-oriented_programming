#pragma once //REMOVE IF NEEDED
#include "vj5zad1.h"
void Library::odvoji_knjige(ifstream &fp){
    if (!fp)
        return;
    string          red;
    niz             = new Book[10];
    int i           = 0;
    while (getline(fp, red))    {
        niz[i].cijeli_naziv = red;
        i++;
    }
}
void Library::slozi(HardCopyBook& hcb, Ebook& eb){
    string temp, temp0;
    size_t pos;
    for (int i = 0; i < 10 ; i++){
        temp        = niz[i].cijeli_naziv;
        pos         = temp.find(";");
        temp0       = temp.substr(0, pos);
        niz[i].autor  = temp0;      //AUTOR
        temp.erase(0,pos+1);
        pos         = temp.find(";");
        temp0       = temp.substr(0, pos);
        niz[i].naslov = temp0;     //NASLOV
        temp.erase(0,pos+1);
        if (isdigit(temp[1]))
            hcb.broj_stranica = stoi(temp);
        else{
        pos             = temp.find(";");
        temp0           = temp.substr(0, pos);
        eb.ime_datoteke = temp0;
        temp.erase(0,pos+2);
        pos = temp.find("MB");
        temp0=temp.substr(0,pos);
        //eb.velicina     = stod(temp0);
        }
    }
}

void Library::svi_naslovi_autora(string autor){
    for (int i = 0; niz; i++) {
        if (niz[i].autor.find(autor))
            cout << "AUTOR: " << autor << "\tDJELO: " << niz[i].naslov << endl;
    }
}
double Library::ukupna_velicina_datoteka_autora(string autor, Ebook eb){
    double size=0;
    for (int i = 0; niz; i++){
        if ((eb.velicina>0 && eb.velicina<100) && niz->autor.find(autor)){
            size+=eb.velicina;
        }
    }
    return size;
}
void Library::pronadi(string search_query){
    for (int i = 0; niz; i++){
        if (niz->naslov.find(search_query))
        cout << "PRONADENO: "<< niz->naslov << endl;
    }
}
int main(){
    Library         biblioteka;
    HardCopyBook    tvrda_knjiga;
    Ebook           digitalna_knjiga;
    ifstream fp("knjige.txt");
    biblioteka.odvoji_knjige(fp);
    fp.close();
    biblioteka.slozi(tvrda_knjiga,digitalna_knjiga);
    for (int i = 0; biblioteka.niz; i++)
        cout << i << ".\tNASLOV: " << biblioteka.niz[i].naslov<< "\nPISAC: " << biblioteka.niz[i].autor << endl;
    biblioteka.svi_naslovi_autora("Douglas");
    return 0;
}
