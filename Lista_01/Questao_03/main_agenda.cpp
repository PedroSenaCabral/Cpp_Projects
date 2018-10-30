#include <iostream>
#include "Pessoa.h"
#include "Agenda.h"

using namespace std;


int main(){

Agenda Minha_Agenda;

Minha_Agenda.insereContato(new Pessoa("Jurubeba", 23, 1.40));
Minha_Agenda.insereContato(new Pessoa("Divaldison", 19, 1.25));
Minha_Agenda.insereContato(new Pessoa("Jalielto", 17, 0.98));

Minha_Agenda.imprimeContato("Jurubeba");
Minha_Agenda.removeContato("Divaldison");
// Minha_Agenda.listaContato('J');
Minha_Agenda.buscaContato("Jalielto");

 return 0;
} 