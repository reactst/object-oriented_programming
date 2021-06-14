## Objektno programiranje

**vježba3**
## **Objekti i klase**

1. Definirati klasu koja predstavlja vektor. Klasa se sastoji od niza double elemenata, logičke i fizičke veličine niza. Fizička veličina je inicijalno init, a kada se ta veličina napuni vrijednostima, alocira se duplo. Napisati funkcije članove vector_new, vector_delete, vector_push_back, vector_pop_back, vector_front, vector_back i vector_size.

2. Napisati klasu za poziciju točke u prostoru koja ima tri double podatka: dužinu, širinu i visinu (x, y, z koordinate). 

Klasa ima sljedeće funkcije:

        ◦ Funkciju za postavljanje vrijednosti članova (treba imati pretpostavljene vrijednosti 0).
        
        ◦ Funkciju za postavljanje pseudorandom vrijednosti članova (granice intervala
        su parametri funkcije).
        
        ◦ Funkciju za dohvaćanje vrijednosti članova.
        
        ◦ Funkciju koja računa udaljenost do druge točke u 2D ravnini (zanemarujući z koordinatu).

        ◦ Funkciju koja računa udaljenost do druge točke u 3D prostoru. U main funkciji postavite vrijednost za dvije točke u prostoru i ispišite obe udaljenosti.

3. Napisati klasu koja predstavlja oružje. Oružje ima svoj položaj u prostoru (jedna
točka u prostoru), broj metaka koji stanu u jedno punjenje i trenutni broj metaka u punjenju. Može pucati (shoot) i ponovo se puniti (reload).

4. Napisati klasu koja predstavlja metu. Meta je oblika kvadra i zadana je donjom lijevom i gornjom desnom točkom. Ima dva stanja: pogođena i nepogođena.

5. Napisati program koji će generirati n meta i jednog pucača (oružje). Uz pretpostavku
da je položaj oružja horizontalan i da se oružje može zakretati za 360◦, izračunati koliko je meta pogođeno jednim punjenjem.

__Označite sa const funkcije i vrijednosti koje su konstantne.__