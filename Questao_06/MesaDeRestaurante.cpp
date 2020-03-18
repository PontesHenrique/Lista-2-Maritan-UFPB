#include "MesaDeRestaurante.h"

using namespace std;

MesaDeRestaurante::MesaDeRestaurante(){
    ZeraPedidos();
}

void MesaDeRestaurante::AdicionaAoPedido(Pedido p1){
        for(int i = 0; i < MAX_PEDIDOS; i++){
            if(p1.getDescricao() == pedidos[i].getDescricao()){
                pedidos[i].setQPedido(pedidos[i].getQPedido() + p1.getQPedido());
                return;
            }
        }
        for(int i = 0; i < MAX_PEDIDOS; i++){
            if(pedidos[i].getNumPedido() == 0){
                pedidos[i] = p1;
                break;
            }
        }
}

void MesaDeRestaurante::ZeraPedidos(){
    for(int i = 0; i < MAX_PEDIDOS; i++){
        pedidos[i].setNumPedido(0);
        pedidos[i].setQPedido(0);
        pedidos[i].setPreco(0);
        pedidos[i].setDescricao(" ");
    }
}

double MesaDeRestaurante::CalculaTotal(){
    double soma = 0;

    for(int i = 0; i < MAX_PEDIDOS; i++){
        soma += pedidos[i].getPreco() * pedidos[i].getQPedido();
    }

    return soma;
}
