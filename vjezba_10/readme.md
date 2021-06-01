## Objektno programiranje
 **vježba 10**
## **exceptions**

Napišite program kojem se unose dva operanda (cijeli brojevi) i operator te ispisuje operacija zajedno sa rezultatom. Pri tome obavezno koristite sljedeće funkcije:

        • funkciju za unos jednog cijelog broja - baca iznimku ako nije unesen broj
        • funkciju za unos operatora - baca iznimku ako operator nije jedan od podržanih (+-*/)
        • funkciju koja računa rezultat operacije - baca iznimku u slučaju problema (npr. dijeljenje s nulom)
        
Sve iznimke izvedite iz iste bazne iznimke.
U glavnom programu vrtite beskonačnu petlju dok se operacija uspješno računa. U slučaju iznimke otvorite datoteku sa greškama (errors.log) i u nju dodajte novi red sa trenutnim vremenom i opisom pogreške. 

Uputstva:

        • Za zapis u datoteku koristite standardnu klasu ofstream (#include <fstream>). Koristite konstruktor sa nazivom datoteke i modom otvaranja std::ofstream os("errors.log", std::ios_base::out | std::ios_base::app); i operatorom << za zapisivanje u os.
        • Standarni stream za unos (cin) ima metodu fail() za provjeru pogreške.
        • Pomoć za ispis vremena: https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm.

Primjer ispisa:

        2-5
        2-5=-3
        3*2
        3*2=6
        3%3

Primjer datoteke errors.log:

        Mon May 17 15:25:43 2021
        divide by zero
        Mon May 17 15:25:51 2021
        divide by zero
        Mon May 17 15:27:40 2021
        invalid operation
        Mon May 17 15:28:15 2021
        not a number
        
