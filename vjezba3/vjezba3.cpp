#include <iostream>
#include <cmath>
#include <ctime>
#include <random>
using namespace std;
class vektor{
    public:
    double *elementi;
    int loglen, fizlen;

    void vector_push_back(int len) {
        cin >> this->elementi[len];
        this->loglen++;
    }
    double vector_new() {
        loglen = 1;
        fizlen = 0;
        elementi = new double;
        if (this->loglen==this->fizlen){
            vector_push_back (loglen);
            elementi = new double[fizlen * 2];
        }
    }
    void vector_delete() {
        for (int i = 0; i < this->loglen; i++) {
            this->elementi[i] = 0;
        }
        delete[] this->elementi;
    }

    void vector_pop_back() {
        double* temp=new double [this->loglen-1];
        for (int i=0;i<this->loglen;i++)
            temp[i]=this->elementi[i];
        delete [] this->elementi;
        this->elementi=temp;
        this->loglen-=1;
    }
    double vector_front() {
        return this->elementi[0];
    }
    double vector_back() {
        return this->elementi[this->loglen - 1];
    }
    double vector_size() {
        return this->loglen;
    }
};

class ptup{
public:
    double x, y, z;
    void postavi(const double x, const double y, const double z) {
        this->x = 0, this->y = 0, this->z = 0;
        if (x!=0 || y!=0 || z!=0)
        this->x = x, this->y = y, this->z = z;
    }
    void postavi_random(int min, int max) {
        srand(time(NULL));
        this->x = min + rand() % (max - min + 1);
        this->y = min + rand() % (max - min + 1);
        this->z = min + rand() % (max - min + 1);
    }
    void dohvati_vrijednosti(ptup tocka, double &x, double &y, double &z) {
        x = tocka.x;
        y = tocka.y;
        z = tocka.z;
    }
    double udaljenost2d(ptup tocka1, ptup tocka2) {
        double udaljenost1, udaljenost2, len;
        double vecix = tocka1.x >= tocka2.x ? tocka1.x : tocka2.x;
        double manjix = tocka1.x <= tocka2.x ? tocka1.x : tocka2.x;
        double veciy = tocka1.y >= tocka2.y ? tocka1.y : tocka2.y;
        double manjiy = tocka1.y <= tocka2.y ? tocka1.y : tocka2.y;
        udaljenost1 = abs(vecix - manjix);
        udaljenost2 = abs(veciy - manjiy);
        len = sqrt((udaljenost1 * udaljenost1) + (udaljenost2 * udaljenost2));
        return len;
    }
    double udaljenost3d(ptup tocka1, ptup tocka2) {
        double udaljenost1, udaljenost2, udaljenost3, len;
        double vecix = tocka1.x >= tocka2.x ? tocka1.x : tocka2.x;
        double manjix = tocka1.x <= tocka2.x ? tocka1.x : tocka2.x;
        double veciy = tocka1.y >= tocka2.y ? tocka1.y : tocka2.y;
        double manjiy = tocka1.y <= tocka2.y ? tocka1.y : tocka2.y;
        double veciz = tocka1.z >= tocka2.z ? tocka1.z : tocka2.z;
        double manjiz = tocka1.z <= tocka2.z ? tocka1.z : tocka2.z;
        udaljenost1 = abs(vecix - manjix);
        udaljenost2 = abs(veciy - manjiy);
        udaljenost3 = abs(veciz - manjiz);
        len = sqrt((udaljenost1 * udaljenost1) + (udaljenost2 * udaljenost2) + (udaljenost3 * udaljenost3));
        return len;
    }
};
class oruzje{
    public:
        const int broj_metaka = 30;
        int trenutni_broj_metaka = broj_metaka;
        void reload() {
            this->trenutni_broj_metaka = this->broj_metaka;
        }
        ptup pucaj() {
            srand(time(NULL));
            ptup hitshot;
            this->trenutni_broj_metaka--;
            hitshot.postavi_random(1,360);
            return hitshot;
        }
    };
class meta {
public:
    ptup donja_lijeva;
    ptup gornja_desna;
    int hitbox(ptup hitshot)
    {
        if ((hitshot.x > donja_lijeva.x && hitshot.y > donja_lijeva.y) && (hitshot.x < gornja_desna.x && hitshot.y < gornja_desna.y))
            return 1;
        return 0;
    }
};

int main(){
    srand(time(NULL));
    int min = -10, max = 10;
    int mmin = 20, mmax = 30;
    ptup tocka1,tocka2;
    tocka1.postavi_random(min, max);
    tocka2.postavi_random(mmin, mmax);
    cout << "Koordinate su\tX:" << tocka1.x << "\tY:" << tocka1.y << "\tZ:" << tocka1.z << endl;
    cout << "Koordinate su\tX:" << tocka2.x << "\tY:" << tocka2.y << "\tZ:" << tocka2.z << endl;
    cout << "\nUdaljenost izmedu tocki je:" << tocka1.udaljenost3d(tocka1, tocka2) << endl;
    meta rucna, automatska;
    rucna.donja_lijeva.x=10, rucna.donja_lijeva.y=15;
    rucna.gornja_desna.x=300, rucna.gornja_desna.y=300;
    automatska.gornja_desna.postavi_random(1, 360);
    automatska.donja_lijeva.postavi_random(1, 360);
    oruzje weapon;
    int hits1=0, hits2=0;
    while (weapon.trenutni_broj_metaka>1){
        weapon.pucaj();
        if (rucna.hitbox(weapon.pucaj())==1)
            hits1++;
        if (automatska.hitbox(weapon.pucaj())==1)
            hits2++;
    }
    cout << "Prva meta je pogodena:" << hits1 << "puta"<<endl;
    cout << "Druga meta je pogodena:" << hits2 << "puta" << endl;
    return 0;
}
