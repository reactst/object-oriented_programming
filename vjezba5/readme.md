 ## Objektno programiranje

**vježba 5**
 
## **Nasljeđivanje**

1. Definirajte klasu Book čiji su članovi autor, naslov knjige i godina izdanja. 
Iz klase Book izvedite dvije klase: HardCopyBook i EBook. 
Papirnata knjiga ima još i broj stranica, a elektronska knjiga ime datoteke i veličinu u MB.

Definirajte klasu Library koja ima niz pointera na Book i nekoliko metoda:

    · metodu koja vraća sve naslove nekog autora,
    · metodu koja vraća ukupnu veličinu u MB za sve knjige nekog autora,
    · metodu koja za neki dio naslova (jedna ili više riječi) vraća sve knjige koje sadrže te riječi.

U funkciji main testirajte metode klase Library. 
Unos knjiga možete realizirati čitanjem iz datoteke (možete koristiti c funkcije iz <cstdio>).

----

2. Napravite igru Japaneža za više igrača. U igri svaki igrač ima tri kovanice, od 1, 2 i 5
kuna. U svakoj ruci odabire od nula do tri kovanice i pogađa zbroj odabranih kovanica u
rukama svih igrača. Igrači koji pogode zbroj dobiju po jedan bod. Igrač može biti čovjek
ili kompjuter. Igra se igra dok jedan od igrača ne postigne unaprijed zadani broj bodova.

Klase koje trebate definirati:

    · Game, zadužena za logiku igre
    · Player, predstavlja igrača. Iz te klase izvedite dvije klase: HumanPlayer i ComputerPlayer.

----

3. Ako vam je prethodni zadatak prekompliciran, pokušajte napraviti igru Par-dišpar (bim bam bom).

__Napomena: Svaku klasu stavite u posebne datoteke i to tako da definicije klasa stavljate u .h ili .hpp datoteku, a implementaciju klase u .cpp datoteku. Pomoć za to imate u dokumentu na moodlu (”Kako razdvojiti klase u posebne datoteke”) koji je pripremio prof. Duraković.__
