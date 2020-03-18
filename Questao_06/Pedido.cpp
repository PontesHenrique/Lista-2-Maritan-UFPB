#include "Pedido.h"

using namespace std;

Pedido::Pedido()
{
    numPedido = qPedido = preco = 0;
    descricao = " ";
}

Pedido::Pedido(int numPedido, int qPedido, double preco, std::string descricao){
    setNumPedido(numPedido);
    setQPedido(qPedido);
    setPreco(preco);
    setDescricao(descricao);
}

int Pedido::getNumPedido(){
    return numPedido;
}

int Pedido::getQPedido(){
    return qPedido;
}

double Pedido::getPreco(){
    return preco;
}

std::string Pedido::getDescricao(){
    return descricao;
}

void Pedido::setNumPedido(int numPedido){
    if(numPedido > 0)
        this->numPedido = numPedido;
    else
        this->numPedido = 0;
}

void Pedido::setQPedido(int qPedido){
    if(qPedido > 0)
        this->qPedido = qPedido;
    else
        this->qPedido = 0;
}

void Pedido::setPreco(double preco){
    if(preco > 0)
        this->preco = preco;
    else
        this->preco = 0;
}

void Pedido::setDescricao(std::string descricao){
    this->descricao = descricao;
}

std::string Pedido::toString(){
    stringstream resumo;

    resumo << "Numero do pedido: " << numPedido << "\nDescricao: " << descricao << "\nPreco: "
           << preco << " R$\nQuantidade: " << qPedido << endl;

    return resumo.str();
}
