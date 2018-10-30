#include <iostream>
#include "funcionario.h"

using namespace std;

//inicializaçao de funcionario
Funcionario::Funcionario(std::string nome_funcionario_,
	int id_funcionario_, float salario_funcionario_):
	m_nome_funcionario(nome_funcionario_),
	m_id_funcionario(id_funcionario_),
	m_salario_funcionario(salario_funcionario_){}

Funcionario::~Funcionario(){}
//metodo para pegar nome do funcionario
std::string Funcionario::getNome_Funcionario(){
	return m_nome_funcionario;
}
//metodo para pegar id do funcionario
int Funcionario::getId_Funcionario(){
	return m_id_funcionario;
}
//metodo para pegar salario do funcionario
float Funcionario::getSalario_Funcionario(){
	return m_salario_funcionario;
}

void Funcionario::setSalario_Funcionario(float salario_funcionario_){
	salario_funcionario_ = m_salario_funcionario;
}

std::ostream& operator<< (std::ostream &o, Funcionario  * F){
		o<<"NOME   :"<<F->getNome_Funcionario()<<endl;
		o<<"ID     :"<<F->getId_Funcionario()<<endl;
		o<<"SALARIO(R$):"<<F->getSalario_Funcionario()<<""<<endl;
		o<<endl;
	return o;
}