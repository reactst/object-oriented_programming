# Objektno programiranje

**Vježba 1**

## _UNOS I ISPIS_

Unos se realizira pomoću cin objekta klase istream, a ispis pomoću cout koji je
objekt klase ostream. Objekt cout koristi se u kombinaciji sa operatorom <<, a
cin sa operatorm >>.

    #include <iostream>
    int main()
    {
        int a, b, s;
        std::cout << "unesi dva broja" << std::endl;
        std::cin >> a >> b;
        s = a + b;
        std::cout << "suma je " << s << std::endl;
    }


MANIPULATORI

Manipulatori se koriste za formatiranje ulaza i izlaza. 
Detaljnija tablica http://www.cplusplus.com/reference/library/manipulators/

**independent flags (switch on)**

| boolalpha | ispis bool vrijednosti kao string |

| uppercase | velika slova u hex prikazu, E u eksponencijalnom zapisu |


**independent flags (switch off)**

noboolalpha || ispis bool vrijednosti kao broj 1 ili 0

nouppercase || ne generira velika slova u ispisu


**numerical base format flags**

dec || decimalni format za cijele brojeve (baza 10)

oct || oktalni format za cijele brojeve (baza 8)

hex || heksadecimalni format za cijele brojeve (baza 16)


**floating point format flags**

fixed || zapis sa pomičnim zarezom za realne brojeve

scientific || eksponencijalni zapis za realne brojeve


**adjustment format flags**

left || lijevo poravnanje

right || desno poravnanje


**input manipulatori**

ws || ekstrahira whitespaceove


**output manipulatori**

endl || kraj linije

ends || kraj stringa

flush || prazni stream


**parametrizirani manipulatori (<iomanip>)**

setprecision || preciznost decimalnih brojeva

setbase || zapis u bazi

setfill || znak za ispunjavanje

setiosflags || postavlja određene formate

resetiosflags || resetira određene formate


ZADATAK

Unesite sljedeći program i modificirajte ga testirajući gornje manipulatore.

    #include <iostream>
    #include <iomanip>
    int main()
    {
        bool flag;
        std::cout << "unesi " << true << " - " << false << std::endl;
        std::cin >> flag;
        std::cout << std::boolalpha << flag << std::endl;
        int a = 255;
        std::cout << "hex " << std::hex << a << std::endl;
        std::cout << "dec " << std::dec << a << std::endl;
        std::cout << "oct " << std::oct << a << std::endl;
        double pi = 3.141592;
        std::cout << "pi = " << std::scientific << std::uppercase;
        std::cout << std::setprecision(7) << std::setw(20) << std::setfill('0');
        std::cout << pi << std::endl;
    }
