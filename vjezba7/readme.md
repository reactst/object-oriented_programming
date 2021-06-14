## Objektno programiranje
**vježba 7**
## **višestruko izvođenje**

    · Definirajte interface (apstraktnu klasu) vehicle sa metodama type koja vraća string koji predstavlja vrstu prijevoznog sredstva ”water” ili ”air” i passengers koja vraća broj putnika (unsigned).

    · Izvedite klase kao na slici.

        · Klase watercraft i aircraft implementiraju metodu type, a klase catamaran, ferry i seaplane metodu passengers. U klasama catamaran i seaplane konstruktor dobije broj putnika, a za ferry konstruktor dobije broj putnika, bicikli i automobila. Pretpostavljamo da bicikl ima jednog putnika, a auto pet.
        
        · Klasa seaplane izvedena je iz klasa watercraft i aircraft.
        
        · Napišite klasu counter za brojanje putnika u kojoj je funkcija koja prima prijevozno sredstvo i prilikom dodavanja ispisuje informaciju o tipu prijevoznog sredstva i funkcija koja računa ukupan broj putnika.
        
        · U main funkciji napravite niz pointera na vehicle u kojem će biti različita prijevozna sredstva. Svako prijevozno sredstvo pošaljite klasi counter i ispišite ukupan broj putnika.
        
        · Odvojite definicije klasa i implementacije u više datoteka.

Primjer main-a:

    #include "vehicle.h"
        int main(void) {
        counter c;
        vehicle* v[] = {new catamaran(30), new ferry(10, 5, 3), new seaplane(15)};
        size_t sz = sizeof v/sizeof v[0];
        for (unsigned i = 0; i < sz; ++i)
        c.add(v[i]);
        std::cout << "ukupno " << c.total() << " putnika" << std::endl;
        for (unsigned i = 0; i < sz; ++i)
        delete v[i];
        return 0;
        }
