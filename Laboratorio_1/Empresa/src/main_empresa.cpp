#include <iostream>
#include "funcionario.h"
#include "empresa.h"

#define MAX_EMPRESAS 2

int main(){
	Empresa empresas[MAX_EMPRESAS];

	empresas[0] = Empresa("J&C LTDA","001.052.043-34") ;
	empresas[0].addFuncionario(new Funcionario("Jurubeba", 01, 200.00));
	empresas[0].addFuncionario(new Funcionario("Jaburu", 02, 250.24));
	empresas[0].addFuncionario(new Funcionario("Jeicivelton", 03, 230.00));
	empresas[0].addFuncionario(new Funcionario("Janinara", 04, 300.00));
	empresas[0].addFuncionario(new Funcionario("Jaldira", 05, 400.50));

	empresas[1] = Empresa("CHAMIRRANHA LTDA","001.052.043-35");
	empresas[1].addFuncionario(new Funcionario("Jacilene", 01, 200.00));
	empresas[1].addFuncionario(new Funcionario("Estelson", 02, 250.24));
	empresas[1].addFuncionario(new Funcionario("Claudiene", 03, 230.00));
	empresas[1].addFuncionario(new Funcionario("Jussinara", 04, 300.00));
	empresas[1].addFuncionario(new Funcionario("Aldoniro", 05, 400.50));
	empresas[1].addFuncionario(new Funcionario("Jurema", 06, 500.50));
	
	for(int i(0); i < MAX_EMPRESAS; ++i){
		empresas[i].imprimeDadosEmpresa();
	}

	std::cout<<"Media de funcionarios por empresa: ";
	std::cout << empresas[0].getTotal_Funcionarios() << std::endl;
	
	return 0;	
}