#ifndef DRUGI_H
#define DRUGI_H
#include <iostream>
#include <string>
using namespace std;
class Japanez{
    bool        player_win;
    bool        pc_win;
    public: 
    Human_Player *igrac_covjek;
	PC_Player   *igrac_pc;
    Japanez(Human_Player igrac,PC_Player pc);
    void        start();
    bool        stop();
    void        get_result();
    void        print_result () const;
    void        reset();
};
class Player{
    public:
    int         zbroj_ruke;
};
class Human_Player : public Player{
    string      playername;
    public:
    void        hand();
    string      getplayername();
    Human_Player(string name);
    ~Human_Player(); 
};
class PC_Player : public Player{
public:
    int         zbroj_komp;
    void        pc_hand();
};

#endif