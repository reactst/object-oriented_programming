#ifndef VJ_12
#define VJ_12
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

template <typename T, int a>
class arr {
private:
    T* arr;
public:
    arr() {};
    arr(int n) {
        arr = new T[a];
        fill(arr, arr + a, n);
    }
    T& operator[](int i) { return arr[i];}
    T* begin(){ return arr;}
    T* end() { return arr + a; }    
    ~arr() { delete[] arr; }
};

vector<int> citaj(istream& fp){
    vector<int> vect;
    istream_iterator<int> is(fp), end;
    copy(is, end, back_inserter(vect));
    vector<int>::iterator i = vect.begin();
    while (i != vect.end()) {
        if ((*i) <= 0) {
            throw int();
        }
        i++;
    }
    return vect;
}
void prebroji(vector<int> vect){
    int brojac = 0;
    for (vector<int>::iterator i = vect.begin(); i != vect.end(); ++i) {
        if ((*i) > 100)
            brojac++;
    }
    cout << "Brojeva vecih od 100 ima :" << brojac << endl;
}
void izbaci(vector<int>& vect){
    vector<int>::iterator it = vect.begin();
    while (it != vect.end()) {
        if ((*it) < 100) 
            it = vect.erase(it);
        else 
            it++;
    }
}
void sortiraj(vector<int>& vect){
    sort(vect.begin(), vect.end(), uvijet);
    for (int i = 0; i < vect.size(); ++i) {
        cout << vect[i] << endl;
    }
}
bool uvijet(int a, int b){
    return b > a ? false : true;
}

#endif //VJ_12