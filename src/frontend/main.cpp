#include <QApplication>
#include "mainWindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Tworzymy instancję Twojego okna
    MainWindow window;
    
    // Pokazujemy je na ekranie
    window.show();

    return app.exec();
}