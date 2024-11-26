#include <iostream>
#include <cmath>
using namespace std;

class Figura {
public:
    string color;
    int x, y;

    Figura(string c, int x_pos, int y_pos) : color(c), x(x_pos), y(y_pos) {}

    virtual void calcularArea() = 0;
    virtual void calcularPerimetro() = 0;
};

class Circulo : public Figura {
public:
    int radio;

    Circulo(string c, int x_pos, int y_pos, int r) : Figura(c, x_pos, y_pos), radio(r) {}

    void calcularArea() {
        cout << "Área del círculo: " << M_PI * radio * radio << endl;
    }

    void calcularPerimetro() {
        cout << "Perímetro del círculo: " << 2 * M_PI * radio << endl;
    }
};

class Rectangulo : public Figura {
public:
    int ancho, alto;

    Rectangulo(string c, int x_pos, int y_pos, int a, int h) : Figura(c, x_pos, y_pos), ancho(a), alto(h) {}

    void calcularArea() {
        cout << "Área del rectángulo: " << ancho * alto << endl;
    }

    void calcularPerimetro() {
        cout << "Perímetro del rectángulo: " << 2 * (ancho + alto) << endl;
    }
};

class Triangulo : public Figura {
public:
    int base, altura;

    Triangulo(string c, int x_pos, int y_pos, int b, int h) : Figura(c, x_pos, y_pos), base(b), altura(h) {}

    void calcularArea() {
        cout << "Área del triángulo: " << 0.5 * base * altura << endl;
    }

    void calcularPerimetro() {
        cout << "Perímetro del triángulo: " << "No implementado" << endl;
    }
};

int main() {
    Circulo circulo("Rojo", 0, 0, 5);
    circulo.calcularArea();
    circulo.calcularPerimetro();

    Rectangulo rectangulo("Azul", 0, 0, 4, 6);
    rectangulo.calcularArea();
    rectangulo.calcularPerimetro();

    Triangulo triangulo("Verde", 0, 0, 3, 4);
    triangulo.calcularArea();
    triangulo.calcularPerimetro();

    return 0;
}

