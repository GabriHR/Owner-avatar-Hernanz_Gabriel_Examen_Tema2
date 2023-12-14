#include <iostream>
#include <string>
using namespace std;
// Definición de la estructura Estudiante
struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

// Función para mostrar la información del estudiante
void mostrarEstudiante(const Estudiante& estudiante) {
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
}

int main() {
    // Crear una instancia de la estructura Estudiante
    Estudiante estudiante1;

    // Asignar valores a los campos de la estructura
    estudiante1.nombre = "Gabriel";
    estudiante1.edad = 18;
    estudiante1.promedio = 7.5;

    // Llamar a la función mostrarEstudiante para mostrar la información
    mostrarEstudiante(estudiante1);

    return 0;
}
