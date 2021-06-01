#ifndef __VJ_8_HPP
#define __VJ_8_HPP
#include <iostream>
#include <string>
using namespace std;
class money{
    int kn;
    int lp;
public:
    money(){};
    money(int set){ kn=set; }
    money(int set_kn,int set_lp){
    kn=set_kn;       
    lp=set_lp;
    }
    int get_kn(){ return kn; }
    int get_lp(){ return lp; }
    void operator+=(money& m){
        kn+=m.get_kn();
        lp+=m.get_lp();
    }
    void operator-=(money& m){
        kn-=m.get_kn();
        lp-=m.get_lp();
    }
    money operator+(const money& m){
        money receipt;
        receipt.kn=this->kn+m.kn;
        receipt.lp=this->lp+m.lp;
        return receipt;
    }
    money operator-(const money& m){
        money receipt;
        receipt.kn=this->kn-m.kn;
        receipt.lp=this->lp-m.lp;
        return receipt;
    }
    friend ostream &operator<<( ostream &out, money& m){
      if(m.lp>99){
            double rest;
            rest=m.lp/100;
            m.kn+=rest;
            m.lp%=100;
        }  
      out<<m.kn<<" kune, "<<m.lp<<" lipa"<<endl;;
      return out;   
    }
    operator double() { 
    return double(kn) + double(lp) / 100; 
    }
    ~money(){};
};

#endif