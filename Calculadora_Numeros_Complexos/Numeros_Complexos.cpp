#include "Numeros_Complexos.h"

Numeros_Complexos::Numeros_Complexos(double real, double imaginario)
{
    this->real.Set_Real(real);
    this->imaginario.Set_Imaginario(imaginario);
}

Numeros_Complexos::Numeros_Complexos()
{
    this->real.Set_Real(0);
    this->imaginario.Set_Imaginario(0);
}

double Numeros_Complexos::Get_Real() const
{
    return this->real.Get_Real();
}

double Numeros_Complexos::Get_Imaginario() const
{
    return this->imaginario.Get_Imaginario();
}

void Numeros_Complexos::Set_Real(double numero)
{
    this->real.Set_Real(numero);
}

void Numeros_Complexos::Set_Imaginario(double numero)
{
    this->imaginario.Set_Imaginario(numero);
}

void Numeros_Complexos::Conjugado(Numeros_Complexos Numero_Complexo)
{
    this->Set_Real(Numero_Complexo.Get_Real());
    this->Set_Imaginario(-1*Numero_Complexo.Get_Imaginario());
}

Numeros_Complexos Numeros_Complexos::operator+(Numeros_Complexos& Complexo_2)
{
    return Numeros_Complexos(this->Get_Real() + Complexo_2.Get_Real(), this->Get_Imaginario() + Complexo_2.Get_Imaginario());
}

Numeros_Complexos Numeros_Complexos::operator-(Numeros_Complexos& Complexo_2)
{
    return Numeros_Complexos(this->Get_Real() - Complexo_2.Get_Real(),this->Get_Imaginario() - Complexo_2.Get_Imaginario());
}

Numeros_Complexos Numeros_Complexos::operator*(Numeros_Complexos& Complexo_2)
{
    return Numeros_Complexos(this->Get_Real()*Complexo_2.Get_Real() - this->Get_Imaginario()*Complexo_2.Get_Imaginario() ,
                             this->Get_Real()*Complexo_2.Get_Imaginario() + this->Get_Imaginario()*Complexo_2.Get_Real());
}

Numeros_Complexos Numeros_Complexos::operator/(Numeros_Complexos& Complexo_2)
{
    Numeros_Complexos Auxiliar,Auxiliar_2(this->Get_Real(),this->Get_Imaginario());
    Auxiliar.Conjugado(Complexo_2);
    Auxiliar_2 = Auxiliar_2 * Auxiliar;
    Auxiliar   = Auxiliar*Complexo_2;
    return Numeros_Complexos(Auxiliar_2.Get_Real()/Auxiliar.Get_Real() , Auxiliar_2.Get_Imaginario()/Auxiliar.Get_Real());
}

bool Numeros_Complexos::Eh_Zero()
{
    if(Get_Real()==0.0 && Get_Imaginario()==0.0)
        return true;
    return false;
}

void Numeros_Complexos::Conformar_Numero()
{
    Set_Real(Get_Real() * 1); // pois a classe base ja esta com o as variaveis corretas
    Set_Imaginario(Get_Imaginario() * 1);
}

Numeros_Complexos::~Numeros_Complexos()
{}
