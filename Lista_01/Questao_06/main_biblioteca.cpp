#include <iostream>
#include "Livro.h"
#include "Biblioteca.h"

int main(){

Biblioteca BCZM;

BCZM.insereLivro(new Livro("Alo pep moreno", "Moreno PEP" , 4, "PEP M. Producoes", 1964, "999-0-8000-2323-1"));
BCZM.insereLivro(new Livro("Alo pep moreno 2", "Moreno PEP" , 5, "PEP M. Producoes", 1965, "999-0-8000-2323-2"));
BCZM.insereLivro(new Livro("Alo pep moreno 3", "Moreno PEP" , 6, "PEP M. Producoes", 1966, "999-0-8000-2323-3"));

BCZM.buscaLivroISBN("999-0-8000-2323-3");

BCZM.buscaLivroNome("Alo pep moreno");

BCZM.verificaLivro("Alo pep moreno 2");

 return 0;
}