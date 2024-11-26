#include <iostream>
#include <vector>
using namespace std;

class Mesa {
public:
    int comensales;
    bool ocupada;

    Mesa(int c) : comensales(c), ocupada(false) {}

    void reservar() {
        if (!ocupada) {
            ocupada = true;
            cout << "Mesa reservada." << endl;
        } else {
            cout << "Mesa ya ocupada." << endl;
        }
    }

    void liberar() {
        if (ocupada) {
            ocupada = false;
            cout << "Mesa liberada." << endl;
        } else {
            cout << "Mesa ya libre." << endl;
        }
    }
};

class Restaurante {
private:
    vector<Mesa> mesas;

public:
    void agregarMesa(int comensales) {
        mesas.push_back(Mesa(comensales));
    }

    int contarMesasLibres() {
        int libres = 0;
        for (int i = 0; i < mesas.size(); ++i) {
            if (!mesas[i].ocupada) {
                libres++;
            }
        }
        return libres;
    }

    void reservarMesa(int index) {
        if (index >= 0 && index < mesas.size()) {
            mesas[index].reservar();
        } else {
            cout << "Índice de mesa no válido." << endl;
        }
    }

    void liberarMesa(int index) {
        if (index >= 0 && index < mesas.size()) {
            mesas[index].liberar();
        } else {
            cout << "Índice de mesa no válido." << endl;
        }
    }
};

int main() {
    Restaurante restaurante;
    restaurante.agregarMesa(4);
    restaurante.agregarMesa(2);
    restaurante.agregarMesa(6);

    cout << "Mesas libres: " << restaurante.contarMesasLibres() << endl;

    restaurante.reservarMesa(0);
    cout << "Mesas libres: " << restaurante.contarMesasLibres() << endl;

    restaurante.liberarMesa(0);
    cout << "Mesas libres: " << restaurante.contarMesasLibres() << endl;

    return 0;
}

