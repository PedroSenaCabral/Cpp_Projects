#include <iostream>
#include "Pessoa.h"

using namespace std;
using std::string;


Pessoa::Pessoa(string nome_, int idade_, float altura_)
			:m_nome(nome_),m_idade(idade_), m_altura(altura_){}

Pessoa::~Pessoa(){}

string Pessoa::getNome(){
	return m_nome;
}

int Pessoa::getIdade(){
	return m_idade;
}

float Pessoa::getAltura(){
	return m_altura;
}

std::ostream& operator<< (std::ostream &o, Pessoa  & P){
		o<<"Nome: "<<P.getNome()<<endl;
		o<<"Idade: "<<P.getIdade()<<endl;
		o<<"Altura: "<<P.getAltura()<<endl;
		o<<endl;
	return o;
}

