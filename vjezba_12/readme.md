## Objektno programiranje
**vježba 12**
## **STL Algoritmi**
1. U datoteci wimbledon_double_faults.txt dana je statistika dvostrukih pogrešaka igračica. Na-
pišite program koji koristeći standardne algoritme:

        (a) učita sve igračice u vektor (koristite funkciju copy),
        (b) izbaci iz vektora sve koji su imale više od četiri dvosturke pogreške u meču po meču,
        (c) pronađe igračicu sa najmanje dvostrukih pogrešaka po meču i ispiše njeno ime i prezime,
        (d) sortira uzlazno po broju dvostrukih pogrešaka po meču,
        (e) ispiše sortirane u obliku "redni_broj ime prezime ščbroj_dvostrukih_pogreaka_po_meu" .

2. Napišite klasu array tako da sljedeći program ispisuje sve elemente polja. Klasa ima polje
kao privatni član. U konstruktoru se svi elementi postavljaju na zadanu vrijednost koristeći
standardnu funkciju fill.

        int main(){
        ostream_iterator<short> os(std::cout, " ");
        array<short, 10> a(4);
        a[0] = a[2] += 5;
        copy(a.begin(), a.end(), os);
        }

3. Napisati funkciju koja iz datoteke čita prirodne brojeve. Koristeći standardne algoritme:

        • napuni vektor brojevima iz datoteke,
        • baci iznimku ako broj nije prirodan,
        • prebroji sve brojeve veće od 100,
        • iz vektora izbaci brojeve manje od 100,
        • preostale brojeve sortira silazno.**
