#include <iostream>
#include "Conta.h"

using namespace std;

int main(){
	
	double valor;
	
    Conta *c1 = new Conta();
    
    cout << "Digite um valor para saque: ";
    cin >> valor;
    
    c1->setSaldo(valor);

    try{
        c1->Sacar(2101);
    }catch(SaldoNaoDisponivelException e){
        std::cerr << e.erroExc() << endl;
    }
   
    return 0;
}
