#include <iostream>
#include <vector>
using namespace std;

class Libro {
public:
    string titulo;
    int paginas;

    Libro(string t, int p) : titulo(t), paginas(p) {}

    void mostrar() {
        cout << "Titulo: " << titulo << ", Paginas: " << paginas << endl;
    }
};

class Biblioteca {
private:
    vector<Libro> libros;

public:
    void agregarLibro(Libro libro) {
        libros.push_back(libro);
    }

    void eliminarLibro(string titulo) {
        for (vector<Libro>::iterator it = libros.begin(); it != libros.end(); ++it) {
            if (it->titulo == titulo) {
                libros.erase(it);
                cout << "Libro '" << titulo << "' eliminado." << endl;
                return;
            }
        }
        cout << "Libro no encontrado." << endl;
    }

    void buscarLibro(string titulo) {
        for (int i = 0; i < libros.size(); ++i) {
            if (libros[i].titulo == titulo) {
                libros[i].mostrar();
                return;
            }
        }
        cout << "Libro no encontrado." << endl;
    }

    int calcularTotalPaginas() {
        int total = 0;
        for (int i = 0; i < libros.size(); ++i) {
            total += libros[i].paginas;
        }
        return total;
    }
};

int main() {
    Biblioteca biblioteca;
    biblioteca.agregarLibro(Libro("C++ para principiantes", 300));
    biblioteca.agregarLibro(Libro("JavaScript avanzado", 250));

    biblioteca.buscarLibro("C++ para principiantes");
    cout << "Total de paginas: " << biblioteca.calcularTotalPaginas() << endl;
    biblioteca.eliminarLibro("JavaScript avanzado");
    biblioteca.buscarLibro("JavaScript avanzado");

    return 0;
}

