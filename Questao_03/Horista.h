#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"
#include <iostream>

class Horista : public Funcionario
{
    public:
        Horista();
        Horista(std::string nome, int matricula, double horasTrabalhadas, double salarioPorHora);

        void setHorasTrabalhadas(double horasTrabalhadas);
        void setSalarioPorHora(double salarioPorHora);

        double getHorasTrabalhadas();
        double getSalarioPorHora();

        virtual double CalcularSalario();
        virtual std::string toString();
    private:
        double horasTrabalhadas;
        double salarioPorHora;
};

#endif