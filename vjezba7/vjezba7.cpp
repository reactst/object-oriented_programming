#pragma once //REMOVE IF NEEDED
#include "vjezba7.hpp"
int main () {
    Counter brojac;
    Vehicle* v[] = {new Catamaran(30), new Ferry(10, 5, 3), new Seaplane(15)};
    size_t sz =sizeof v /sizeof *v;
    for(int i = 0; i < sz; ++i)
        brojac.ukupno(v[i]);
    cout << "ukupno " << brojac.get_zbroj() << " putnika" << endl;
    for(int i = 0; i < sz; ++i)
        delete v[i];
    return 0;
}