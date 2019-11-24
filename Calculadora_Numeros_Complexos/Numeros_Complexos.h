#ifndef NUMEROS_COMPLEXOS_H
#define NUMEROS_COMPLEXOS_H

#include "Numero_Real.h"
#include "Numero_Imaginario.h"

class Numeros_Complexos
{
public:
    Numeros_Complexos(double real, double imaginario);
    Numeros_Complexos();
    virtual ~Numeros_Complexos();
    Numeros_Complexos operator+(Numeros_Complexos& Complexo_2);
    Numeros_Complexos operator-(Numeros_Complexos& Complexo_2);
    Numeros_Complexos operator*(Numeros_Complexos& Complexo_2);
    Numeros_Complexos operator/(Numeros_Complexos& Complexo_2);
    virtual void    Conformar_Numero();
    void            Conjugado(Numeros_Complexos Numero_Complexo);
    double          Get_Real() const;
    double          Get_Imaginario() const;
    void            Set_Real(double numero);
    void            Set_Imaginario(double numero);
    bool            Eh_Zero();

private:
    //---Associacao---
    Numero_Real real;
    Numero_Imaginario imaginario;
};

#endif // NUMEROS_COMPLEXOS_H
