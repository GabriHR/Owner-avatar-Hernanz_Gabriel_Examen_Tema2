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


