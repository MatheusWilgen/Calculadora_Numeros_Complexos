#include "Janela_Principal.h"
#include "ui_Janela_Principal.h"
#include<string>


Janela_Principal::Janela_Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Janela_Principal)
{
    ui->setupUi(this);
    setFixedSize(geometry().width(), geometry().height());
}

Janela_Principal::~Janela_Principal()
{
    delete ui;
}

void Janela_Principal::obter_informacoes()
{
    Variavel_Complexa_1.Set_Real(ui->campo_texto_real_n1->text().toDouble());
    Variavel_Complexa_1.Set_Imaginario(ui->campo_texto_imag_n1->text().toDouble());
    Variavel_Complexa_2.Set_Real(ui->campo_texto_real_n2->text().toDouble());
    Variavel_Complexa_2.Set_Imaginario(ui->campo_texto_imag_n2->text().toDouble());
}

void Janela_Principal::mostrar_resultado()
{
    ui->campo_texto_real_resultado->setText(QString("%1").arg(Variavel_Complexa_Resultado.Get_Real()));
    ui->campo_texto_imag_resultado->setText(QString("%1").arg(Variavel_Complexa_Resultado.Get_Imaginario()));
}

bool Janela_Principal::verificar_entradas_vazias()
{
    if(ui->campo_texto_real_n2->text().isEmpty() && ui->campo_texto_imag_n2->text().isEmpty()){
        QMessageBox::critical(this,"Erro","<font color=red>Numero complexo 2 esta vazio");
        return true;
    }
    if(ui->campo_texto_real_n1->text().isEmpty() && ui->campo_texto_imag_n1->text().isEmpty()){
        QMessageBox::critical(this,"Erro","<font color=red>Numero complexo 1 esta vazio");
        return true;
    }
    return false;
}

void Janela_Principal::on_Soma_clicked()
{
    obter_informacoes();
    Variavel_Complexa_Resultado = Variavel_Complexa_1 + Variavel_Complexa_2;
    mostrar_resultado();
}

void Janela_Principal::on_Subtrair_clicked()
{
    obter_informacoes();
    Variavel_Complexa_Resultado = Variavel_Complexa_1 - Variavel_Complexa_2;
    mostrar_resultado();
}

void Janela_Principal::on_Multiplicar_clicked()
{
    if(verificar_entradas_vazias()==false){
        obter_informacoes();
        Variavel_Complexa_Resultado = Variavel_Complexa_1 * Variavel_Complexa_2;
        mostrar_resultado();
    }
}

void Janela_Principal::on_Dividir_clicked()
{
    obter_informacoes();
    if(verificar_entradas_vazias()==false){
        if(Variavel_Complexa_2.Eh_Zero()){
            QMessageBox::critical(this,"Erro","<font color=red>Divisao por zero");
            return;
        }else{
            Variavel_Complexa_Resultado = Variavel_Complexa_1 / Variavel_Complexa_2;
            mostrar_resultado();
        }
    }
}

void Janela_Principal::on_converter_botao_clicked()
{
    if(!(ui->campo_texto_real_conversao->text().isEmpty()   && ui->campo_texto_imag_conversao->text().isEmpty() &&
         ui->campo_texto_modulo_conversao->text().isEmpty() && ui->campo_texto_angulo_conversao->text().isEmpty()))
    {
        //Se esta vazio o campo da forma retangular faz a conversão do polar para retangular
        if(ui->campo_texto_real_conversao->text().isEmpty() && ui->campo_texto_imag_conversao->text().isEmpty())
        {
            Variavel_Complexa_Resultado.Set_Real(ui->campo_texto_modulo_conversao->text().toDouble()* cos(0.0174533*ui->campo_texto_angulo_conversao->text().toDouble()));
            Variavel_Complexa_Resultado.Set_Imaginario(ui->campo_texto_modulo_conversao->text().toDouble()* sin(0.0174533*ui->campo_texto_angulo_conversao->text().toDouble()));
            ui->campo_texto_real_conversao->setText(QString("%1").arg(Variavel_Complexa_Resultado.Get_Real()));
            ui->campo_texto_imag_conversao->setText(QString("%1").arg(Variavel_Complexa_Resultado.Get_Imaginario()));
        }
        //Se esta vazio o campo da forma polar faz a conversão de retangular para polar
        if(ui->campo_texto_modulo_conversao->text().isEmpty() && ui->campo_texto_angulo_conversao->text().isEmpty())
        {
            Variavel_Complexa_Resultado.Set_Real(ui->campo_texto_real_conversao->text().toDouble());
            Variavel_Complexa_Resultado.Set_Imaginario(ui->campo_texto_imag_conversao->text().toDouble());
            Numeros_Complexos_Polares aux(Variavel_Complexa_Resultado);
            ui->campo_texto_modulo_conversao->setText(QString("%1").arg(aux.Get_Modulo()));
            ui->campo_texto_angulo_conversao->setText(QString("%1").arg(aux.Get_Angulo()));
        }
    }
}

void Janela_Principal::on_zerar_clicked()
{
    ui->campo_texto_real_conversao->setText("");
    ui->campo_texto_imag_conversao->setText("");
    ui->campo_texto_modulo_conversao->setText("");
    ui->campo_texto_angulo_conversao->setText("");
}


void Janela_Principal::on_Calcular_Eletrica_clicked()
{
    Variavel_Complexa_1.Set_Real(ui->Tensao_real->text().toDouble());
    Variavel_Complexa_1.Set_Imaginario(ui->Tensao_imaginario->text().toDouble());
    Variavel_Complexa_2.Set_Real(ui->Corrente_Real->text().toDouble());
    Variavel_Complexa_2.Set_Imaginario(ui->Corrente_Imaginario->text().toDouble());

    //Utilizando tensao e corrente para escrever o texto de tensao e corrente
    Tensao tensao(Variavel_Complexa_1);
    Corrente corrente(Variavel_Complexa_2);
    ui->Tensao_real->setText(QString("%1").arg(tensao.Get_Complexo().Get_Real()));
    ui->Tensao_imaginario->setText(QString("%1").arg(tensao.Get_Complexo().Get_Imaginario()));
    ui->Corrente_Real->setText(QString("%1").arg(corrente.Get_Complexo().Get_Real()));
    ui->Corrente_Imaginario->setText(QString("%1").arg(corrente.Get_Complexo().Get_Imaginario()));

    //Fazendo o calculo para impedancia
    Variavel_Complexa_Resultado = Variavel_Complexa_1 / Variavel_Complexa_2;
    //armazenando o resultado em um objeto da classe Impedancia
    Impedancia<std::string> auxiliar(std::to_string(Variavel_Complexa_Resultado.Get_Real()),std::to_string(Variavel_Complexa_Resultado.Get_Imaginario()));
    //escrevendo na tela a impedancia calculada que foi armazenada como string no objeto auxiliar
    QString s(auxiliar.Get_Real().c_str()),s2(auxiliar.Get_Imaginario().c_str());
    ui->Impedancia_Real->setText(s);
    ui->Impedancia_imaginario->setText(s2);

    //Fazendo o calculo para Potencia
    Variavel_Complexa_Resultado = Variavel_Complexa_1 * Variavel_Complexa_2;
    //armazenando o resultado em um objeto da classe Potencia
    Potencia<double> potencia(Variavel_Complexa_Resultado.Get_Real(),Variavel_Complexa_Resultado.Get_Imaginario());
    //escrevendo na tela a potencia calculada
    ui->Potencia_Real->setText(QString("%1").arg(potencia.Get_Real()));
    ui->Potencia_imaginario->setText(QString("%1").arg(potencia.Get_Imaginario()));
}
