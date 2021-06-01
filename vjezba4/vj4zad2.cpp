#pragma once //REMOVE IF NEEDED
#include "vj4zad2.h"

using namespace std;
int board::visina_get() { return visina; }
void board::visina_set(int v) { visina = v; }
int board::sirina_get() { return sirina; }
void board::sirina_set(int s) { sirina = s; }
char board::znak_za_iscrtavanje_get() { return znak_za_iscrtavanje; }
void board::znak_za_iscrtavanje_set(char z) { znak_za_iscrtavanje = z; }
board::board(){
    visina_set(10);
    sirina_set(10);
    znak_za_iscrtavanje_set('o');
    ploca = new char *[sirina_get()];
    for (int i = 0; i <= sirina_get(); i++)
        ploca[i] = new char[visina_get()];
    for (int i = 0; i<=visina_get() ; i++){
        for (int j = 0; j < sirina_get(); j++){
            if (i==0 || j==0)
            ploca [i][j]=znak_za_iscrtavanje_get();
            if (i==sirina_get()-1 || j==visina_get()-1)
            ploca [i][j]=znak_za_iscrtavanje_get();
        }
    }
}
board::board(board& b){
    sirina_set(b.sirina);
    visina_set(b.visina);
    b.ploca=new char* [visina_get()];
    for (int i = 0; i < sirina_get(); i++)
        b.ploca[i] = ploca[visina_get()];
    for (int i = 0; i<=visina_get() ; i++){
        for (int j = 0; j < sirina_get(); j++){
            ploca[i][j]=b.ploca[i][j];
        }
    }
}
board::board (int s, int v){
    sirina_set(s);
    visina_set(v);
    ploca = new char *[sirina_get()];
    for (int i = 0; i < sirina_get(); i++)
        ploca[i] = new char[visina_get()];
    for (int i = 0; i<=visina_get() ; i++){
        for (int j = 0; j < sirina_get(); j++){
            if (i==0 || j==0)
            ploca [i][j]=znak_za_iscrtavanje_get();
            if (i==sirina_get()-1 || j==visina_get()-1)
            ploca [i][j]=znak_za_iscrtavanje_get();
        }
    }
}
board::~board (){
    for (int i = 0; i < sirina_get(); i++){
        delete [] ploca[i];
    }
    delete [] ploca;
}
void board::draw_char(point &tocka, char ch){
    for (int i = 0;i < (int)tocka.y ; i++){
        for (int j = 0; j < (int)tocka.x; j++){
            if (i == tocka.x && i == tocka.y)
            tocka.znak = ch;    
        }
    }
}
void board::draw_up_line(point& tocka,char ch){
    for(int j=(int)tocka.y;j>=1;j--)
        ploca[j][(int) tocka.x]=ch;
}
void board::draw_line(point& tocka1, point& tocka2, char ch){
    tocka1.x=round(tocka1.x), tocka1.y=round(tocka1.y), tocka2.x=round(tocka2.x), tocka2.y=round(tocka2.y);
    int x1 = min(tocka1.x, tocka2.x);
    int x2 = max(tocka1.x, tocka2.x);
    int y1 = min(tocka1.y, tocka2.y);
    int y2 = max(tocka1.y, tocka2.y);
    for(int i = y1; i <= y2; i++){
        for(int j=x1;j <= x2; j++){
            if(y1 == y2)
                ploca[y1][j] = ch;
            else if(i == j)
                ploca[i][j] = ch;
            else if (x1 == x2)
                ploca[i][x1] = ch;
            else
                continue;
        }
    }
}
void board::print (board b){
    for (int i=0; i < b.sirina_get() ;i++){
        for (int j = 0; j < b.visina_get();i++){
            cout << b.znak_za_iscrtavanje_get();
        }
        cout << endl;
    }
}
int main (){
    board b;
    board b1(15,15);
    cout << "VISINA PLOCE:" <<b.visina_get()<< "\tSIRINA PLOCE:"<<b.sirina_get()<<endl;
    point tocka;
    // cout << "1VISINA PLOCE:" <<b1.visina_get()<< "\t1SIRINA PLOCE:"<<b1.sirina_get()<<endl;
    tocka.x=5, tocka.y=5;
    b.draw_up_line (tocka, 'l');
    b.print(b);
    return 0;
}