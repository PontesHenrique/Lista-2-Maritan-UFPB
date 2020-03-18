#ifndef SaldoNaoDisponivelException_H
#define SaldoNaoDisponivelException_H

#include <iostream>
#include <exception>

using namespace std;

class SaldoNaoDisponivelException : public exception{
    public:
        SaldoNaoDisponivelException();
        ~SaldoNaoDisponivelException();

        virtual std::string erroExc();
    private:
        std::string erro = "Saldo nao disponivel!";
};

#endif
