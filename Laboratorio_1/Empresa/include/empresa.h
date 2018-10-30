#ifndef EMPRESA_H_
#define EMPRESA_H_

#define MAX_FUNCIONARIOS 10
#include "funcionario.h"
#include <string>
#include <iostream>

class Empresa
{
private:
	std::string		m_nome_empresa;
	std::string		m_cnpj_empresa;
	Funcionario 	* m_lista_de_funcionario[MAX_FUNCIONARIOS];
	int 			m_total_funcionarios;
	float 			m_aumento_salarial;
	int 			m_valor_aumento;
public:
	Empresa(){}
	Empresa(std::string nome_empresa_,std::string cnpj_empresa_);
	~Empresa();

	void addFuncionario(Funcionario * funcionario_);

	bool verificarFuncionario();

	int getTotal_Funcionarios();

	std::string getNome_empresa();

	void Aumento_Salarial(Funcionario * funcionario_, float aumento_salarial_);

	void imprimeDadosEmpresa();
};
#endif