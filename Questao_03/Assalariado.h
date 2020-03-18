#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"
#include <iostream>

class Assalariado : public Funcionario
{
    public:
        Assalariado();
        Assalariado(std::string nome, int matricula, double salario);
        
        void setSalario(double salario);
        double getSalario();
        
        virtual double CalcularSalario();
        virtual std::string toString();
    private:
        double salario;
};

#endif