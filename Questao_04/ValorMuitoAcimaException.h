#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H

#include <iostream>
#include <exception>

class ValorMuitoAcimaException : public std::exception
{
    public:
        ValorMuitoAcimaException();
        ~ValorMuitoAcimaException();
        virtual std::string what();
    private:
        std::string erro = "Valor muito acima do esperado.";

};

#endif