#ifndef PEDIDO_H
#define PEDIDO_H

#include <iostream>
#include <sstream>

class Pedido
{
    public:
        Pedido();
        Pedido(int numPedido, int qPedido, double preco, std::string descricao);

        int getNumPedido();
        int getQPedido();
        double getPreco();
        std::string getDescricao();

        void setNumPedido(int numPedido);
        void setQPedido(int qPedido);
        void setPreco(double preco);
        void setDescricao(std::string descricao);

        std::string toString();
    private:
        int numPedido;
        int qPedido;
        double preco;
        std::string descricao;
};

#endif // PEDIDO_H
