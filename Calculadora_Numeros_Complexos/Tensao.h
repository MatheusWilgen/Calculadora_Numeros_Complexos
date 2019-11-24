#ifndef TENSAO_H
#define TENSAO_H

#include "Numeros_Complexos.h"

class Tensao
{
public:
    Tensao(Numeros_Complexos numero);
    Numeros_Complexos Get_Complexo() const;

private:
    Numeros_Complexos numero_complexo;
};

#endif // TENSAO_H
