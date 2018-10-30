#ifndef AGENDA_H_
#define AGENDA_H_

#define MAX_CONTATOS 100
#include "Pessoa.h"
#include <string>
#include <vector>
#include <iostream>


class Agenda{
private:
	std::vector<Pessoa*> m_contatos;
	//Pessoa * m_contatos [MAX_CONTATOS];
	int m_total_contatos;
public:
	Agenda();
	~Agenda();
	void insereContato(Pessoa * contato_);
	void removeContato(string nome_);
	void buscaContato(string nome_);
	// void listaContato(char letra = '');
	void imprimeContato(string nome_);
};
#endif