#include "ValorAcimaException.h"

ValorAcimaException::ValorAcimaException(){

}

ValorAcimaException::~ValorAcimaException(){

}

std::string ValorAcimaException::what(){
    return erro;
}