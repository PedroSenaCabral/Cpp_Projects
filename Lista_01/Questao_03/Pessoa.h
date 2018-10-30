#ifndef PESSOA_H_
#define PESSOA_H_

#include <string>
using std::string;

class Pessoa{
private:
	string m_nome;
	int m_idade;
	float m_altura;
public:
	Pessoa(string nome_, int idade_, float altura_);
	~Pessoa();
	string getNome();
	int    getIdade();
	float  getAltura();
	void imprimedados();

	friend std::ostream& operator<< (std::ostream &o, Pessoa & P);
};

#endif