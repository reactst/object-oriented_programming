#ifndef VJ12_JERKO
#define VJ12_JERKO
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <fstream>
using namespace std;
vector<int> citaj(istream& fp) {
    vector<int> vect;
    istream_iterator<int> is(fp), end;
    copy(is, end, back_inserter(vect));
    vector<int>::iterator i = vect.begin();
    while (i != vect.end()) {
        if ((*i) <= 0)
            throw int();
        i++;
    }
    return vect;
}
void prebroji(vector<int> vect) {
    int brojac = 0;
    for (vector<int>::iterator i = vect.begin(); i != vect.end(); ++i) {
        if ((*i) > 100)
            brojac++;
    }
    cout << "Brojeva vecih od 100 ima :" << brojac << endl;
}
void izbaci(vector<int>& vect) {
    vector<int>::iterator it = vect.begin();
    while (it != vect.end()) {
        if ((*it) < 100)
            it = vect.erase(it);
        else
            it++;
    }
}
void sortiraj(vector<int>& vect) {
    sort(vect.begin(), vect.end(), uvijet);
    for (int i = 0; i < vect.size(); ++i)
        cout << vect[i] << endl;
}
bool uvijet(int a, int b) {
    return b > a ? false : true;
}
#endif //VJ12_JERKO
