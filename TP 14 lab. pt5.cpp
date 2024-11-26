#include <iostream>
using namespace std;

class Calculadora {
public:
    int sumar(int a, int b) { return a + b; }
    float sumar(float a, float b) { return a + b; }

    int restar(int a, int b) { return a - b; }
    float restar(float a, float b) { return a - b; }

    int multiplicar(int a, int b) { return a * b; }
    float multiplicar(float a, float b) { return a * b; }

    int dividir(int a, int b) { return a / b; }
    float dividir(float a, float b) { return a / b; }
};

int main() {
    Calculadora calc;
    cout << "Suma (int): " << calc.sumar(10, 5) << endl;
    cout << "Suma (float): " << calc.sumar(10.5f, 5.2f) << endl;

    cout << "Resta (int): " << calc.restar(10, 5) << endl;
    cout << "Resta (float): " << calc.restar(10.5f, 5.2f) << endl;

    cout << "Multiplicación (int): " << calc.multiplicar(10, 5) << endl;
    cout << "Multiplicación (float): " << calc.multiplicar(10.5f, 5.2f) << endl;

    cout << "División (int): " << calc.dividir(10, 5) << endl;
    cout << "División (float): " << calc.dividir(10.5f, 5.2f) << endl;

    return 0;
}

