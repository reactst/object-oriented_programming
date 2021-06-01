#include <iostream>
#include <iterator>
#include <cmath>
using namespace std;
struct pravokutnik{
    int x,y,s,v;
};
struct kruznica{
    double radius;
    int srediste[2];
};
struct vektor{
    int* niz;
    int curlen,loglen;
};

int prvi (int* niz,int & min, int & max){
    min=niz[0],max=niz[0];
    for (int i=0;i<10;i++){
        if (niz[i]<min)
        min=niz[i];
        if (niz[i]>max)
        max=niz[i];
    }
}

int drugi (pravokutnik* rect,int brrect, const kruznica circ){
    double circ_x=circ.srediste[0];
    double circ_y=circ.srediste[1];
    double lenx, leny, len, sect_counter=0;
    for (int i=0;i<=brrect;i++){
        // if (circ.srediste[0]<rect[i].x) 
        // circ_x=rect[i].x;
        // else if (circ.srediste[0]>rect[i].x+rect[i].s)
        // circ_x=rect[i].x+rect[i].s;
        circ_x = rect[i].x > circ.srediste[0] ? rect[i].x : rect[i].x + rect[i].s;
        // if (circ.srediste[1]<rect[i].y)
        // circ_y=rect[i].y;
        // else if (circ.srediste[1]>rect[i].y+rect[i].v)
        // circ_y=rect[i].y+rect[i].v;
        circ_y = circ.srediste[1] < rect[i].y ? rect[i].y : rect[i].y + rect[i].v;

        lenx=circ.srediste[0]-circ_x;
        leny=circ.srediste[1]-circ_y;
        len=sqrt((lenx*lenx)+(leny*leny));

        if (len <= circ.radius)
        sect_counter++;
    }
    return sect_counter;    
}

int treci (int *niz,const int n){
    return niz[n]+1;
}

int* cetvrti (const int n){
    int* rezultantni=new int[n];
    rezultantni[0]=rezultantni[1]=1;
    for (int i=2;i<n+1;i++){
        rezultantni[i]=rezultantni[i-1]+rezultantni[i-2];
    }
    return rezultantni;
}

int* peti (int* niz,int i){
    niz=new int[10];
    int* temp = new int [1000];
    int flag=10*2;
    if (niz==nullptr)
    return NULL;
    i=1;
    cout<<"Unesite 0. element: ";
    cin>>niz[0];
    for (i;i<flag;i++){
        if (niz[i-1]==0)
        break;
        cout<<"Unesite "<<i<<". element: ";
        cin>>niz[i];
        if (i==i-1){
            for (int j=0;j<flag;j++)
            temp[j]=niz[j];
            niz=new int [flag];
            flag*=2;
            for (int j=0;j<flag;j++)
            niz[j]=temp[j];
        }
    }
    return niz;
}
void vector_delete(vektor& niz){
    for(int i = 0; i < niz.loglen; i++){
        niz.niz[i] = 0;
    }
    delete [] niz.niz;
}
void vector_push_back(vektor& niz){
    cout<<"Za koliko ga povuc nazad: ";
    cin>>niz.niz[niz.loglen];
    niz.loglen+=1;
}
void vector_new (vektor& niz){
    int* temp;
    while (niz.loglen<3){
        vector_push_back(niz);
        if (niz.loglen==niz.curlen){
            niz.curlen*=2;
            temp=new int[niz.curlen];
            for (int i=0;i<niz.loglen;i++)
            temp[i]=niz.niz[i];
            delete[] niz.niz;
            niz.niz=temp;
            }
        }
}
void vector_pop_back (vektor& niz){
    int* temp=new int [niz.loglen-1];
    for (int i=0;i<niz.loglen;i++)
    temp[i]=niz.niz[i];
    delete [] niz.niz;
    niz.niz=temp;
    niz.loglen-=1;
}
double vector_front (vektor niz){
    return niz.niz[0];
}
double vector_back(vektor niz){
    return niz.niz[niz.loglen-1];
}
double vector_size (vektor niz){
    return niz.loglen;
}

int main (){
    pravokutnik rect_arr[3];
    rect_arr[0].s=1, rect_arr[0].v=1, rect_arr[0].x=2, rect_arr[0].y=2;
    rect_arr[1].s=9, rect_arr[1].v=7, rect_arr[1].x=4, rect_arr[1].y=6;
    rect_arr[2].s=15, rect_arr[2].v=12, rect_arr[2].x=1, rect_arr[2].y=1;
    kruznica c1;
    c1.radius=5, c1.srediste[0]=1, c1.srediste[1]=1;
    int niz[10]={0,1,2,3,4,5,55,7,8,9};
    int* nnniz;
    int petibrojac;
    int min,max;
    vektor vect;
    this->loglen=10, this->curlen=10;
    for (int i=0;i<10;i++)
    this->niz[i]=i;
    vector_new(vect);
    double vf = vector_front(vect);
    double vb = vector_back(vect);
    double vsize = vector_size(vect);
    // prvi(niz,min,max);
    // cout<<"Min je: "<<min<<"\nMax je: "<<max<<endl;      //PRVI
    // int n=10;
    // int m=4;
    // int drugirez=drugi(rect_arr,3,c1);
    // cout<<"Broj pravokutnika koji se sjeku je:"<<drugirez<<endl;
    // int treeeeci=treci(niz,m);
    // cout<<m+1<<". element: "<<treeeeci<<endl;           //TRECI
    // int* nniz=cetvrti(n);
    // for (int i=0;i<10;i++){
    //     cout<<i+1<<".clan: "<<nniz[i]<<endl;              //CETVRTI
    // }
    // nnniz=peti(nnniz,petibrojac);
    // for (int i=0;i<petibrojac;i++){
    //     cout<<i<<"Element niza:"<<nnniz[i]<<endl;
    // }
    // delete [] (nnniz);
    return 0;
}