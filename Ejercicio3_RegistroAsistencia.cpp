#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definicion de la estructura Asistencia
struct Asistencia {
    string fecha;
    string materia;
    string estado;

    // Constructor de la estructura Asistencia
    Asistencia(string fecha, string materia, string estado)
            : fecha(fecha), materia(materia), estado(estado) {}
};

// Definicion de la estructura Estudiante
struct Estudiante {
    string nombre;
    int edad;
    float promedio;
    vector<Asistencia> asistencias; // Nuevo miembro para almacenar asistencias

    // Funcion para registrar la asistencia del estudiante
    void registrarAsistencia(string fecha, string materia, string estado) {
        Asistencia nuevaAsistencia(fecha, materia, estado);
        asistencias.push_back(nuevaAsistencia);
    }

    // Funcion para mostrar la asistencia del estudiante
    void mostrarAsistencia() const {
        cout << "Asistencia para el estudiante " << nombre << ":\n";

        for (const Asistencia& asistencia : asistencias) {
            cout << "Fecha: " << asistencia.fecha << "\n";
            cout << "Materia: " << asistencia.materia << "\n";
            cout << "Estado: " << asistencia.estado << "\n\n";
        }
    }
};


