#include <iostream>
#include "jogo.h"
#include "dado.h"

using namespace std;

Jogo::Jogo():
	m_total_jogadores(0),m_rodada(0),
	m_vencedor(nullptr),m_total_ativos(0){
	m_dados[0] = new Dado(6);
	m_dados[1] = new Dado(6);
}

Jogo::~Jogo(){}

int Jogo::getTotalJogadores(){
	return m_total_jogadores;
}

Jogador * Jogo::getVencedor(){
	return m_vencedor;
}

int Jogo::getRodada(){
	return m_rodada;
}

void Jogo::addJogador(Jogador * novo){
	if (m_total_jogadores<MAX_JOGADORES) {
		m_jogadores.push_back(novo);
		m_total_jogadores++;
		m_total_ativos++;
	} else {
		cerr << "Jogo lotado." << endl;
	}
}
	
void Jogo::imprimeVencedor(){
	cout << "O vencedor foi: " << m_vencedor->getNome()
		<< " com o total de pontos: " << m_vencedor->getPontos()
		<< "." << endl;
}

void Jogo::run(){
	int cont = 0;
	while (m_total_ativos>1){
		++m_rodada;
		char decisao;

		//vector<Jogador*>::iterator it;
	for(auto it  (m_jogadores.begin()); it != m_jogadores.end(); ++it){
		cout<<(*it)->getNome()<<" quer jogar ?(s/n)"<<endl;
		cin>>decisao;
			if((*it)->isAtivo() == true && decisao == 's'){
			    (*it)->jogar(*m_dados[0],*m_dados[1]);		
			}	
			if((*it)->getPontos() > MAX_N){
				cont++;
				(*it)->desativar();
				//m_jogadores.erase(it);
				//defineVencedor();
			// }		
			// if((*it)->isAtivo() == false){
			// 	(*it)->desativar();
			// 	cont ++;
			// cout<< cont;
			}

		defineVencedor();	
		}
	imprimeDadosRodada();
	if (cont >= m_total_jogadores){
		cout<<"**********Ninguem ganhou o jogo**********"<<endl;
		exit(EXIT_FAILURE);
	}	
	}
imprimeVencedor();	
}

void Jogo::defineVencedor(){
	for(auto it  (m_jogadores.begin()); it != m_jogadores.end(); ++it){
		if((*it)->getPontos() == MAX_N){
			m_vencedor = (*it);
			imprimeVencedor();
			exit(EXIT_SUCCESS);

		}
		if(this->getTotalAtivos() == 1){
			m_vencedor = (*it);
			imprimeVencedor();
			exit(EXIT_SUCCESS);

		}
		// if(this->getTotalAtivos() == 0){
		// 	cout<<"Ninguem ganhou o jogo"<<endl;
		// 	exit(EXIT_FAILURE);
		// }
	}
 }


bool Jogo::desativaJogador(){
	auto it  (m_jogadores.begin());	
	while((*it)->isAtivo() && (this->getTotalJogadores() < m_total_jogadores)){
		if((*it)->getPontos()>MAX_N){
			(*it)->desativar();
			m_total_ativos--;
			return true;
		}
	++it;
	}
	return false;	
}

void Jogo::imprimeDadosRodada(){
	cout<<"Rodada "<< m_rodada << ": ";
	for (int i = 0; i < m_total_jogadores; ++i)
	{
		// if(!m_jogadores[i]->isAtivo()){
		// 	cout << "*";
		// }
		// cout<<m_jogadores[i]->getNome()<<"("<<m_jogadores[i]->getPontos()<<") ";
		cout<<m_jogadores[i];
	}
	cout<<endl;
}

int  Jogo::getTotalAtivos(){
	return m_total_ativos;
}