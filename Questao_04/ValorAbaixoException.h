#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H

#include <iostream>
#include <exception>

class ValorAbaixoException : public std::exception
{
    public:
        ValorAbaixoException();
        ~ValorAbaixoException();
        virtual std::string what();
    private:
        std::string erro = "Valor abaixo do esperado.";

};

#endif