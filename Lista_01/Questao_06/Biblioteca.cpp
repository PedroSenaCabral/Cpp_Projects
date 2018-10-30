#include <iostream>
#include "Biblioteca.h"
#include "Livro.h"

using namespace std;

Biblioteca::Biblioteca():m_total_livros(0){}

Biblioteca::~Biblioteca(){}

void Biblioteca::insereLivro(Livro * livro_){
	if (m_total_livros<MAX_LIVROS) {
		m_livros.push_back(livro_);
		m_total_livros++;
		cout<<"Livro "<<livro_->getTitulo()<<" adicionado"<<endl;
	}else{
		cerr << "Nao foi possivel adicionar livro (Full Library)" <<endl;
	}
}

void Biblioteca::buscaLivroNome(string titulo_){	
	for(auto it (m_livros.begin()); it != m_livros.end(); ++it){
		if((*it)->getTitulo() == titulo_){
			cout<<endl;
			cout<<"Dados de "<<titulo_<<": "<<endl;
			cout<<"Titulo: "<<(*it)->getTitulo()<<endl;
			cout<<"Autor: "<<(*it)->getAutor()<<endl;
			cout<<"Edicao: "<<(*it)->getEdicao()<<endl;
			cout<<"Editora: "<<(*it)->getEditora()<<endl;
			cout<<"Ano: "<<(*it)->getAno()<<endl;
			cout<<"ISBN: "<<(*it)->getISBN()<<endl;
			break;	
		}
	}
}

void Biblioteca::buscaLivroISBN(string isbn_){	
	for(auto it (m_livros.begin()); it != m_livros.end(); ++it){
		if((*it)->getISBN() == isbn_){
			cout<<endl;
			cout<<"Dados de "<<isbn_<<": "<<endl;
			cout<<"Titulo: "<<(*it)->getTitulo()<<endl;
			cout<<"Autor: "<<(*it)->getAutor()<<endl;
			cout<<"Edicao: "<<(*it)->getEdicao()<<endl;
			cout<<"Editora: "<<(*it)->getEditora()<<endl;
			cout<<"Ano: "<<(*it)->getAno()<<endl;
			cout<<"ISBN: "<<(*it)->getISBN()<<endl;
			break;	
		}
	}	
}

void Biblioteca::verificaLivro(string titulo_){
	for(auto it (m_livros.begin()); it != m_livros.end(); ++it){
		if((*it)->getTitulo() == titulo_){
			cout<<endl;
			cout<<"Livro "<<titulo_<<" existe:"<<endl;
			cout<<"Titulo: "<<(*it)->getTitulo()<<endl;
			cout<<"Autor: "<<(*it)->getAutor()<<endl;
			cout<<"Edicao: "<<(*it)->getEdicao()<<endl;
			cout<<"Editora: "<<(*it)->getEditora()<<endl;
			cout<<"Ano: "<<(*it)->getAno()<<endl;
			cout<<"ISBN: "<<(*it)->getISBN()<<endl;
			break;
		}
		else{
			cerr<<"O livro " << titulo_ <<" nao existe"<<endl;
		}
	}
}