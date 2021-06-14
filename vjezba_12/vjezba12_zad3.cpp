#pragma once
#include "vjezba12_zad3.hpp"
int main () {
    ifstream file("treci_zadatak.txt");
    vector<int> vect;
    if (!(file.is_open())) {
        cout << "ERROR";
        return 0;
    }
    try {
        vect = citaj(file);
        prebroji(vect);
        cout << "Prije: " << endl;
        for (int i = 0; i < vect.size(); ++i)
            cout << vect[i] << endl;
        izbaci(vect);
        cout << "Posli: " << endl;
        for (int i = 0; i < vect.size(); ++i) 
            cout << vect[i] << endl;
        sortiraj(vect);
    }
    catch (int x) {
        cout << "Nije prirodan broj" << endl;
    }
}