#pragma once
#include "vjezba12_zad1.hpp"
int main() {
    ifstream fp("winbledon_double_faults.txt");
    vector<Igraci> vect;
    if (!fp.is_open()) {
        cout << "Error" << endl;
        return 0;
    }
    istream_iterator<Igraci> is(fp), ends;
    copy(is, ends, back_inserter(vect));
    for (int i = 0; i < vect.size(); ++i) {
        cout << vect[i].pos << " " << vect[i].fname << " " << vect[i].lname << " " << vect[i].drzava << " " << vect[i].pogreske_po_mecu << " " << vect[i].uk_pogreske << endl;
    }
    izbaciViseOdCetriDP(vect);
    for (int i = 0; i < vect.size(); ++i) {
        cout << vect[i].pos << " " << vect[i].fname << " " << vect[i].lname << " " << vect[i].drzava << " " << vect[i].pogreske_po_mecu << " " << vect[i].uk_pogreske << endl;
    }
    najmanjePogresaka(vect);
    sortPogreske(vect);
}