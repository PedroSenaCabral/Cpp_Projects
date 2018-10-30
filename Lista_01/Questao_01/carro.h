#ifndef CARRO_H_
#define CARRO_H_

#include <iostream>
#include <string>
using std::string;

class Carro{
private:
	string m_modelo;
	int m_ano;
	int m_tanque;
	int m_consumo;
	float m_qtdeCombustivel;
	float m_distancia;
	float m_autonomia;
public:
	Carro(string modelo_, int ano_, int tanque_, int consumo_);
	~Carro();
	void mover(float distancia_);
	void abastecer(float qtdeCombustivel_);
	string getModelo();
	int   getAno();
	int   getTanque();
	float getConsumo();	
	float getQtdeCombustivel();
	float getDistanciaPercorrida();
	float getAutonomia();

	friend std::ostream& operator<< (std::ostream &o, Carro  & C);
};
#endif