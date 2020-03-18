#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include "iConta.h"
#include "SaldoNaoDisponivelException.h"

class Conta : public iConta
{
    public:
        Conta();
        ~Conta();
        
        void setNomeCliente(std::string nomeCliente);
        void setSalarioMensal(double salarioMensal);
        void setSaldo(double saldo);
        void setLimite(double limite);
        void setNumeroConta(int numeroConta);

        std::string getNomeCliente();
        double getSalarioMensal();
        double getSaldo();
        double getLimite();
        int getNumeroConta();

        void Sacar(double valor);
        void Depositar(double valor);
        void DefinirLimite();

    protected:
        std::string nomeCliente;
        double salarioMensal;
        double saldo;
        double limite;
        int numeroConta;
};

#endif