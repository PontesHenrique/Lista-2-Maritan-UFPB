#include "Conta.h"

using namespace std;

Conta::Conta(){
    nomeCliente = " ";
    salarioMensal = saldo = limite = numeroConta = 0;
}

Conta::~Conta(){
    //destroi
}

void Conta::setNomeCliente(std::string nomeCliente){
    this->nomeCliente = nomeCliente;
}

void Conta::setSalarioMensal(double salarioMensal){
    if(salarioMensal > 0)
        this->salarioMensal = salarioMensal;
    else
        this->salarioMensal = 0;
}

void Conta::setSaldo(double saldo){
    if(saldo > 0)
        this->saldo = saldo;
    else
        this->saldo = 0;
}

void Conta::setLimite(double limite){
    if(limite > 0)
        this->limite = limite;
    else
        this->limite = 0;
}

void Conta::setNumeroConta(int numeroConta){
    if(numeroConta > 0)
        this->numeroConta = numeroConta;
    else
        this->numeroConta = 0;
}

std::string Conta::getNomeCliente(){
    return nomeCliente;
}

double Conta::getSalarioMensal(){
    return salarioMensal;
}

double Conta::getSaldo(){
    return saldo;
}

double Conta::getLimite(){
    return limite;
}

int Conta::getNumeroConta(){
    return numeroConta;
}

void Conta::Sacar(double valor){
    if(saldo >= valor){
        saldo -= valor;
    }else{
        throw SaldoNaoDisponivelException();
    }
    //exception
}

void Conta::Depositar(double valor){
    if(valor > 0){
        saldo += valor;
    }
    //exception
}

void Conta::DefinirLimite(){
    limite = salarioMensal * 2;
}