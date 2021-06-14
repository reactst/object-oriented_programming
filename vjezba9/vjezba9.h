#ifndef __VJEZBA_9
#define __VJEZBA_9
#include <iostream>
#include <string>
using namespace std;
template <typename T>
void sort (T* niz, unsigned int len) {
    int i, j, min, temp;
    for (i = 0; i < len - 1; i++) {
        min = i;
        for (j = i + 1; j < len; j++)
            if (niz[j] < niz[min])
                min = j;
        temp = niz[i];
        niz[i] = niz[min];
        niz[min] = temp;
    }
}
template < >
void sort(char* niz,unsigned int len) {
    int i, j, min, temp;
    for (i = 0; i < len; i++)
        niz[i] = tolower(niz[i]);
    for (i = 0; i < len - 1; i++) {
        min = i;
        for (j = i + 1; j < len; j++)
            if (niz[j] < niz[min])
                min = j;
        temp = niz[i];
        niz[i] = niz[min];
        niz[min] = temp;
    }
}
template <class T>
class Stack {
    T* niz;
    unsigned int velicina_f=100;
    unsigned int velicina_l;
public:
    Stack(){
        niz=new T [velicina_f];
        velicina_l=0;
    }
    Stack(unsigned int vf, unsigned int vl){
        velicina_f=vf;
        velicina_l=vl;
    }
    void push(T element){
        niz[velicina_l]=element;
        velicina_l++;
    }
    void pop(){
        delete[] niz;
        velicina_l--;
    }
    void is_empty(){
        if (!niz)
            cout << "Its empty" << endl;
        else
            cout << "Not empty" << endl;
        return;
    }
    void print_niz () {
        for (unsigned int i = 0; i < velicina_l; i++)
            cout << i+1 << ".\t" << niz[i] << endl;
        return; 
    }
    ~Stack() {delete[] niz;}
};


#endif //__VJEZBA_9