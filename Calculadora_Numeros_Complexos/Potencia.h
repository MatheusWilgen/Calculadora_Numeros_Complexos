#ifndef POTENCIA_H
#define POTENCIA_H

//Classe para armazenar potencia

template <class tipo_potencia>
class Potencia
{
public:
    Potencia(tipo_potencia real,tipo_potencia imaginario)
    {
        this->real = real;
        this->imaginario = imaginario;
    }
    tipo_potencia Get_Real() const
    {
        return this->real;
    }
    tipo_potencia Get_Imaginario() const
    {
        return this->imaginario;
    }

private:
    tipo_potencia real, imaginario;
};

template <> class Potencia<double>
{
public:
    Potencia(double real,double imaginario)
    {
        this->real = real;
        this->imaginario = imaginario;
    }
    double Get_Real() const
    {
        return this->real;
    }
    double Get_Imaginario() const
    {
        return this->imaginario;
    }

private:
    double real, imaginario;
};

#endif // POTENCIA_H
