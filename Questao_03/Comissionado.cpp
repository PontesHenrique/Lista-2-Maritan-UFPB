#include "Comissionado.h"

using namespace std;

Comissionado::Comissionado(){
    nome = " ";
    matricula = salarioBase = vendasSemanais = percentualComissao = 0;
}

Comissionado::Comissionado(std::string nome, int matricula, double salarioBase, double vendasSemanais, double percentualComissao){
    setNome(nome);
    setMatricula(matricula);
    setSalarioBase(salarioBase);
    setVendasSemanais(vendasSemanais);
    setPercentualComissao(percentualComissao);
}

void Comissionado::setVendasSemanais(double vendasSemanais){
    if(vendasSemanais > 0)
        this->vendasSemanais = vendasSemanais;
    else
        this->vendasSemanais = 0;
}

void Comissionado::setPercentualComissao(double percentualComissao){
    if(percentualComissao > 0)
        this->percentualComissao = percentualComissao;
    else
        this->percentualComissao = 0;
}

void Comissionado::setSalarioBase(double salarioBase){
    if(salarioBase > 0)
        this->salarioBase = salarioBase;
    else
        this->salarioBase = 0;
}

double Comissionado::getVendasSemanais(){
    return vendasSemanais;
}

double Comissionado::getPercentualComissao(){
    return percentualComissao;
}

double Comissionado::getSalarioBase(){
    return salarioBase;
}

double Comissionado::CalcularSalario(){
    return salarioBase + (vendasSemanais * (percentualComissao/100));
}

string Comissionado::toString(){
    stringstream resumo;

    resumo << "\nComissionado\n" << endl
           << "Nome: " << nome << endl
           << "Matricula: " << matricula << endl
           << "Salario base: " << salarioBase << endl
           << "Vendas semanais: " << vendasSemanais << endl
           << "Percentual de comissao: " << percentualComissao << endl
           << "Salario mensal: " << CalcularSalario() << endl;

    return resumo.str();
}