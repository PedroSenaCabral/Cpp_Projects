#include <iostream>
#include "Agenda.h"
#include "Pessoa.h"

using namespace std;

Agenda::Agenda():m_total_contatos(0){}

Agenda::~Agenda(){}

void Agenda::insereContato(Pessoa * contato_){
	if (m_total_contatos<MAX_CONTATOS) {
		m_contatos.push_back(contato_);
		m_total_contatos++;
		cout<<"Contato de "<<contato_->getNome()<<" adicionado"<<endl;
	}else{
		cerr << "Nao foi possivel adicionar contato (Full memory)" <<endl;
	}
}

void Agenda::removeContato(string nome_){
	for(auto it (m_contatos.begin()); it != m_contatos.end(); ++it){
		if((*it)->getNome() == nome_){
			m_contatos.erase(m_contatos.begin() , it);
			cout<<"Excluindo "<<nome_<<endl;
			cout<<"Contato Excluido com sucesso"<<endl;
			break;
		}
	}
}

void Agenda::buscaContato(string nome_){	
	for(auto it (m_contatos.begin()); it != m_contatos.end(); ++it){
		if((*it)->getNome() == nome_){
			cout<<"Dados de "<<nome_<<" existem: "<<endl;
			cout<<"Nome: "<<(*it)->getNome()<<endl;
			cout<<"Idade: "<<(*it)->getIdade()<<endl;
			cout<<"Altura: "<<(*it)->getAltura()<<endl;
			break;	
		}
	}
}

// void Agenda::listaContato(char letra = ''){
// 	for(auto it (m_contatos.begin()); it != m_contatos.end(); ++it){
// 		if(letra == true && (*it)){
			
// 		}
// 		else{
// 			cerr<<"O contato nao existe"<<endl;
// 		}
// 	}
// }

void Agenda::imprimeContato(string nome_){
	for(auto it (m_contatos.begin()); it != m_contatos.end(); ++it){
		if((*it)->getNome() == nome_){
			cout<<"Dados de "<<nome_<<endl;
			cout<<"Nome: "<<(*it)->getNome()<<endl;
			cout<<"Idade: "<<(*it)->getIdade()<<endl;
			cout<<"Altura: "<<(*it)->getAltura()<<endl;
			break;
		}
		else{
			cerr<<"O contato " << nome_ <<" nao existe"<<endl;
		}
	}
}
