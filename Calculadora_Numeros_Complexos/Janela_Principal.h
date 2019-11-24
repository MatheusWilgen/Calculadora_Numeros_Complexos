#ifndef JANELA_PRINCIPAL_H
#define JANELA_PRINCIPAL_H

#include <QMainWindow>
#include <QMessageBox>
#include <cmath>

#include "Numeros_Complexos.h"
#include "Numeros_Complexos_Polares.h"
#include "Tensao.h"
#include "Corrente.h"
#include "Impedancia.h"
#include "Potencia.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Janela_Principal; }
QT_END_NAMESPACE

class Janela_Principal : public QMainWindow
{
    Q_OBJECT

public:
    Janela_Principal(QWidget *parent = nullptr);
    ~Janela_Principal();

private slots:
    void obter_informacoes();
    void mostrar_resultado();
    bool verificar_entradas_vazias();
    void on_Soma_clicked();
    void on_Subtrair_clicked();
    void on_converter_botao_clicked();
    void on_zerar_clicked();
    void on_Dividir_clicked();
    void on_Multiplicar_clicked();

    void on_Calcular_Eletrica_clicked();

private:
    Ui::Janela_Principal *ui;
    //---------------------Associação------------------------
    Numeros_Complexos Variavel_Complexa_Resultado,Variavel_Complexa_1,Variavel_Complexa_2;
};
#endif // JANELA_PRINCIPAL_H
