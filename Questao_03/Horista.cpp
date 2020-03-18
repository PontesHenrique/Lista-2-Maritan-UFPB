#include "Horista.h"

using namespace std;

Horista::Horista(){
    nome = " ";
    matricula = horasTrabalhadas = salarioPorHora = 0;
}

Horista::Horista(std::string nome, int matricula, double horasTrabalhadas, double salarioPorHora){
    setNome(nome);
    setMatricula(matricula);
    setHorasTrabalhadas(horasTrabalhadas);
    setSalarioPorHora(salarioPorHora);
}

void Horista::setHorasTrabalhadas(double horasTrabalhadas){
    if(horasTrabalhadas > 0)
        this->horasTrabalhadas = horasTrabalhadas;
    else
        this->horasTrabalhadas = 0;
}

void Horista::setSalarioPorHora(double salarioPorHora){
    if(salarioPorHora > 0)
        this->salarioPorHora = salarioPorHora;
    else
        this->salarioPorHora = 0;
}

double Horista::getHorasTrabalhadas(){
    return horasTrabalhadas;
}

double Horista::getSalarioPorHora(){
    return salarioPorHora;
}

double Horista::CalcularSalario(){

    if(horasTrabalhadas > 40){
        return ((salarioPorHora * 40) + ((horasTrabalhadas - 40) * (salarioPorHora * 1.5))) * 4; 
    }else{
        return salarioPorHora * horasTrabalhadas * 4;
    }
}

string Horista::toString(){
    stringstream resumo;
    
    resumo << "\nHorista\n" << endl
           << "Nome: " << nome << endl
           << "Matricula: " << matricula << endl
           << "Salario por hora: " << salarioPorHora << endl
           << "Horas trabalhadas: " << horasTrabalhadas << endl
           << "Salario mensal: " << CalcularSalario() << endl;

    return resumo.str();
}