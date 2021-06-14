#pragma once
#include "vjezba12_zad2.hpp"
int main () {
    ostream_iterator<short> os(cout, " ");
    arr<short, 10> niz(4);
    niz[0] = niz[2] += 5;
    copy(niz.begin(), niz.end(), os);
}