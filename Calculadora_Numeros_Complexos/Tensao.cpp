#include "Tensao.h"

Tensao::Tensao(Numeros_Complexos numero)
{
    this->numero_complexo = numero;
}

Numeros_Complexos Tensao::Get_Complexo() const
{
    return this->numero_complexo;
}
