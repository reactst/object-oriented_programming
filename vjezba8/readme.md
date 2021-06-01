## Objektno programiranje
**vježba 8**
## **operatori**

1. Napišite klasu money koja sadrži privatne članove kn (broj kuna) i lp (broj lipa) tipa
int. Klasa treba imati operatore: +=, -=, +, -, << tako da sljedeći program:

        // nalazimo se u (hipotetskoj) ulozi konobara u restoranu
        // (hipotetskom) gostu treba izdati (hipotetski) racun
        int main() {
        // zadan je jednostavan cjenik
        money juha(11,30), becki(15,50), salata(10), pivo(15), babic(16,40);
        // gost je konzumirao:
        money racun = juha + becki + salata + pivo;
        // na zalost nas konobar je nepazljiv pa pivo treba stornirati
        racun -= pivo;
        // i dodati babic
        racun += babic;
        cout << racun << endl;
        }

ima ispis

    53 kuna, 20 lipa
    
2. Napišite operator za konverziju u tip double.
