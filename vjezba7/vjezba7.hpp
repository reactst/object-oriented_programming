#ifndef __VJ_7_HPP
#define __VJ_7_HPP
#include <iostream>
#include <string>
using namespace std;
class Vehicle{
    unsigned int broj_putnika;
    public:
    virtual string get_type()=0;
    virtual int get_brojputnika(){return broj_putnika;}
    virtual ~Vehicle(){ }
};
class Watercraft : virtual public Vehicle{
    string type = "voda";
    public:
    string get_type() {return type;}
};
class Aircraft : virtual public Vehicle{
    string type="zrak";
    public:
    string get_type(){return type;}
};
class Seaplane : public Vehicle{
    string type="voda-zrak";
    unsigned int broj_putnika;
    public:
    Seaplane(int n){ 
        broj_putnika=n;
        cout << get_type() << " ima putnika " << get_brojputnika() <<endl;
        }
    string get_type(){return type;}
    int get_brojputnika(){return broj_putnika;}
    ~Seaplane(){
    }
};

class Catamaran:public Watercraft{  
    string type="voda-brza";
    unsigned int broj_putnika;
    public:
    Catamaran(int n){
        broj_putnika=n;
        cout<<get_type()<< " putnika "<<get_brojputnika()<<endl;
    }
    string get_type(){return type;}
    int get_brojputnika(){return broj_putnika;}
    ~Catamaran(){
    }

};
class Ferry:public Vehicle{
    string type="voda-spora";
    unsigned int broj_putnika;
    unsigned int pjesaci;
    unsigned int bicikle;
    unsigned int automobil;
    public:
    Ferry(int n,int k,int z){
        pjesaci=n;
        bicikle=k;
        automobil=z*5;
        broj_putnika=pjesaci+bicikle+automobil;
        cout<<get_type()<< " putnika "<<get_brojputnika()<<" od toga u automobilu "<<get_automobil()<< " i na bicikli "<<get_bicikle()<<endl;
    }
    string get_type(){return type;}
    int get_brojputnika(){return broj_putnika;}
    int get_bicikle(){return bicikle;}
    int get_automobil(){return automobil;}
    ~Ferry(){
    }
};

class Counter{
    protected:
    int zbroj=0;
    public:
    Counter(){};
    void ukupno(Vehicle* v){zbroj+=v->get_brojputnika();}
    int get_zbroj(){return zbroj;}
    ~Counter(){};
};
#endif