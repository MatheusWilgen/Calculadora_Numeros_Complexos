#ifndef NUMEROS_COMPLEXOS_POLARES_H
#define NUMEROS_COMPLEXOS_POLARES_H

#include "Numeros_Complexos.h"

class Numeros_Complexos_Polares : public Numeros_Complexos
{
public:
    Numeros_Complexos_Polares(Numeros_Complexos um_numero_complexo);
    virtual ~Numeros_Complexos_Polares();
    void   Conformar_Numero();
    double Get_Angulo() const;
    double Get_Modulo() const;
private:
    double modulo,angulo;
};

#endif // NUMEROS_COMPLEXOS_POLARES_H
