#include <iostream>
#include "RestauranteCaseiro.h"

using namespace std;

int main()
{
    Pedido p1(1,2,7.0, "pizza");
    Pedido p2(2,1,10.0, "macarrao");
    Pedido p3(3,1,12.50, "bife ao molho");

    cout << p1.toString() << endl;
    cout << p2.toString() << endl;
    cout << p3.toString() << endl;

    MesaDeRestaurante m1;
    MesaDeRestaurante m2;

    m1.AdicionaAoPedido(p1);
    m1.AdicionaAoPedido(p2);

    m2.AdicionaAoPedido(p2);
    m2.AdicionaAoPedido(p2); //Aumenta a quantidade de x-calabresa de 1, para 2 na mesa 2.
    m2.AdicionaAoPedido(p3);

    cout << "Total da mesa 1: " << m1.CalculaTotal() << endl; // 2*7 + 1*10
    cout << "Total da mesa 2: " << m2.CalculaTotal() << endl << endl; // 2*10 + 1*12.50

    RestauranteCaseiro r1;

    r1.AdicionaMesa(m1);
    r1.AdicionaMesa(m2);

    cout << "Total do restaurante: " << r1.CalculaTotalRestaurante() << endl; // 24 + 32.50

    r1.AdicionaAoPedido(p1, 2); // 2 * 7

    cout << "Total do restaurante apos novo pedido: " << r1.CalculaTotalRestaurante() << endl; // 56.50 + 14

    return 0;
}
