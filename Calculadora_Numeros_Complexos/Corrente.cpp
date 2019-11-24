#include "Corrente.h"

Corrente::Corrente(Numeros_Complexos numero)
{
    this->numero_complexo = numero;
}

Numeros_Complexos Corrente::Get_Complexo() const
{
    return this->numero_complexo;
}
