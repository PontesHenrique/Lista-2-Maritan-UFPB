#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include "iConta.h"

class Conta : public iConta
{
    public:
        Conta();
        ~Conta();
        
        void setNomeCliente(std::string nomeCliente);
        void setSalarioMensal(double salarioMensal);
        void setNumeroConta(int numeroConta);
        void setSaldo(double saldo);
        void setLimite(double limite);

        std::string getNomeCliente();
        double getSalarioMensal();
        int getNumeroConta();
        double getSaldo();
        double getLimite();

        void Sacar(double valor);//metodo existente na classe abstrata
        void Depositar(double valor);//metodo existente na classe abstrata
        void DefinirLimite();

    protected:
        std::string nomeCliente;
        double salarioMensal;
        int numeroConta;
        double saldo;
        double limite;   
};

#endif
