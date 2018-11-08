#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<cstring>
using namespace std;

void gg_easy();
void gg();
void achei_facil();
void mais_ou_menos();
void ralado();

void fases(){
int f;

    system("cls");
    cout<<"                    "<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"                    "<<"|                                BATALHA NAVAL                                    |"<<endl;
    cout<<"                    "<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"                    "<<"|                              ESCOLHA UMA FASE:                                  |"<<endl;
    cout<<"                    "<<"|                                  1 - GG Easy                                    |"<<endl;
    cout<<"                    "<<"|                                  2 - GG                                         |"<<endl;
    cout<<"                    "<<"|                                  3 - Achei Facil                                |"<<endl;
    cout<<"                    "<<"|                                  4 - Mais ou menos                              |"<<endl;
    cout<<"                    "<<"|                                  5 - Ralado                                     |"<<endl;
    cout<<"                    "<<"-----------------------------------------------------------------------------------"<<endl;
    cin>>f;
     switch(f){
        case 1:
            gg_easy();
                break;

        case 2:
            gg();
                break;

        case 3:
            achei_facil();
                break;

        case 4:
            mais_ou_menos();
                break;

        case 5:
            ralado();
                break;
}
}
void regras(){

	cout<<endl;
	cout<<"1 - Voce jogara contra o computador, escolha letras maiusculas entra A e O, relacionadas à números de 1 a 15";
	cout<<endl;
	cout<<"2 - Devem-se escolher coordenadas para ataque à esquadra inimiga, seus acertos são mostrados e quem afundar os barcos primeiro ganha!";
	cout<<endl;
	cout<<"LEGENDA DE MARCAÇÕES DO TABULEIRO:"<<endl;
	cout<<"'X': Significa que uma parte de um návio foi afundada naquela área.";
	cout<<"'^': Significa que aquela área já foi atingida e só continha água.";
    cout<<endl;
    cout<<endl;
	cout<<"                                    BOM JOGO";
    cout<<"Deseja voltar ao menu inicial?"<<endl;

}
void creditos(){
    cout<<"                    "<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"                    "<<"|                Projeto Semestral de Linguagem de Programacao                    |"<<endl;
    cout<<"                    "<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"                    "<<"|                               Batalha Naval                                     |"<<endl;
    cout<<"                    "<<"|                              Desenvolvido por:                                  |"<<endl;
    cout<<"                    "<<"|                        Emily Bezerra e Jeferson gaiato                          |"<<endl;
    cout<<"                    "<<"|                                UFRN- 2016.2                                     |"<<endl;
    cout<<"                    "<<"|---------------------------------------------------------------------------------|"<<endl;
    cout<<"                    "<<"|      Obrigado por confiar na nossa trabaho, jogue sempre, mande pros amigos     |"<<endl;
    cout<<"                    "<<"|---------------------------------------------------------------------------------|"<<endl;
}


int main(){
    int n;


    cout<<"                    "<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"                    "<<"|                                BATALHA NAVAL                                    |"<<endl;
    cout<<"                    "<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"                    "<<"|                              ESCOLHA UMA OPCAO:                                 |"<<endl;
    cout<<"                    "<<"|                                  1 - Novo Jogo                                  |"<<endl;
    cout<<"                    "<<"|                                  2 - Regras                                     |"<<endl;
    cout<<"                    "<<"|                                  3 - Creditos                                   |"<<endl;
    cout<<"                    "<<"|                                                                                 |"<<endl;
    cout<<"                    "<<"-----------------------------------------------------------------------------------"<<endl;
    cin>>n;

     switch(n){
        case 1:
            fases();
                break;

        case 2:
            regras();
                break;

        case 3:
            creditos();

        break;



}
}


void gg_easy(){
    system("cls");
     char mapa[15][15];
     int x,y;
     char a;
     int cont=0;
        for(int i = 0; i<15; i++){
            for(int j=0; j<15; j++){
                mapa[i][j]='~';
            }
        }
        for(int i = 0; i<15; i++){
                cout<<endl;
            for(int j=0; j<15; j++){
                     cout<<mapa[i][j]<<" ";
           }
        }


while(cont<8){
        cout<<endl;
        cout<<"Digite as coordenadas para ataque: "<<endl;
        cout<<"Digite a linha de 0 a 14: "<<endl;
        cin>>x;
        cout<<"Digite a coluna de 0 a 14: "<<endl;
        cin>>y;

       if(x==4 && y==7 || x==4 && y==8 || x==10 && y==7 || x==10 && y==8 || x==7 && y==6 || x==7 && y==7 || x==7 && y==8 || x==7 && y==9 ){
            system("cls");
            cout<<"Voce acertou uma embarcacao continue o ataque: "<<endl;
            cont++;
            mapa[x][y]='X';
        }
        else{
            system("cls");
            cout<<"Voce errou, jogue novamente: "<<endl;
            mapa[x][y]='^';
        }

    for(int i = 0; i<15; i++){
        cout<<endl;
            for(int j=0; j<15; j++){
                cout<<mapa[i][j]<<" ";
        }
    }
}
cout<<endl;

system("cls");

if(cont==8){
    cout<<"Parabens, voce ganhou o batalha naval!!"<<endl;
    cout<<"Deseja jogar outra fase?(s/n)"<<endl;
    cin>>a;

    if(a=='s'|| a=='S'){
        system("cls");
        fases();
    }
    else{
        system("cls");
        creditos();
    }
}
}
void gg(){
 system("cls");
     char mapa[15][15];
     int x,y;
     char a;
     int cont=0;
        for(int i = 0; i<15; i++){
            for(int j=0; j<15; j++){
                mapa[i][j]='~';
            }
        }
        for(int i = 0; i<15; i++){
                cout<<endl;
            for(int j=0; j<15; j++){
                     cout<<mapa[i][j]<<" ";
           }
        }


while(cont<8)
        cout<<endl;
        cout<<"Digite as coordenadas para ataque: "<<endl;
        cout<<"Digite a linha de 0 a 14: "<<endl;
        cin>>x;
        cout<<"Digite a coluna de 0 a 14: "<<endl;
        cin>>y;

       if(x==4 && y==7 || x==4 && y==8 || x==10 && y==7 || x==10 && y==8 || x==7 && y==6 || x==7 && y==7 || x==7 && y==8 || x==7 && y==9 ){
            system("cls");
            cout<<"Voce acertou uma embarcacao continue o ataque: "<<endl;
            cont++;
            mapa[x][y]='X';
        }
        else{
            system("cls");
            cout<<"Voce errou, jogue novamente: "<<endl;
            mapa[x][y]='^';
        }

    for(int i = 0; i<15; i++){
        cout<<endl;
            for(int j=0; j<15; j++){
                cout<<mapa[i][j]<<" ";
        }
    }
}
cout<<endl;

system("cls");

if(cont==8){
    cout<<"Parabens, voce ganhou o batalha naval!!"<<endl;
    cout<<"Deseja jogar outra fase?(s/n)"<<endl;
    cin>>a;

    if(a=='s'|| a=='S'){
        system("cls");
        fases();
    }
    else{
        system("cls");
        creditos();
    }
}

void achei_facil(){
 system("cls");
     char mapa[15][15];
     int x,y;
     char a;
     int cont=0;
        for(int i = 0; i<15; i++){
            for(int j=0; j<15; j++){
                mapa[i][j]='~';
            }
        }
        for(int i = 0; i<15; i++){
                cout<<endl;
            for(int j=0; j<15; j++){
                     cout<<mapa[i][j]<<" ";
           }
        }


while(cont<8){
        cout<<endl;
        cout<<"Digite as coordenadas para ataque: "<<endl;
        cout<<"Digite a linha de 0 a 14: "<<endl;
        cin>>x;
        cout<<"Digite a coluna de 0 a 14: "<<endl;
        cin>>y;

       if(x==4 && y==7 || x==4 && y==8 || x==10 && y==7 || x==10 && y==8 || x==7 && y==6 || x==7 && y==7 || x==7 && y==8 || x==7 && y==9 ){
            system("cls");
            cout<<"Voce acertou uma embarcacao continue o ataque: "<<endl;
            cont++;
            mapa[x][y]='X';
        }
        else{
            system("cls");
            cout<<"Voce errou, jogue novamente: "<<endl;
            mapa[x][y]='^';
        }

    for(int i = 0; i<15; i++){
        cout<<endl;
            for(int j=0; j<15; j++){
                cout<<mapa[i][j]<<" ";
        }
    }
}
cout<<endl;

system("cls");

if(cont==8){
    cout<<"Parabens, voce ganhou o batalha naval!!"<<endl;
    cout<<"Deseja jogar outra fase?(s/n)"<<endl;
    cin>>a;

    if(a=='s'|| a=='S'){
        system("cls");
        fases();
    }
    else{
        system("cls");
        creditos();
    }
}}
void mais_ou_menos(){
 system("cls");
     char mapa[15][15];
     int x,y;
     char a;
     int cont=0;
        for(int i = 0; i<15; i++){
            for(int j=0; j<15; j++){
                mapa[i][j]='~';
            }
        }
        for(int i = 0; i<15; i++){
                cout<<endl;
            for(int j=0; j<15; j++){
                     cout<<mapa[i][j]<<" ";
           }
        }


while(cont<8){
        cout<<endl;
        cout<<"Digite as coordenadas para ataque: "<<endl;
        cout<<"Digite a linha de 0 a 14: "<<endl;
        cin>>x;
        cout<<"Digite a coluna de 0 a 14: "<<endl;
        cin>>y;

       if(x==4 && y==7 || x==4 && y==8 || x==10 && y==7 || x==10 && y==8 || x==7 && y==6 || x==7 && y==7 || x==7 && y==8 || x==7 && y==9 ){
            system("cls");
            cout<<"Voce acertou uma embarcacao continue o ataque: "<<endl;
            cont++;
            mapa[x][y]='X';
        }
        else{
            system("cls");
            cout<<"Voce errou, jogue novamente: "<<endl;
            mapa[x][y]='^';
        }

    for(int i = 0; i<15; i++){
        cout<<endl;
            for(int j=0; j<15; j++){
                cout<<mapa[i][j]<<" ";
        }
    }
}
cout<<endl;

system("cls");

if(cont==8){
    cout<<"Parabens, voce ganhou o batalha naval!!"<<endl;
    cout<<"Deseja jogar outra fase?(s/n)"<<endl;
    cin>>a;

    if(a=='s'|| a=='S'){
        system("cls");
        fases();
    }
    else{
        system("cls");
        creditos();
    }
}}
void ralado(){
 system("cls");
     char mapa[15][15];
     int x,y;
     char a;
     int cont=0;
        for(int i = 0; i<15; i++){
            for(int j=0; j<15; j++){
                mapa[i][j]='~';
            }
        }
        for(int i = 0; i<15; i++){
                cout<<endl;
            for(int j=0; j<15; j++){
                     cout<<mapa[i][j]<<" ";
           }
        }


while(cont<8){
        cout<<endl;
        cout<<"Digite as coordenadas para ataque: "<<endl;
        cout<<"Digite a linha de 0 a 14: "<<endl;
        cin>>x;
        cout<<"Digite a coluna de 0 a 14: "<<endl;
        cin>>y;

       if(x==4 && y==7 || x==4 && y==8 || x==10 && y==7 || x==10 && y==8 || x==7 && y==6 || x==7 && y==7 || x==7 && y==8 || x==7 && y==9 ){
            system("cls");
            cout<<"Voce acertou uma embarcacao continue o ataque: "<<endl;
            cont++;
            mapa[x][y]='X';
        }
        else{
            system("cls");
            cout<<"Voce errou, jogue novamente: "<<endl;
            mapa[x][y]='^';
        }

    for(int i = 0; i<15; i++){
        cout<<endl;
            for(int j=0; j<15; j++){
                cout<<mapa[i][j]<<" ";
        }
    }
}
cout<<endl;

system("cls");

if(cont==8){
    cout<<"Parabens, voce ganhou o batalha naval!!"<<endl;
    cout<<"Deseja jogar outra fase?(s/n)"<<endl;
    cin>>a;

    if(a=='s'|| a=='S'){
        system("cls");
        fases();
    }
    else{
        system("cls");
        creditos();
    }
}}
