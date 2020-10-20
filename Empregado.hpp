#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>
#define HORAPADRAO 8

class Empregado {

public:
  std::string nome; 
  double salarioHora;

  Empregado(std::string nome_, double salarioHora_) : nome(nome_), salarioHora(salarioHora_) {
    nome_ = nome;
    salarioHora = salarioHora_;
  }
  ~Empregado();
  // Métodos
  
  double pagamentoMes(double horasTrabalhadas) {
    double t = horasTrabalhadas;
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > HORAPADRAO) {
        double x = horasTrabalhadas - HORAPADRAO;
        t += x / 2;
      }
	  return t * salarioHora;
  }

  virtual void printDados(int horasTrab){ 
    // imprime também a quota de vendas ou projetos a depender da classe
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Salario Mes: " << pagamentoMes(horasTrab) << std::endl;
    std::cout << std::endl;
  }  
	
};

#endif