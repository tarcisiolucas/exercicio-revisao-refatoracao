#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

public:
  int projetos;

  Engenheiro(std::string nome_, double salarioHora_, double projetos_) : Empregado(nome_,salarioHora_), 
	projetos(projetos_)   {
    	nome_ = nome;
    	salarioHora = salarioHora_;
		  projetos = projetos_;
  }
  ~Engenheiro();

  virtual void printDados(int horasTrab) override{ 
    	std::cout << "Nome: " << nome << std::endl;
    	std::cout << "Salario Mes: " << pagamentoMes(horasTrab) << std::endl;
		  std::cout << "Projetos: " << projetos << std::endl;
    	std::cout << std::endl;
  }
};