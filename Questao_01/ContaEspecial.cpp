#include "ContaEspecial.h"

using namespace std;

ContaEspecial::ContaEspecial()
{
    nomeCliente = " ";
    salarioMensal = saldo = limite = numeroConta = 0;
}

ContaEspecial::~ContaEspecial()
{
}

void ContaEspecial::DefinirLimite(){
    limite = salarioMensal * 3;
}