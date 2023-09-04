// guide to build static application
// https://wiki.qt.io/Build_Standalone_Qt_Application_for_Windows


#include "QtCalc.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    // dark theme for window application        // https://doc.qt.io/qt-6/qtquickcontrols-styles.html
    //QApplication::setStyle("fusion");
    


    QtCalc w;
    w.show();
    return a.exec();
}
