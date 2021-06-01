 #ifndef __VJEZBA_10
#define __VJEZBA_10
#include <iostream>
#include <ostream>
#include <fstream>
#include <ctime>
using namespace std;
class exc{
public:
    virtual void getError() = 0;
};

class wrongInput : public exc{
public:
    string str = " Krivi input ";
    void getError()  {
        time_t now = time(0);
        char* dt = ctime(&now);
        cout << str;
        ofstream os("errors.log", std::ios_base::out | std::ios_base::app);
        os << dt + str << '\n';
        os.close();
    }
};
class KriviOperand : public exc{
public:
    string str = " Krivi operator ";
    void getError() {
        time_t now = time(0);
        char* dt = ctime(&now);
        cout << str;
        ofstream os("errors.log",ios_base::out | ios_base::app);
        os << dt + str << '\n';
        os.close();
    }
};
class DjeljenjeSNulom : public exc
{
public:
    string str = " Dijeljenje nulom ";
    void getError()  {
        time_t now = time(0);
        char* dt = ctime(&now);
        std::cout << str;
        std::ofstream os("errors.log", std::ios_base::out | std::ios_base::app);
        os << dt + str << '\n';
        os.close();
    }
};
int foonos_broja(){
    cout << "Unesite broj: " << endl;
    int n;
    cin >> n;
    if (cin.fail())
        throw wrongInput();
    return n;
}

char foonos_operatora(){
    cout << "Unesite operator: " << endl;
    char n;
    cin >> n;
    if (n == '+' || n == '-' || n == '*' || n == '/')
        return n;
    else
        throw KriviOperand();
}

double foo_bar(int a, int b, char c){
    if (c == '+')
        return a + b;
    else if (c == '-')
        return a - b;
    else if (c == '*')
        return a * b;
    else if (c == '/')
        if (b == 0)
            throw DjeljenjeSNulom();
        return a / b;
}

#endif