#ifndef PRVI_H
#define PRVI_H
#include <iostream>
#include <cstring>
#include <fstream>
#include <cctype>
using namespace std;
class Book {
public:
    string  cijeli_naziv;
    string  autor;
    string  naslov;
    int     godina_izdavanja;
};
class HardCopyBook : Book {
public:
    int broj_stranica;
};
class Ebook : Book {
public:
    string  ime_datoteke;
    double  velicina;
};
class Library {
public: 
    Book*   niz;
    void    odvoji_knjige (ifstream& fp);
    void    slozi (HardCopyBook& hcb, Ebook& eb);
    void    svi_naslovi_autora (string autor);
    double  ukupna_velicina_datoteka_autora (string autor,Ebook eb);
    void    pronadi (string search_query);
    // Library();
    // ~Library();
};
#endif