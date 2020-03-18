#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <sstream>

class Funcionario
{
    public:
        Funcionario();

        void setNome(std::string nome);
        void setMatricula(int matricula);

        std::string getNome();
        int getMatricula();

        virtual double CalcularSalario() = 0;
        virtual std::string toString() = 0;
    protected:
        std::string nome;
        int matricula;
};

#endif