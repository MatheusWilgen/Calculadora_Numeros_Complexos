/********************************************************************************
** Form generated from reading UI file 'Janela_Principal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELA_PRINCIPAL_H
#define UI_JANELA_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Janela_Principal
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *campo_texto_real_conversao;
    QLabel *label_11;
    QLineEdit *campo_texto_imag_conversao;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *campo_texto_modulo_conversao;
    QLabel *label_14;
    QLineEdit *campo_texto_angulo_conversao;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *converter_botao;
    QPushButton *zerar;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *campo_texto_real_n1;
    QLabel *label;
    QLineEdit *campo_texto_imag_n1;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *campo_texto_real_n2;
    QLabel *label_5;
    QLineEdit *campo_texto_imag_n2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *campo_texto_real_resultado;
    QLabel *label_8;
    QLineEdit *campo_texto_imag_resultado;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Soma;
    QPushButton *Subtrair;
    QPushButton *Dividir;
    QPushButton *Multiplicar;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *Tensao_real;
    QLabel *label_20;
    QLineEdit *Tensao_imaginario;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_22;
    QLineEdit *Corrente_Real;
    QLabel *label_23;
    QLineEdit *Corrente_Imaginario;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_25;
    QLineEdit *Impedancia_Real;
    QLabel *label_26;
    QLineEdit *Impedancia_imaginario;
    QLabel *label_27;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_44;
    QLineEdit *Potencia_Real;
    QLabel *label_46;
    QLineEdit *Potencia_imaginario;
    QLabel *label_45;
    QPushButton *Calcular_Eletrica;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Janela_Principal)
    {
        if (Janela_Principal->objectName().isEmpty())
            Janela_Principal->setObjectName(QStringLiteral("Janela_Principal"));
        Janela_Principal->resize(676, 537);
        centralwidget = new QWidget(Janela_Principal);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_16);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_6->addWidget(label_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        campo_texto_real_conversao = new QLineEdit(centralwidget);
        campo_texto_real_conversao->setObjectName(QStringLiteral("campo_texto_real_conversao"));

        horizontalLayout_7->addWidget(campo_texto_real_conversao);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_7->addWidget(label_11);

        campo_texto_imag_conversao = new QLineEdit(centralwidget);
        campo_texto_imag_conversao->setObjectName(QStringLiteral("campo_texto_imag_conversao"));

        horizontalLayout_7->addWidget(campo_texto_imag_conversao);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_7->addWidget(label_12);


        horizontalLayout_6->addLayout(horizontalLayout_7);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_8->addWidget(label_13);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        campo_texto_modulo_conversao = new QLineEdit(centralwidget);
        campo_texto_modulo_conversao->setObjectName(QStringLiteral("campo_texto_modulo_conversao"));

        horizontalLayout_9->addWidget(campo_texto_modulo_conversao);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_9->addWidget(label_14);

        campo_texto_angulo_conversao = new QLineEdit(centralwidget);
        campo_texto_angulo_conversao->setObjectName(QStringLiteral("campo_texto_angulo_conversao"));

        horizontalLayout_9->addWidget(campo_texto_angulo_conversao);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_9->addWidget(label_15);


        horizontalLayout_8->addLayout(horizontalLayout_9);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        converter_botao = new QPushButton(centralwidget);
        converter_botao->setObjectName(QStringLiteral("converter_botao"));

        horizontalLayout_10->addWidget(converter_botao);

        zerar = new QPushButton(centralwidget);
        zerar->setObjectName(QStringLiteral("zerar"));

        horizontalLayout_10->addWidget(zerar);


        verticalLayout->addLayout(horizontalLayout_10);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_17);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        campo_texto_real_n1 = new QLineEdit(centralwidget);
        campo_texto_real_n1->setObjectName(QStringLiteral("campo_texto_real_n1"));

        horizontalLayout->addWidget(campo_texto_real_n1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        campo_texto_imag_n1 = new QLineEdit(centralwidget);
        campo_texto_imag_n1->setObjectName(QStringLiteral("campo_texto_imag_n1"));

        horizontalLayout->addWidget(campo_texto_imag_n1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        campo_texto_real_n2 = new QLineEdit(centralwidget);
        campo_texto_real_n2->setObjectName(QStringLiteral("campo_texto_real_n2"));

        horizontalLayout_3->addWidget(campo_texto_real_n2);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        campo_texto_imag_n2 = new QLineEdit(centralwidget);
        campo_texto_imag_n2->setObjectName(QStringLiteral("campo_texto_imag_n2"));

        horizontalLayout_3->addWidget(campo_texto_imag_n2);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        campo_texto_real_resultado = new QLineEdit(centralwidget);
        campo_texto_real_resultado->setObjectName(QStringLiteral("campo_texto_real_resultado"));

        horizontalLayout_5->addWidget(campo_texto_real_resultado);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_5->addWidget(label_8);

        campo_texto_imag_resultado = new QLineEdit(centralwidget);
        campo_texto_imag_resultado->setObjectName(QStringLiteral("campo_texto_imag_resultado"));

        horizontalLayout_5->addWidget(campo_texto_imag_resultado);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_5->addWidget(label_9);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Soma = new QPushButton(centralwidget);
        Soma->setObjectName(QStringLiteral("Soma"));

        horizontalLayout_4->addWidget(Soma);

        Subtrair = new QPushButton(centralwidget);
        Subtrair->setObjectName(QStringLiteral("Subtrair"));

        horizontalLayout_4->addWidget(Subtrair);

        Dividir = new QPushButton(centralwidget);
        Dividir->setObjectName(QStringLiteral("Dividir"));

        horizontalLayout_4->addWidget(Dividir);

        Multiplicar = new QPushButton(centralwidget);
        Multiplicar->setObjectName(QStringLiteral("Multiplicar"));

        horizontalLayout_4->addWidget(Multiplicar);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_18);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_11->addWidget(label_19);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        Tensao_real = new QLineEdit(centralwidget);
        Tensao_real->setObjectName(QStringLiteral("Tensao_real"));

        horizontalLayout_12->addWidget(Tensao_real);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_12->addWidget(label_20);

        Tensao_imaginario = new QLineEdit(centralwidget);
        Tensao_imaginario->setObjectName(QStringLiteral("Tensao_imaginario"));

        horizontalLayout_12->addWidget(Tensao_imaginario);

        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_12->addWidget(label_21);


        horizontalLayout_11->addLayout(horizontalLayout_12);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_13->addWidget(label_22);

        Corrente_Real = new QLineEdit(centralwidget);
        Corrente_Real->setObjectName(QStringLiteral("Corrente_Real"));

        horizontalLayout_13->addWidget(Corrente_Real);

        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_13->addWidget(label_23);

        Corrente_Imaginario = new QLineEdit(centralwidget);
        Corrente_Imaginario->setObjectName(QStringLiteral("Corrente_Imaginario"));

        horizontalLayout_13->addWidget(Corrente_Imaginario);

        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_13->addWidget(label_24);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_25 = new QLabel(centralwidget);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_14->addWidget(label_25);

        Impedancia_Real = new QLineEdit(centralwidget);
        Impedancia_Real->setObjectName(QStringLiteral("Impedancia_Real"));

        horizontalLayout_14->addWidget(Impedancia_Real);

        label_26 = new QLabel(centralwidget);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_14->addWidget(label_26);

        Impedancia_imaginario = new QLineEdit(centralwidget);
        Impedancia_imaginario->setObjectName(QStringLiteral("Impedancia_imaginario"));

        horizontalLayout_14->addWidget(Impedancia_imaginario);

        label_27 = new QLabel(centralwidget);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_14->addWidget(label_27);


        verticalLayout_3->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_44 = new QLabel(centralwidget);
        label_44->setObjectName(QStringLiteral("label_44"));

        horizontalLayout_15->addWidget(label_44);

        Potencia_Real = new QLineEdit(centralwidget);
        Potencia_Real->setObjectName(QStringLiteral("Potencia_Real"));

        horizontalLayout_15->addWidget(Potencia_Real);

        label_46 = new QLabel(centralwidget);
        label_46->setObjectName(QStringLiteral("label_46"));

        horizontalLayout_15->addWidget(label_46);

        Potencia_imaginario = new QLineEdit(centralwidget);
        Potencia_imaginario->setObjectName(QStringLiteral("Potencia_imaginario"));

        horizontalLayout_15->addWidget(Potencia_imaginario);

        label_45 = new QLabel(centralwidget);
        label_45->setObjectName(QStringLiteral("label_45"));

        horizontalLayout_15->addWidget(label_45);


        verticalLayout_3->addLayout(horizontalLayout_15);


        verticalLayout_5->addLayout(verticalLayout_3);

        Calcular_Eletrica = new QPushButton(centralwidget);
        Calcular_Eletrica->setObjectName(QStringLiteral("Calcular_Eletrica"));

        verticalLayout_5->addWidget(Calcular_Eletrica);


        verticalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(verticalLayout_4);

        Janela_Principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Janela_Principal);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 676, 22));
        Janela_Principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Janela_Principal);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Janela_Principal->setStatusBar(statusbar);

        retranslateUi(Janela_Principal);

        QMetaObject::connectSlotsByName(Janela_Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Janela_Principal)
    {
        Janela_Principal->setWindowTitle(QApplication::translate("Janela_Principal", "Janela_Principal", Q_NULLPTR));
        label_16->setText(QApplication::translate("Janela_Principal", "Converter Complexo", Q_NULLPTR));
        label_10->setText(QApplication::translate("Janela_Principal", "Forma Retangular", Q_NULLPTR));
        label_11->setText(QApplication::translate("Janela_Principal", "+", Q_NULLPTR));
        label_12->setText(QApplication::translate("Janela_Principal", "j", Q_NULLPTR));
        label_13->setText(QApplication::translate("Janela_Principal", "Forma Polar           ", Q_NULLPTR));
        label_14->setText(QApplication::translate("Janela_Principal", "<html><head/><body><p>|Z|</p></body></html>", Q_NULLPTR));
        label_15->setText(QApplication::translate("Janela_Principal", "<html><head/><body><p><span style=\" font-weight:600;\">\316\270</span></p></body></html>", Q_NULLPTR));
        converter_botao->setText(QApplication::translate("Janela_Principal", "Converta", Q_NULLPTR));
        zerar->setText(QApplication::translate("Janela_Principal", "Zerar", Q_NULLPTR));
        label_17->setText(QApplication::translate("Janela_Principal", "Calcular", Q_NULLPTR));
        label_2->setText(QApplication::translate("Janela_Principal", "Numero Complexo 1  ", Q_NULLPTR));
        label->setText(QApplication::translate("Janela_Principal", "+", Q_NULLPTR));
        label_3->setText(QApplication::translate("Janela_Principal", "j", Q_NULLPTR));
        label_6->setText(QApplication::translate("Janela_Principal", "Numero Complexo 2  ", Q_NULLPTR));
        label_5->setText(QApplication::translate("Janela_Principal", "+", Q_NULLPTR));
        label_4->setText(QApplication::translate("Janela_Principal", "j", Q_NULLPTR));
        label_7->setText(QApplication::translate("Janela_Principal", "Resultado Complexo  ", Q_NULLPTR));
        label_8->setText(QApplication::translate("Janela_Principal", "+", Q_NULLPTR));
        label_9->setText(QApplication::translate("Janela_Principal", "j", Q_NULLPTR));
        Soma->setText(QApplication::translate("Janela_Principal", "Somar", Q_NULLPTR));
        Subtrair->setText(QApplication::translate("Janela_Principal", "Subrair", Q_NULLPTR));
        Dividir->setText(QApplication::translate("Janela_Principal", "Dividir", Q_NULLPTR));
        Multiplicar->setText(QApplication::translate("Janela_Principal", "Multiplicar", Q_NULLPTR));
        label_18->setText(QApplication::translate("Janela_Principal", "Calculos de El\303\251trica", Q_NULLPTR));
        label_19->setText(QApplication::translate("Janela_Principal", "Tens\303\243o        ", Q_NULLPTR));
        label_20->setText(QApplication::translate("Janela_Principal", "+", Q_NULLPTR));
        label_21->setText(QApplication::translate("Janela_Principal", "j", Q_NULLPTR));
        label_22->setText(QApplication::translate("Janela_Principal", "Corrente     ", Q_NULLPTR));
        label_23->setText(QApplication::translate("Janela_Principal", "+", Q_NULLPTR));
        label_24->setText(QApplication::translate("Janela_Principal", "j", Q_NULLPTR));
        label_25->setText(QApplication::translate("Janela_Principal", "Imped\303\242ncia", Q_NULLPTR));
        label_26->setText(QApplication::translate("Janela_Principal", "+", Q_NULLPTR));
        label_27->setText(QApplication::translate("Janela_Principal", "j", Q_NULLPTR));
        label_44->setText(QApplication::translate("Janela_Principal", "Pot\303\252ncia     ", Q_NULLPTR));
        label_46->setText(QApplication::translate("Janela_Principal", "+", Q_NULLPTR));
        label_45->setText(QApplication::translate("Janela_Principal", "j", Q_NULLPTR));
        Calcular_Eletrica->setText(QApplication::translate("Janela_Principal", "Calcular", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Janela_Principal: public Ui_Janela_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA_PRINCIPAL_H
