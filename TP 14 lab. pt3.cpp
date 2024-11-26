#include <iostream>
#include <vector>
using namespace std;

class Empleado {
public:
    string nombre;
    float salario;
    string departamento;

    Empleado(string n, float s, string d) : nombre(n), salario(s), departamento(d) {}

    void mostrar() {
        cout << "Empleado: " << nombre << ", Salario: " << salario << ", Departamento: " << departamento << endl;
    }
};

class Empresa {
private:
    vector<Empleado> empleados;

public:
    void agregarEmpleado(Empleado emp) {
        empleados.push_back(emp);
    }

    float calcularNomina() {
        float total = 0;
        for (int i = 0; i < empleados.size(); ++i) {
            total += empleados[i].salario;
        }
        return total;
    }

    void empleadoConMayorSalario() {
        if (empleados.empty()) {
            cout << "No hay empleados." << endl;
            return;
        }

        Empleado mayor = empleados[0];
        for (int i = 1; i < empleados.size(); ++i) {
            if (empleados[i].salario > mayor.salario) {
                mayor = empleados[i];
            }
        }
        cout << "Empleado con mayor salario: " << mayor.nombre << " - " << mayor.salario << endl;
    }

    void listarEmpleadosPorDepartamento(string departamento) {
        bool encontrado = false;
        for (int i = 0; i < empleados.size(); ++i) {
            if (empleados[i].departamento == departamento) {
                empleados[i].mostrar();
                encontrado = true;
            }
        }
        if (!encontrado) {
            cout << "No hay empleados en el departamento " << departamento << endl;
        }
    }
};

int main() {
    Empresa empresa;
    empresa.agregarEmpleado(Empleado("Juan", 1500, "Ventas"));
    empresa.agregarEmpleado(Empleado("Ana", 2000, "Marketing"));

    cout << "Nomina total: " << empresa.calcularNomina() << endl;
    empresa.empleadoConMayorSalario();
    empresa.listarEmpleadosPorDepartamento("Ventas");

    return 0;
}

