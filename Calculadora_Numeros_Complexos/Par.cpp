#include "Par.h"

template <class par>
Par<par>::Par(par num_1,par num_2)
{
    this->numero_1 = num_1;
    this->numero_2 = num_2;
}

template <class par>
par Par<par>::Get_Par_Real()
{
    return this->numero_real;
}

template <class par>
par Par<par>::Get_Par_Imaginario()
{
    return this->numero_imaginario;
}

template <class par>
void Par<par>::Set_Par_Real(par variavel)
{
    this->numero_real = variavel;
}
template <class par>
void Par<par>::Set_Par_Imaginario(par variavel)
{
    this->numero_imaginario = variavel;
}

template <class par>
Par<par>::Par()
{
    this->numero_real = 0;
    this->numero_imaginario = 0;
}
