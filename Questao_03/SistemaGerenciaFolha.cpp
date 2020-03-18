#include "SistemaGerenciaFolha.h"

using namespace std;

SistemaGerenciaFolha::SistemaGerenciaFolha(){   
}

void SistemaGerenciaFolha::setFuncionario(Funcionario *func){
    funcionarios[i] = func;
    i++;
}

double SistemaGerenciaFolha::calculaValorTotalFolha(){
    double
        valorTotal = 0;

    for (int i = 0; i < MAX_FUNCIONARIOS; i++){
        valorTotal += funcionarios[i]->CalcularSalario();
    }
    
    return valorTotal;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(int matricula){
    
    for (int i = 0; i < MAX_FUNCIONARIOS; i++){
        if(funcionarios[i]->getMatricula() == matricula){
            return funcionarios[i]->CalcularSalario();
        }
    }

    throw FuncionarioNaoExisteException();
    return -1;
}
