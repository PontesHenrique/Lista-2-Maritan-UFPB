#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
    for(int i = 0; i < MAX_MESAS; i++){
        mesas[i].ZeraPedidos();
    }
}

void RestauranteCaseiro::AdicionaMesa(MesaDeRestaurante m1){
    for(int i = 0; i < MAX_MESAS; i++){
        if(mesas[i].CalculaTotal() == 0){
            mesas[i] = m1;
            break;
        }
    }
}

void RestauranteCaseiro::AdicionaAoPedido(Pedido p1, int numMesa){
    if(numMesa >= 0 && numMesa < MAX_MESAS)
        mesas[numMesa].AdicionaAoPedido(p1);
}

double RestauranteCaseiro::CalculaTotalRestaurante(){
    double total = 0;

    for(int i = 0; i < MAX_MESAS; i++){
        total += mesas[i].CalculaTotal();
    }

    return total;
}
