#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

public:
	double quotaMensalVendas; 

	Vendedor(std::string nome_, double salarioHora_, double quotaMensalVendas_) : Empregado(nome_,salarioHora_), 
	quotaMensalVendas(quotaMensalVendas_)   {
    	nome_ = nome;
    	salarioHora = salarioHora_;
		quotaMensalVendas = quotaMensalVendas_;
    }	  
	~Vendedor();
	
	double quotaTotalAnual() {
		return quotaMensalVendas * 12;
	}

	virtual void printDados(int horasTrab) override{ 
    	std::cout << "Nome: " << nome << std::endl;
    	std::cout << "Salario Mes: " << pagamentoMes(horasTrab) << std::endl;
		std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
    	std::cout << std::endl;
  	}
	
};

