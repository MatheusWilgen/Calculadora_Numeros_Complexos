#ifndef PAR_H
#define PAR_H

template <class par>
class Par
{
public:
    Par(par num_1,par num_2);
    Par();
    par Get_Par_Real();
    par Get_Par_Imaginario();
    void Set_Par_Real(par variavel);
    void Set_Par_Imaginario(par variavel);

private:
    par numero_real,numero_imaginario;
};

#endif // PAR_H
