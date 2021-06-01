#ifndef PRVI_H
#define PRVI_H
#include <iostream>
class vektor{
private:
    double *elementi;
    int loglen, fizlen;

public:
    void vector_new();
    void vector_delete();
    void vector_push_back(int len);
    void vector_pop_back();
    int vector_front();
    int vector_back();
    int vector_size();
    void vector_print();
    void postavi(double *el);
    double *dohvati_el();
    void postavi_loglen(int ll);
    int dohvati_loglen();
    void postavi_fizlen(int fl);
    int dohvati_fizlen();
    //KONSTRUKTORI
    vektor();
    vektor(int n, double* k);
    vektor(vektor &v);
    ~vektor();
};
#endif