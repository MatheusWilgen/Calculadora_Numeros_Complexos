#include "Numero_Real.h"

Numero_Real::Numero_Real()
{
    this->real = 0;
}

double Numero_Real::Get_Real() const
{
    return real;
}

void Numero_Real::Set_Real(double numero)
{
    this->real = numero;
}
