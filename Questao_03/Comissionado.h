#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"
#include <iostream>

class Comissionado : public Funcionario
{
    public:
        Comissionado();
        Comissionado(std::string nome, int matricula, double salarioBase, double vendasSemanais, double percentualComissao);

        void setVendasSemanais(double vendasSemanais);
        void setPercentualComissao(double percentualComissao);
        void setSalarioBase(double salarioBase);

        double getVendasSemanais();
        double getPercentualComissao();
        double getSalarioBase();

        virtual double CalcularSalario();
        virtual std::string toString();
    private:
        double salarioBase;
        double vendasSemanais;
        double percentualComissao;
};

#endif