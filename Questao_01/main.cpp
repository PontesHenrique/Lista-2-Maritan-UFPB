#include <iostream>
#include "ContaEspecial.h"

using namespace std;

int main(){
	
	double contaCorrente, contaEspecial, salarioMensal;
	
    Conta *c1 = new Conta();//objeto da classe Conta
    ContaEspecial *ce1 = new ContaEspecial();//objeto da classe ContaEspecial
    
    cout << "Digite valor para depositar na conta corrente: ";
    cin >> contaCorrente;
    c1->Depositar(contaCorrente);
    
    cout << "Digite valor para depositar na conta especial: ";
    cin >> contaEspecial;
    ce1->Depositar(contaEspecial);

    cout << "\nSaldo disponivel da conta corrente: " << c1->getSaldo() << endl;
    cout << "Saldo disponivel da conta especial: " << ce1->getSaldo() << endl;
    
    cout << "\nDigite valor para sacar na conta corrente: ";
    cin >> contaCorrente;
    c1->Sacar(contaCorrente);
    
    cout << "Digite valor para sacar na conta especial: ";
    cin >> contaEspecial;
    ce1->Sacar(contaEspecial);

    cout << "\nSaldo disponivel da conta corrente (pos saque): " << c1->getSaldo() << endl;
    cout << "Saldo disponivel da conta especial (pos saque): " << ce1->getSaldo() << endl;
    
    cout << "\nDigite valor do salario mensal: ";
    cin >> salarioMensal;
    
    c1->setSalarioMensal(salarioMensal);
    c1->DefinirLimite();
    
    ce1->setSalarioMensal(salarioMensal);
    ce1->DefinirLimite();

    cout << "\nLimite da conta corrente: " << c1->getLimite() << endl;
    cout << "Limite da conta especial: " << ce1->getLimite() << endl;

    return 0;
}
