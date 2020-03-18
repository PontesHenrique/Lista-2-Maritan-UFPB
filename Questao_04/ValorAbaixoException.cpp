#include "ValorAbaixoException.h"

ValorAbaixoException::ValorAbaixoException(){

}

ValorAbaixoException::~ValorAbaixoException(){

}

std::string ValorAbaixoException::what(){
    return erro;
}