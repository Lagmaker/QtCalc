#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtCalc.h"

// includes
#include <QClipboard>





class QtCalc : public QMainWindow
{
    Q_OBJECT

public:
    QtCalc(QWidget *parent = nullptr);
    ~QtCalc();


// write down here all our prototipes       // https://doc.qt.io/qtvstools/qtvstools-qt-widgets-application.html
private slots:
    // math actions
    void on_plus_clicked();
    void on_minus_clicked();
    void on_multiply_clicked();
    void on_division_clicked();
    void on_modulus_clicked();

    // misc actions
    void on_clear_clicked();
    void on_copy_clicked();
    void on_as_num1_clicked();
    void on_as_num2_clicked();


    // menuBar
    // 
    // menuFile
    void on_actionResetSize_triggered();
    // menuTheme
    void on_actionDarkTheme_triggered();
    void on_actionLightTheme_triggered();
    
    


private:
    Ui::QtCalcClass ui;
};

