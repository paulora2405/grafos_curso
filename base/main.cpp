#include <iostream>
#include <string.h>
#include <list>

#include "Disciplina.hpp"
#include "Pessoa.hpp"

int main(){
	Pessoa p1{"João"};
	Pessoa p2{"Maria"};

	Disciplina d{"C++"};
	d.setProfessor(&p1);

	const Pessoa* ptr{d.getProfessor()};

	std::cout << ptr->getNome() << std::endl;

	return 0;
}
