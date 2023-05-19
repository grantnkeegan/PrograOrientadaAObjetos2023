// Archivo para la librería que tendrá los libros.

#ifndef LIBRERIA_H_
#define LIBRERIA_H_
#include <string>
#include <sstream>
#include "book.h"
using namespace std;

const int MAX = 10000; // Constante de tamaño de arreglos.

class Library {
  private:
    Book * b[MAX]; // Apuntador para polimorfismo.
    int books_list; // El numero de libros en la librería.
    
  public:
    Library(): books_list(0) {}; // Constructor de la libreria.
    void book_examples(); 
    void print_examples();
    void new_book();
};

void Library::book_examples() {
  new Book("The Demon-Haunted World", "Carl Sagan", "Science", 1997, 07, 01, 100);
  books_list++;
}

void Library::print_examples() {

  //Ciclo que recorre el arreglo e imprime cada objeto.
  for (int i = 0; i < nomina; i++)
    cout << b[i] -> to_string();
}

#endif