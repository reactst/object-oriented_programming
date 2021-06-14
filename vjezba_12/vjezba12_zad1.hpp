#ifndef __VJEZBA_12
#define __VJEZBA_12
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>
#include <fstream>
using namespace std;

typedef struct {
    int pos;
    string fname;
    string lname;
    string drzava;
    int pogreske_po_mecu;
    int uk_pogreske;
}Igraci;

istream& operator>> (istream& is, Igraci& vect){
    return is >> vect.pos >> vect.fname >> vect.lname >> vect.drzava >> vect.pogreske_po_mecu >> vect.uk_pogreske;
}
void izbaciViseOdCetriDP(vector<Igraci>& vect) {
    vector<Igraci>::iterator i = vect.begin();
    while (i != vect.end()){
        if (((*i).pogreske_po_mecu) >= 4)
            i = vect.erase(i);
        else
            i++;
    }
}
void najmanjePogresaka(vector<Igraci> vect) {
    vector<Igraci>::iterator i = vect.begin();
    int n = vect[0].pogreske_po_mecu;
    string str1;
    string str2;
    while (i != vect.end()) {
        if ((*i).pogreske_po_mecu < n) {
            n = (*i).pogreske_po_mecu;
            str1 = (*i).fname;
            str2 = (*i).lname;
        }
        i++;
    }
    cout << str1 << " " << str2 << endl;
}
void sortPogreske(vector<Igraci> vect) {
    sort(vect.begin(), vect.end(), uvijet);
    for (vector<Igraci>::iterator i = vect.begin(); i != vect.end();++i)
        cout << (*i).pos << " " << (*i).fname << " " << (*i).lname << " " << (*i).pogreske_po_mecu << endl;
}
bool uvijet(Igraci igrac1, Igraci igrac2) {
    if (igrac1.pogreske_po_mecu < igrac2.pogreske_po_mecu)
        return true;
    else
        return false;
}

#endif //__VJEZBA_12