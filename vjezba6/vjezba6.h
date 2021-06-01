#ifndef __VJ_6_H
#define __VJ_6_H
#include <iostream>
using namespace std;
class animal{
private:
    int legs=0;
    string name;
public:
    virtual int get_legs()=0;
    virtual string get_name() {return name;};
};
class bird : public animal{
private:
    int legs = 2;
    string name = "Bird";

public:
    int get_legs(){return legs;}
    string get_name() { return name; };
};
class ptica : public bird{
private:
    string name = "Ptica";
public:
    string get_name() { return name; };
    int get_legs()=0;
};

class bug : public animal{
private:
    string name = "Kukac";
public:
    int get_legs()=0;
    string get_name() { return name; };
};
class zohar : public bug{
private:
    int legs = 4;
    string name = "Zohar";
public:
    string get_name() { return name; };
    int get_legs(){return legs;}
};
class spider : public animal{
private:
    string name = "Spider";
public:
    int get_legs()= 0;
    string get_name() { return name; };
};
class pauk : public spider{
private:
    string name = "Paucccc";
    int legs = 6;
public:
    string get_name() { return name; };
    int get_legs(){return legs;}
};
class brojac{
private:
    int count = 0;
public:
    int get_legs(animal &a) { return a.get_legs(); };
    void add_animal(animal &a);
    string get_name(animal &a) { return a.get_name(); };
    void print() { cout << count; };
};
void brojac::add_animal(animal &a){
    count += a.get_legs();
    cout << "Dodano: " << a.get_name() << endl;
}
#endif