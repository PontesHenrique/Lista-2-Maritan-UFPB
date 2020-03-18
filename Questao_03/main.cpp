#include <iostream>
#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"

using namespace std;

int main(){
	
	string nome;
	int matricula;
	double salario, vendas;

    SistemaGerenciaFolha sgf = SistemaGerenciaFolha();

    Funcionario *assl = new Assalariado();
    Funcionario *com = new Comissionado();
    Funcionario *hor = new Horista();
    
    cout << "Digite o seu nome: ";
    getline(cin, nome);
    cout << "Digite matricula: ";
    cin >> matricula;
    cout << "Digite o valor do salario:";
    cin >> salario;

    assl->setNome(nome);
    assl->setMatricula(matricula);
    ((Assalariado *)assl)->setSalario(salario);
    
    cout << "Digite o seu nome: ";
    getline(cin, nome);
    cout << "Digite matricula: ";
    cin >> matricula;
    cout << "Digite o valor do salario:";
    cin >> salario;
    cout << "Digite o valor das vendas: ";
    cin >> vendas;

    com->setNome(nome);
    com->setMatricula(matricula);
    ((Comissionado *)com)->setSalarioBase(salario);
    ((Comissionado *)com)->setVendasSemanais(vendas);
    ((Comissionado *)com)->setPercentualComissao(20);
    
    cout << "Digite o seu nome: ";
    getline(cin, nome);
    cout << "Digite matricula: ";
    cin >> matricula;
   
    hor->setNome(nome);
    hor->setMatricula(matricula);
    ((Horista *)hor)->setSalarioPorHora(12);
    ((Horista *)hor)->setHorasTrabalhadas(45);

    sgf.setFuncionario(assl);
    sgf.setFuncionario(com);
    sgf.setFuncionario(hor);

    cout << assl->toString();
    cout << com->toString();
    cout << hor->toString() << endl;

    cout << "Total de pagamento na folha: " << sgf.calculaValorTotalFolha() << endl;
    cout << "Salario mensal funcionario de matricula 2: " << sgf.consultaSalarioFuncionario(2) << endl;

    try{
        cout << "Salario mensal funcionario de matricula 4: " << sgf.consultaSalarioFuncionario(4) << endl;
    }catch(FuncionarioNaoExisteException e){
        cout << e.what() << endl;
    }
    return 0;
}
