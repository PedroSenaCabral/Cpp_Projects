#include <iostream>
#include "carro.h"

using namespace std;


int main(){

 Carro meuCarro("Fusca", 1976 , 40 , 7) ;
 cout<<meuCarro;
 meuCarro.mover(5);
 meuCarro.abastecer(35);

 cout << "Abastecido! Temos agora " << meuCarro.getQtdeCombustivel() << " litros." << endl;
 cout << "Autonomia atual de " << meuCarro.getAutonomia() << " km. " << endl ;
 
 meuCarro.mover(127.6);
 meuCarro.mover(3.2);
 
 cout << "Ja percorremos " << meuCarro.getDistanciaPercorrida() << " km " << endl;
 cout << "Ainda temos " << meuCarro.getQtdeCombustivel() << " litros ." << endl;
 cout << "Autonomia atual de " << meuCarro.getAutonomia() << " km." << endl; 

 return 0;

} 