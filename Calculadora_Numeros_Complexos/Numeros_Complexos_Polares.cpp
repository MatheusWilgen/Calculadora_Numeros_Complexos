#include "Numeros_Complexos_Polares.h"

#include <cmath>

Numeros_Complexos_Polares::Numeros_Complexos_Polares(Numeros_Complexos um_numero_complexo)
{
    this->Set_Real(um_numero_complexo.Get_Real());
    this->Set_Imaginario(um_numero_complexo.Get_Imaginario());
    Conformar_Numero();
}

void Numeros_Complexos_Polares::Conformar_Numero()
{
    this->angulo = 57.2958*atan(this->Get_Imaginario()/this->Get_Real());
    this->modulo = sqrt((pow(this->Get_Real(),2)+pow(this->Get_Imaginario(),2)));
}

double Numeros_Complexos_Polares::Get_Modulo() const
{
    return this->modulo;
}

double Numeros_Complexos_Polares::Get_Angulo() const
{
    return this->angulo;
}

Numeros_Complexos_Polares::~Numeros_Complexos_Polares()
{}
