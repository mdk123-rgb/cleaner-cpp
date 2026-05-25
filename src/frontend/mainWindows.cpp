#include "mainWindow.h"

// Konstruktor - tutaj budujemy wygląd okna
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) // Wywołanie konstruktora klasy bazowej
{
    // Ustawiamy tytuł okna
    setWindowTitle("System Cleaner");

    // Ustawiamy domyślny rozmiar (Szerokość, Wysokość)
    resize(800, 600);

    /* Tutaj w przyszłości będziemy dodawać Twoje menu boczne, 
       przyciski i wykresy, o których rozmawialiśmy.
    */
}

// Destruktor - tutaj sprzątamy pamięć (na razie pusto)
MainWindow::~MainWindow()
{
}