#include <iostream>
#include "Livro.h"

using namespace std;
using std::string;


Livro::Livro(string titulo_, string autor_, int edicao_, string editora_, int ano_, string isbn_)
			:m_titulo(titulo_)
			,m_autor(autor_)
			,m_edicao(edicao_)
			,m_editora(editora_)
			,m_ano(ano_)
			,m_isbn(isbn_){}

Livro::~Livro(){}

string Livro::getTitulo(){
	return m_titulo;
}

string Livro::getAutor(){
	return m_autor;
}

int Livro::getEdicao(){
	return m_edicao;
}

string Livro::getEditora(){
	return m_editora;
}

int Livro::getAno(){
	return m_ano;
}	

string Livro::getISBN(){
	return m_isbn;
}

std::ostream& operator<< (std::ostream &o, Livro  & L){
		o<<"Titulo: "<<L.getTitulo()<<endl;
		o<<"Autor: "<<L.getAutor()<<endl;
		o<<"Edicao: "<<L.getEdicao()<<endl;
		o<<"Editora: "<<L.getEditora()<<endl;
		o<<"Ano: "<<L.getAno()<<endl;
		o<<"ISBN: "<<L.getISBN()<<endl;
		o<<endl;

	return o;
}

