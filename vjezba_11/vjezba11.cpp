#pragma once
#include "vjezba11.hpp"
int main () {
    vector<int> vect1;
    vector<int> vect2;
    vector<int> vect3;
    list<string> lista_stringova;
    trokut a(2, 3, 4), b(4, 5, 6);
    trokut_list lst;
    trokut t;
    // lst.input(a);
    // lst.input(b);
    // //t = lst.najveci();
    // t.print();
    // lst.printtl();
    // unos_u_listu(lista_stringova, 3);
    // ukloni_najdulji(lista_stringova);

    // list_print(lista_stringova);
    // int char_n = avg_duljina(lista_stringova);
    // cout << char_n << endl;
    string s = "Ja bih ,ako ikako mogu , ovu recenicu napisala ispravno .";
    clean_string(s);
    cout<< s <<endl;;
    // unos(vect1, 3);
    // unos(vect2, 3);
    // dif_func(vect1, vect2, vect3);
    // print_v(vect3);
    return 0;
}