#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include <iostream>
#include "Pedido.h"

#define MAX_PEDIDOS 100

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        void AdicionaAoPedido(Pedido p1);
        void ZeraPedidos();
        double CalculaTotal();

    private:
        Pedido pedidos[MAX_PEDIDOS];
};

#endif // MESADERESTAURANTE_H
