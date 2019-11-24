#include "Numero_Imaginario.h"

Numero_Imaginario::Numero_Imaginario()
{
    this->imaginario = 0;
}

double Numero_Imaginario::Get_Imaginario() const
{
    return this->imaginario;
}

void Numero_Imaginario::Set_Imaginario(double numero)
{
    this->imaginario = numero;
}

