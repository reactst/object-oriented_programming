#ifndef DRUGI_H
#define DRUGI_H
#include <iostream>
#include <cmath>
struct point {
    double x,y;
    char znak;

};
class board {
    private:
    int visina, sirina;
    char znak_za_iscrtavanje='o';
    public:
    int visina_get();
    void visina_set(int v);
    int sirina_get();
    void sirina_set(int s);
    char znak_za_iscrtavanje_get();
    void znak_za_iscrtavanje_set(char z);
    char ** ploca;
    void draw_char(point &tocka, char ch);
    void draw_up_line(point &tocka, char ch);
    void draw_line(point &tocka1, point &tocka2, char ch);
    void print (board b);
    board();
    board(board &b);
    board (int s, int v);
    ~board();
};
#endif