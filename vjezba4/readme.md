## Objektno programiranje

**vježba 4**

## **Konstruktori i destruktori**

Napravite odvojene hpp i cpp datoteke za svaki zadatak. U hpp datotekama su definicije klase
(zaglavlja), a u cpp datotekama implementacija.
Sve podatkovne članove (data members) napravite privatne.

1. Klasi vektor iz prošle vježbe dodajte konstruktore i destruktore.

        · default konstruktor kreira prazan vektor, bez elemenata.
        · konstruktor s dva parametra n i k, kreira vektor veličine n i puni ga elementima k. Ako k nije naveden, puni ga nulama.
        · copy konstruktor
        · destruktor

U konstruktorima i destruktorima ispišite poruke kako bi vidjeli u kojem poredku se pozivaju.
Napišite main funkciju u kojoj ćete testirati slučajeve u kojima se pozivaju konstruktori i destruktor.

2. Definirajte klasu Board koja će služiti kao okvir za iscrtavanje znakova. Board je
matrica čije se dimenzije zadaju u konstruktoru, a za koju se memorija alocira na heapu.
Board ima rub koji se sastoji od nekog znaka koji je određen u konstruktoru.

        · Napišite defaultni konstruktor, copy konstruktor, konstruktor s argumentima i destruktor.
        · Definirajte strukturu Point koja ima dva člana x i y tipa double, gdje su x i y vrijednosti manje od dimenzije matrice.
        · Napišite member funkciju draw_char koja za točku p i znak ch postavlja znak ch na odgovarajućem mjestu u matrici (x-koordinata odgovara retku matrice, a y-koordinata stupcu) Ako koordinate točke p nisu cjelobrojne, zaokružite ih na najbližu cjelobrojnu vrijednost.
        · Napišite member funkciju draw_up_line koja počevši od točke p postavlja znak ch na svim poljima koja predstavljaju okomitu liniju prema gore.
        · Napišite member funkciju draw_line koja za dvije točke p1 i p2 postavlja znak ch na svim poljima koje predstavljaju liniju između te dvije točke.
        · Napišite member funkciju koja iscrtava trenutno stanje Boarda.

