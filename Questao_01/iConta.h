#ifndef ICONTA_H
#define ICONTA_H

#include <iostream>

class iConta
{

    public:
        iConta();
        ~iConta();

        virtual void Sacar(double valor) = 0;
        virtual void Depositar(double valor) = 0;

};

#endif