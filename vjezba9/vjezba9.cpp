#pragma once //DELETE IF NEEDED
#include "vjezba9.h"
int main () {
    //prvi
    int niz_int[8] = {1,3,2,4,6,5,7,8};
    char niz_char[8] = {'b','c','g','s','f','t','b','a'};
    int niz_vel = sizeof(niz_int)/sizeof(*niz_int);
    sort<int>(niz_int,niz_vel);
    sort<char>(niz_char,niz_vel);
    for (int i = 0; i < niz_vel; i++)
        cout << i << "." << niz_int[i] << "\t" << niz_char[i] <<endl;
    //drugi
    Stack<int> stog;
    stog.push(4);
    stog.push(0);
    stog.push(8);
    //stog.pop();
    stog.print_niz();
    stog.is_empty();
    return 0;
}