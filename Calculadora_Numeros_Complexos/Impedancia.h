#ifndef IMPEDANCIA_H
#define IMPEDANCIA_H
#include<QString>

template <class impedancia> class Impedancia
{
public:
    Impedancia(impedancia real, impedancia imaginario);
    impedancia Get_Real() const;
    impedancia Get_Imaginario() const;

private:
    impedancia n_real,n_imaginario;
};

template <> class Impedancia<double>
{
public:
    Impedancia(double real, double imaginario)
    {
        this->n_real = real;
        this->n_imaginario = imaginario;
    }
    double Get_Real() const
    {
        return this->n_real;
    }
    double Get_Imaginario() const
    {
        return this->n_imaginario;
    }

private:
    double n_real,n_imaginario;
};

template <> class Impedancia<QString>
{
public:
    Impedancia(QString real, QString imaginario)
    {
        this->n_real = real;
        this->n_imaginario = imaginario;
    }
    QString Get_Real() const
    {
        return this->n_real;
    }
    QString Get_Imaginario() const
    {
        return this->n_imaginario;
    }

private:
    QString n_real,n_imaginario;
};

#endif
