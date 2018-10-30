#include <iostream>
#include "jogador.h"
#include "jogo.h"

int main(int argc, char const *argv[])
{
	Jogo game;
	game.addJogador(new Jogador("Bolsonaro"));
	game.addJogador(new Jogador("Marina"));
	game.addJogador(new Jogador("Meirelles"));
	// game.addJogador(new Jogador("Ciro"));
	// game.addJogador(new Jogador("Haddad"));
	game.run();
	return 0;
}