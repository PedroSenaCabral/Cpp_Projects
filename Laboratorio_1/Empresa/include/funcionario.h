#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_

#include <iostream>
#include <string>

class Funcionario
{
private:
	std::string		m_nome_funcionario;
	int 			m_id_funcionario;
	float 			m_salario_funcionario;	
public:
	Funcionario(std::string nome_funcionario_,
				int id_funcionario_,
				float salario_funcionario_);

	~Funcionario();

	std::string getNome_Funcionario();

	int getId_Funcionario();

	float getSalario_Funcionario();

	void setSalario_Funcionario(float salario_funcionario_);

	friend std::ostream& operator<< (std::ostream &o, Funcionario  * F);

};
#endif