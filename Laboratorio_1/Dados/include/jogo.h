#ifndef JOGO_H
#define JOGO_H

#include <vector>
#include "jogador.h"
#include "dado.h"

#define MAX_JOGADORES 10
#define MAX_N 30

class Jogo
{
private:
	std::vector<Jogador*> m_jogadores;
	int m_total_jogadores;
	int m_rodada;
	Jogador * m_vencedor;
	Dado * m_dados[2];
	int m_total_ativos;
public:
	Jogo();
	~Jogo();
	int getTotalJogadores();
	Jogador * getVencedor();
	int getRodada();

	void addJogador(Jogador * novo);
	void imprimeVencedor();
	void run();
	bool desativaJogador();
	void defineVencedor();
	void imprimeDadosRodada();
	int  getTotalAtivos();

};
#endif
