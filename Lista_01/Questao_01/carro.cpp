#include <iostream>
#include "carro.h"

using namespace std;
using std::string;


Carro::Carro(string modelo_, int ano_, int tanque_, int consumo_)
			:m_modelo(modelo_), m_ano(ano_), m_tanque(tanque_)
			 ,m_consumo(consumo_), m_qtdeCombustivel(0), m_distancia(0)
			 ,m_autonomia(0){}

Carro::~Carro(){}

void Carro::mover(float distancia_){
	if(this->getQtdeCombustivel() <= 1){
		cout<<"Combustivel insuficiente para mover."<<endl;
	}
	else{
		m_distancia += distancia_;
		m_qtdeCombustivel -= (distancia_/m_consumo);
		m_autonomia = (m_qtdeCombustivel - 1)*m_consumo; 
	}
}

void Carro::abastecer(float qtdeCombustivel_){
	m_qtdeCombustivel += qtdeCombustivel_;
	m_autonomia = (m_qtdeCombustivel - 1)*m_consumo; 
}

string Carro::getModelo(){
	return m_modelo;
}

int Carro::getAno(){
	return m_ano;
}
int   Carro::getTanque(){
	return m_tanque;
}

float Carro::getConsumo(){
	return m_consumo;
}	

float Carro::getQtdeCombustivel(){
	return m_qtdeCombustivel;
}

float Carro::getDistanciaPercorrida(){
	return m_distancia;
}

float Carro::getAutonomia(){
	return m_autonomia;
}

std::ostream& operator<< (std::ostream &o, Carro  & C){
		o<<"Foi criado um "<<C.getModelo()<<", ano "<<C.getAno()<<". Suporta "<<C.getTanque()<<" litros e consome "<<C.getConsumo()<<" km/L"<<endl;
		// o<<C->getDistanciaPercorrida()<<endl;
		// o<<C->getQtdeCombustivel()<<endl;
		// o<<C->getAutonomia()<<endl;
	return o;
}