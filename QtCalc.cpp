#include "QtCalc.h"

QtCalc::QtCalc(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

QtCalc::~QtCalc()
{}



// calculator realization
int firstNum, secondNum, result;


// QClipboard class manages memory by itself !!!
QClipboard* clipboard = QGuiApplication::clipboard();         


// plus
void QtCalc::on_plus_clicked()
{
    int firstNum = ui.textbox1->text().toInt();     // textbox1 to var firstNum
    int secondNum = ui.textbox2->text().toInt();    // textbox2 to var secondNum
    result = firstNum + secondNum;
    ui.textbox3->setText(QString::number(result));  // setText prints result converted to QString to textbox3 
}

// minus
void QtCalc::on_minus_clicked()
{
    int firstNum = ui.textbox1->text().toInt();     // textbox1 to var firstNum
    int secondNum = ui.textbox2->text().toInt();    // textbox2 to var secondNum
    result = firstNum - secondNum;
    ui.textbox3->setText(QString::number(result));  // setText prints result converted to QString to textbox3 
}

// multiply
void QtCalc::on_multiply_clicked()
{
    int firstNum = ui.textbox1->text().toInt();     // textbox1 to var firstNum
    int secondNum = ui.textbox2->text().toInt();    // textbox2 to var secondNum
    result = firstNum * secondNum;
    ui.textbox3->setText(QString::number(result));  // setText prints result converted to QString to textbox3 
}

// division
void QtCalc::on_division_clicked()
{
    int firstNum = ui.textbox1->text().toInt();     // textbox1 to var firstNum
    int secondNum = ui.textbox2->text().toInt();    // textbox2 to var secondNum

    if (secondNum == 0) // cant devide on 0
    {
        result = 0; // avoid "as_num1" setting last result, not 0
        ui.textbox3->setText("cant divide on 0");
    }
    else // normal situation
    {
        result = firstNum / secondNum;
        ui.textbox3->setText(QString::number(result));  // setText prints result converted to QString to textbox3 
    }
}

// modulus
void QtCalc::on_modulus_clicked()
{
    int firstNum = ui.textbox1->text().toInt();     // textbox1 to var firstNum
    int secondNum = ui.textbox2->text().toInt();    // textbox2 to var secondNum

    if (secondNum == 0) // cant modulus on 0
    {
        result = 0; // avoid "as_num1" setting last result, not 0
        ui.textbox3->setText("cant modulus on 0");
    }
    else // normal situation
    {
        result = firstNum % secondNum;
        ui.textbox3->setText(QString::number(result));  // setText prints result converted to QString to textbox3 
    }
}


// clear
void QtCalc::on_clear_clicked()
{
    ui.textbox1->setText("");  // clear textbox1
    ui.textbox2->setText("");  // clear textbox2
    ui.textbox3->setText("");  // clear textbox3
}

// copy
void QtCalc::on_copy_clicked()
{
    //ui.textbox3->copy();  // fail   // no idea what is "copy"

    clipboard->setText(ui.textbox3->text()); // clear textbox1    
}

// result as num 1
void QtCalc::on_as_num1_clicked()
{
    int firstNum = result;
    ui.textbox1->setText(QString::number(firstNum));    // result to textbox1
}

// result as num 2
void QtCalc::on_as_num2_clicked()
{
    int secondNum = result;
    ui.textbox2->setText(QString::number(secondNum));  // result to textbox2
}


////// File
// actionResetSize
void QtCalc::on_actionResetSize_triggered()
{    
    // Qwidget cuz it is correct position      // QtCals::geometry is inccorect
    QtCalc::setGeometry(QWidget::geometry().x(), QWidget::geometry().y(), 292, 388);    // reset size of window
}

////// Theme    // useful https://successfulsoftware.net/2021/03/31/how-to-add-a-dark-theme-to-your-qt-application/
// actionDarkTheme
void QtCalc::on_actionDarkTheme_triggered()
{
    // if not working u need to set ur windows theme to dark    // maybe i will fix this later
    QApplication::setStyle("fusion");   // u can use original one with "windows" but it looks ugly  // so i choose this modern one
}
// actionLightTheme
void QtCalc::on_actionLightTheme_triggered()
{
    QApplication::setStyle("windowsvista"); // old windows style, do not support dark theme
}








