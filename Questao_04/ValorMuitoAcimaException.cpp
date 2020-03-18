#include "ValorMuitoAcimaException.h"

ValorMuitoAcimaException::ValorMuitoAcimaException(){

}

ValorMuitoAcimaException::~ValorMuitoAcimaException(){

}

std::string ValorMuitoAcimaException::what(){
    return erro;
}