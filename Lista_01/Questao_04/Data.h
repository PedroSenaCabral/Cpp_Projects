#ifndef DATA_H_
#define DATA_H_

#include <string>
#include <ctime>
using std::string;

class Data{
private:
	int m_dia;
	int m_mes;
	int m_ano;
public:
	Data(int dia_, int mes_, int ano_);
	Data();
	~Data();
	int getDia();
	int getMes();
	int getAno();
	void proximoDia();


	friend std::ostream& operator<< (std::ostream &o, Data & D);
};

#endif