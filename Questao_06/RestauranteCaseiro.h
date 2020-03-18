#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include <iostream>
#include "MesaDeRestaurante.h"

#define MAX_MESAS 100

class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void AdicionaMesa(MesaDeRestaurante m1);
        void AdicionaAoPedido(Pedido p1, int numMesa);
        double CalculaTotalRestaurante();

    private:
        MesaDeRestaurante mesas[MAX_MESAS];
};

#endif // RESTAURANTECASEIRO_H
