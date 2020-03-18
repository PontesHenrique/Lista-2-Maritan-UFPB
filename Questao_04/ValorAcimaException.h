#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H

#include <iostream>
#include <exception>

class ValorAcimaException : public std::exception
{
    public:
        ValorAcimaException();
        ~ValorAcimaException();
        virtual std::string what();
    private:
        std::string erro = "Valor acima do esperado.";

};

#endif