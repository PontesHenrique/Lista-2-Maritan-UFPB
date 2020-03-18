#include "Assalariado.h"

using namespace std;

Assalariado::Assalariado(){
    nome = " ";
    matricula = salario = 0;
}

Assalariado::Assalariado(std::string nome, int matricula, double salario){
    setNome(nome);
    setMatricula(matricula);
    setSalario(salario);
}

void Assalariado::setSalario(double salario){
    if(salario > 0)
        this->salario = salario;
    else
        this->salario = 0;
}

double Assalariado::getSalario(){
    return salario;
}


double Assalariado::CalcularSalario(){
    return salario;
}

string Assalariado::toString(){
    stringstream resumo;

    resumo << "\nAssalariado\n" << endl
           << "Nome: " << nome << endl
           << "Matricula: " << matricula << endl
           << "Salario: " << salario << endl;

    return resumo.str();
}