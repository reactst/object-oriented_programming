#ifndef __VJEZBA_11
#define __VJEZBA_11
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <ctime>
#include <random>
#include <list>
using namespace std;
class trokut{
public:
    int a, b, c, opseg;
    trokut() {}
    trokut(int a, int b, int c) : a(a), b(b), c(c), opseg(a + b + c) {}
    void print() { cout << a << " " << b << " " << c << endl; }
};
class trokut_list{
public:
    vector<trokut> v;
    void input(trokut t){
        v.push_back(t);
    }
    void printtl(){
        for (int i = 0; i < v.size(); i++)
            v[i].print();
    }
    trokut& najveci(){
        int oppseg = 0;
        trokut& tr = v[0];
        for (int i = 0; i < v.size(); i++) {
            if (v[i].opseg > oppseg) {
                oppseg = v[i].opseg;
                tr = v[i];
            }
        }
        return tr;
    }
};
void unos (vector<int> &vect, int br_elemenata){
    int unos;
    for (int i = 0; i < br_elemenata; i++) {
        cout << "Unesite broj: " << endl;
        cin >> unos;
        vect.push_back(unos);
    }
}
void generiraj(vector<int>& vect, int min, int max, int br_elemenata){
    int rand_br;
    srand(time(NULL));
    for (int i = 0; i < br_elemenata; i++) {
        rand_br = (rand() % max) + min;
        vect.push_back(rand_br);
    }
}
void print_v(vector<int> vect){
    for (vector<int>::iterator i = vect.begin(); i != vect.end(); i++){
        cout << *i << endl;
    }
}
void dif_func(vector<int> vect, vector<int> vect2, vector<int>& v1)
{
    int flag = 0;
    for (vector<int>::iterator i = vect.begin(); i != vect.end(); i++)    {
        for (vector<int>::iterator j = vect2.begin(); j != vect2.end(); j++){
            if (*i == *j)
                flag = 1;
        }
        if (flag == 0)
            v1.push_back(*i);
        flag = 0;
    }
}
void clean_string(string& str){
    string razmak = " ";
    for (int i = 0; i < str.size(); i++) {
        if (str[i + 1] == ',' && str[i] == ' ')
            str.erase(str.begin() + i);
        if (str[i] == ',' && str[i + 1] != ' ')
            str.insert(i + 1, razmak);
    }
}
void unos_u_listu(list<string>& ls_str, int br_elemenata){
    string s;
    for (int i = 0; i < br_elemenata; i++) {
        cout << "Unesite string " << endl;
        cin >> s;
        ls_str.push_back(s);
    }
}
int broj_slova(list<string> ls_str)
{
    int br_slova = 0;
    string temp;
    for (list<string>::iterator i = ls_str.begin(); i != ls_str.end(); i++){
        temp = *i;
        br_slova += temp.size();
    }
    return br_slova;
}
double avg_duljina(list<string> ls_str){
    list<int> velicine;
    int velicina;
    for (list<string>::iterator i = ls_str.begin(); i != ls_str.end(); i++) {
        std::string temp = *i;
        velicina = temp.size();
        velicine.push_back(velicina);
    }
    double avg = 0;
    for (list<int>::iterator i = velicine.begin(); i != velicine.end(); i++)
        avg += *i;
    avg = avg / velicine.size();
    return avg;
}
void ukloni_najdulji(list<string>& ls_str){
    int max = 0;
    string s;
    string temp;
    for (list<string>::iterator i = ls_str.begin(); i != ls_str.end(); i++){
        temp = *i;
        if (temp.size() > max) {
            max = temp.size();
            s = *i;
        }
    }
    ls_str.remove({ s });
    return;
}
void list_print(list<string> ls_str){
    for (list<string>::iterator i = ls_str.begin(); i != ls_str.end(); i++)
        cout << *i << endl;
    return;
}

#endif