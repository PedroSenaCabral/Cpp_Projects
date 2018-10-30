#include <iostream>
#include <iomanip>
#include <string>
#include "tempo.h"

using namespace std;

Tempo::Tempo(){}

Tempo::~Tempo(){}

void Tempo::lerTempo(void){
	cout<<"Digite a hora os minutos e os segundos (HH:MM:SS)"<<endl;
	cin>>hh;
	cin.ignore();
	cin>>mm;
	cin.ignore();
	cin>>ss;
	cout<<endl;
}
// Retorna o tempo em segundos
int Tempo::converteEmSegundos(void){
	int segundos = (hh*3600)+(mm*60)+ss;
	return segundos;
}
// Imprime o tempo no formato HH : MM : SS e o seu total
// em segundos
void Tempo::mostraTempo(void){
	cout<<"Horas: "<<hh<<":"<<mm<<":"<<ss<<endl;
	cout<<"Tempo em segundos: "<<converteEmSegundos()<<endl;
} 