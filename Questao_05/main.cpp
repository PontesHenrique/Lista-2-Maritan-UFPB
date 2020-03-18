#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream 
        input("teste.txt", ios::in);
    ofstream
        output("teste_bkp.txt", ios::out);

    string
        nome;
    int
        idade, salario;

    if(!input.is_open()){
        cout << "entrada deu errado brother" << endl;
        return -1;
    }
    if(!output.is_open()){
        cout << "saida deu errado brother" << endl;
        return -2;
    }

    while(!input.eof()){
        getline(input, nome);
        cout << nome << endl;

        input >> idade;
        cout << idade << endl;
        
        input >> salario;
        cout << salario << endl;
    }

    output << nome << endl;
    output << idade << endl;
    output << salario;

    input.close();
    output.close();
    return 0;
}
