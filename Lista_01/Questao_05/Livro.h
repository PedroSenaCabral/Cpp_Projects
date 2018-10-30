#ifndef LIVRO_H_
#define LIVRO_H_

#include <string>
using std::string;

class Livro{
private:
	string m_titulo;
	string m_autor;
	int    m_edicao;
	string m_editora;
	int	   m_ano;
	string m_isbn;
public:
	Livro(string titulo_, string autor_, int edicao_, string editora_, int ano_, string isbn_);
	~Livro();
	string getTitulo();
	string getAutor();
	int getEdicao();
	string getEditora();
	int getAno();
	string getISBN();

	friend std::ostream& operator<< (std::ostream &o, Livro & L);
};

#endif