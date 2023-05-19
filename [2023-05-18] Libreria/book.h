// Archivo para la clase original del libro.

#ifndef LIBRO_H_
#define LIBRO_H_
#include <string>
#include <sstream>
using namespace std;

class Book {
  private:
    string author, title, genre;
    int  year, month, day;
    int score;
  public: 
    Book(): author(""), title(""), genre(""), 
      year(0), month(0), day(0), score(0) {};  // Constructor default.

    // Métodos getters para los atributos.
    string get_author() {
      return author;
     };
    void print_author() {
      cout << "Hello";
    };
    string get_title() {
      return title;
     };
    string get_genre() {
      return genre;
     };
    int get_year() {
      return year;
     };
    int get_month() {
      return month;
     };
    int get_day() {
      return day;
     };
    int get_score() {
      return score;
    }
};

#endif

