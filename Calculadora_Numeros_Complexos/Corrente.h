#ifndef CORRENTE_H
#define CORRENTE_H

#include "Numeros_Complexos.h"

class Corrente
{
public:
    Corrente(Numeros_Complexos numero);
    Numeros_Complexos Get_Complexo() const;
private:
    Numeros_Complexos numero_complexo;
};

#endif // CORRENTE_H
