#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

#define MAX_LIVROS 3
#include "Livro.h"
#include <string>
#include <vector>

class Biblioteca{
private:
	std::vector<Livro*> m_livros;
	int m_total_livros;
public:
	Biblioteca();
	~Biblioteca();
	void insereLivro(Livro * livro_);
	void buscaLivroNome(string titulo_);
	void buscaLivroISBN(string isbn_);	
	void verificaLivro(string titulo_);

};
#endif