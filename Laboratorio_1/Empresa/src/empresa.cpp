#include <iostream>
#include "empresa.h"
#include "funcionario.h"

using namespace std;


//Inicialização de Empresa
Empresa::Empresa(std::string nome_empresa_, std::string cnpj_empresa_)
:m_nome_empresa(nome_empresa_),m_cnpj_empresa(cnpj_empresa_){
	m_total_funcionarios = 0;
}

Empresa::~Empresa(){}
//Metodo de adição para funcionarios
void Empresa::addFuncionario(Funcionario * funcionario_){

	if(m_total_funcionarios < MAX_FUNCIONARIOS && verificarFuncionario() == true){
		m_lista_de_funcionario[m_total_funcionarios++] = funcionario_;
	}
	else{
		std::cerr << "Error ao criar funcionario (Already Existent)" <<endl;
	}
}

//Verificacao de funcionario caso ele ja exista na empresa 
bool Empresa::verificarFuncionario(){
	for(int i = 0; i < m_total_funcionarios; i++){
		for(int j = i+1; j < m_total_funcionarios ; j++){
			if(m_lista_de_funcionario[i]->getId_Funcionario() == m_lista_de_funcionario[j]->getId_Funcionario()){
				return false;
			}
		}
	}
	return true;
}

//metodo para pegar quantos funcionarios tem na empresa
int Empresa::getTotal_Funcionarios(){
	return m_total_funcionarios;
}
//metodo para pegar nome da empresa
std::string Empresa::getNome_empresa(){
	return m_nome_empresa;
}
//metodo para aumentar o salario de todos os funcionarios
void Empresa::Aumento_Salarial(Funcionario * funcionario_, float aumento_salarial_){
	for(int i = 0; i < m_total_funcionarios; i++){
		m_aumento_salarial = m_lista_de_funcionario[i]->getSalario_Funcionario();
		m_lista_de_funcionario[i]->setSalario_Funcionario(m_aumento_salarial + (m_aumento_salarial * (m_valor_aumento/100)));
	}
}
//Sobrecarga Ostream para imprimir dados dos funcionarios

void Empresa::imprimeDadosEmpresa(){
	cout<<"Empresa: "<<m_nome_empresa<<endl;
	cout<<"CNPJ: "<<m_cnpj_empresa<<endl;
	for (int i = 0; i < m_total_funcionarios; i++)
	{
		cout<<m_lista_de_funcionario[i];
	}
	cout<<endl;
}