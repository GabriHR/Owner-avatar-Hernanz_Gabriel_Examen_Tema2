#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Definición de la clase Asistencia
class Asistencia {
public:
    string fecha;
    string materia;
    string estado;

    // Constructor de la clase Asistencia
    Asistencia(string fecha, string materia, string estado)
            : fecha(fecha), materia(materia), estado(estado) {}
};

// Definición de la estructura Estudiante
struct Estudiante {
    string nombre;
    int edad;
    float promedio;
    vector<Asistencia> asistencias; // Agregar un vector de Asistencia a la estructura Estudiante
};

// Función para registrar la asistencia de un estudiante
void registrarAsistencia(Estudiante& estudiante, const Asistencia& asistencia) {
    estudiante.asistencias.push_back(asistencia);
}

// Función para mostrar la asistencia de un estudiante
void mostrarAsistencia(const Estudiante& estudiante) {
    cout << "Asistencia para el estudiante " << estudiante.nombre << ":\n";

    for (const Asistencia& asistencia : estudiante.asistencias) {
        cout << "Fecha: " << asistencia.fecha << "\n";
        cout << "Materia: " << asistencia.materia << "\n";
        cout << "Estado: " << asistencia.estado << "\n\n";
    }
}