#ifndef TEMPO_H_
#define TEMPO_H_

#include <iostream>

class Tempo{
private:
	int hh;
	int mm; 
	int ss;
public:
Tempo();
~Tempo();
// Le os dados do tempo a partir da entrada padrao
void lerTempo(void);
// Retorna o tempo em segundos
int converteEmSegundos(void);
// Imprime o tempo no formato HH : MM : SS e o seu total
// em segundos
void mostraTempo(void);

friend std::ostream& operator<< (std::ostream &o, Tempo & T);

friend std::istream& operator>> (std::istream &i, Tempo & T);

};

#endif