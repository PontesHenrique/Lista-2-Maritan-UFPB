#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include <iostream>
#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"
#include "FuncionarioNaoExisteException.h"

#define MAX_FUNCIONARIOS 3

class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha();

        void setFuncionario(Funcionario *func);
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario(int matricula);
    private:
        Funcionario *funcionarios[MAX_FUNCIONARIOS];
        int i = 0;
};

#endif