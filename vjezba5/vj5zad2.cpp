#pragma once //REMOVE IF NEEDED
#include "vj5zad2.h"

Japanez::Japanez(Human_Player p,PC_Player c){
    igrac_covjek=&p;
    igrac_pc=&c;

}
void Japanez::start(){
	while (!stop())	{
        igrac_covjek->hand();
        igrac_pc->pc_hand();
		get_result();
		print_result();
        reset();
	}
}
bool Japanez::stop(){
	string res;
	cout << "play y/n" << endl;
	cin >> res;
	return res == "n";
}
void Japanez::get_result(){
	if (igrac_covjek->zbroj_ruke == igrac_pc->zbroj_komp)
		player_win = true;
	else
		pc_win = true;
}
void Japanez::print_result () const {
     if (player_win){
		cout << "\n\t\tPlayer wins "<<igrac_covjek->getplayername()<<" won "<<endl;
        cout<<endl<<endl;}
	else if (pc_win){
		cout << "\n\t\tPC wins"<<endl;
        cout <<endl;}
	cout <<"Player "<<igrac_covjek->getplayername()<<" points: "<<igrac_covjek->zbroj_ruke<<endl;
	cout <<"Computer points: "<<igrac_pc->zbroj_komp<<endl;
}
void Japanez::reset(){	
	igrac_covjek->zbroj_ruke=0;
    igrac_pc->zbroj_komp=0;
	player_win = false;
	pc_win = false;
}
Human_Player::Human_Player(string name){ playername = name;}
void Human_Player::hand(){
    int unos, zbroj_kovanica=0;
    for(int i = 0; i < 3 ; i++){
    cout<<"Insert nickle value:"<<endl;
    cin>>unos;
        if(unos == 1){
            zbroj_kovanica += 1;
        }
        else if(unos == 2){
            zbroj_kovanica += 2;
        }
        else if(unos == 5){
            zbroj_kovanica += 5;
        }
        else if(unos == 0){
            zbroj_kovanica += 0;
        }
        else{--i;}
    }
    zbroj_ruke=zbroj_kovanica;
}
void PC_Player::pc_hand(){zbroj_komp=rand()%8;}
string Human_Player::getplayername(){ return playername;}
Human_Player::~Human_Player(){;}

int main(){
    PC_Player pc;
	string n;
    cout<<"Your username:"<<endl;
    cin>>n;
	Human_Player igrac(n);
	Japanez japanez(igrac,pc);
	japanez.start();
    return 0;
}