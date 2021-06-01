#pragma once //REMOVE IF NEEDED
#include "vj4zad1.h"

using namespace std;
void vektor::vector_new(){
    loglen = 0, fizlen = 1;
    elementi = new double;
}
void vektor::vector_delete(){
    for (int i = 0; i < loglen; i++)
        delete &elementi[i];
    delete[] elementi;
}
void vektor::vector_push_back(int len){
    elementi[loglen] = len;
    loglen++;
}
void vektor::vector_pop_back(){
    if (elementi[loglen - 1] != 0){
        double *temp = new double[loglen - 1];
        for (int i = 0; i < (loglen - 1); i++)
            temp[i] = elementi[i];
        delete[] elementi;
        elementi = temp;
        loglen--;
    }
}
int vektor::vector_front(){ return this->elementi[0];}
int vektor::vector_back(){ return this->elementi[this->loglen-1];}
int vektor::vector_size(){ return this->loglen;}
void vektor::vector_print(){
    for (int i=0;i<this->loglen;i++){
        cout << "vector " << i << " vrijednost " << elementi[i] << endl;
    }
}
void vektor::postavi(double *el){ elementi = el;}
double *vektor::dohvati_el(){ return elementi;}
void vektor::postavi_loglen(int ll){ loglen = ll;}
int vektor::dohvati_loglen(){ return loglen;}
void vektor::postavi_fizlen(int fl){ fizlen = fl;}
int vektor::dohvati_fizlen(){ return fizlen;}
vektor::vektor(){
    elementi = 0;
    loglen = 0;
    fizlen = 1;
    cout << "konstruktor........." << endl;
}
vektor::vektor(int n, double* k){
    fizlen = n;
    loglen = n + 1;
    if (k != NULL) {
        for (int i = 0; i < fizlen; i++)
            elementi[i] = k[i];
    }
    else{
        for (int i = 0; i < fizlen; i++)
            elementi[i] = 0;
    }
    cout << "konstruktor punjenje....." << endl;
}
vektor::vektor(vektor &v){
    vektor* vect = new vektor;
    vect->fizlen = v.fizlen, vect->loglen = v.loglen;
    for (int i = 0; vect->elementi[i]!=NULL; i++)
        vect->elementi[i]=v.elementi[i];
    cout << "konstruktor kopiranje....." << endl;
}
vektor::~vektor(){
    cout << "Destruktor......" << endl;
}
int main (){
    double niz[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vektor* vect;
    vektor vect1(10,niz);
    vektor vect2 (vect1);
    return 0;
}