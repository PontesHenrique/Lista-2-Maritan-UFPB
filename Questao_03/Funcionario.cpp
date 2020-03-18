#include "Funcionario.h"

using namespace std;

Funcionario::Funcionario(){
    nome = " ";
    matricula = 0;
}

void Funcionario::setNome(std::string nome){
    this->nome = nome;
}

void Funcionario::setMatricula(int matricula){
    if (matricula > 0)
        this->matricula = matricula;
    else
        this->matricula = 0;
    
}

std::string Funcionario::getNome(){
    return nome;
}

int Funcionario::getMatricula(){
    return matricula;
}
