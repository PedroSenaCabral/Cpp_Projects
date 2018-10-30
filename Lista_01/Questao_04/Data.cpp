#include <iostream>
#include "Data.h"

using namespace std;
using std::string;


Data::Data(int dia_, int mes_, int ano_)
	:m_dia(dia_), m_mes(mes_), m_ano(ano_){}

//Data::Data():m_dia(int tm_mday), m_mes(int tm_mon), m_ano(int tm_year){}

Data::~Data(){

}

int Data::getDia(){
	return m_dia;
}

int Data::getMes(){
	return m_mes;
}

int Data::getAno(){
	return m_ano;
}

void Data::proximoDia(){
	if(m_dia < 31 && m_mes < 12){	
		m_dia += 01;
	}
	else if (m_dia == 31 && m_mes <12 ){
		m_dia = 01;
		m_mes += 01;
	}
	else if (m_dia == 31 && m_mes == 12 ){
		m_dia = 01;
		m_mes = 01;
		m_ano += 01;
	}
}

std::ostream& operator<< (std::ostream &o, Data  & D){
		o<<D.getDia()<<"/ "<<D.getMes()<<"/ "<<D.getAno()<<endl;
	return o;
}

