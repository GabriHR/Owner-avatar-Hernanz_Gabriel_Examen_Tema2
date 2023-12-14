#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura Asistencia
struct Asistencia {
    char fecha[20];
    char materia[50];
    char estado[20];
};

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    struct Asistencia* asistencias; // Puntero a la lista de asistencias
    int num_asistencias; // Número actual de asistencias
    int capacidad_asistencias; // Capacidad máxima de asistencias
};

// Función para inicializar un estudiante
void inicializarEstudiante(struct Estudiante* estudiante, const char* nombre, int edad, float promedio, int capacidad_asistencias) {
    strcpy(estudiante->nombre, nombre);
    estudiante->edad = edad;
    estudiante->promedio = promedio;
    estudiante->asistencias = malloc(capacidad_asistencias * sizeof(struct Asistencia));
    estudiante->num_asistencias = 0;
    estudiante->capacidad_asistencias = capacidad_asistencias;
}

// Función para liberar la memoria de las asistencias de un estudiante
void liberarEstudiante(struct Estudiante* estudiante) {
    free(estudiante->asistencias);
}

// Función para registrar la asistencia de un estudiante
void registrarAsistencia(struct Estudiante* estudiante, const char* fecha, const char* materia, const char* estado) {
    if (estudiante->num_asistencias < estudiante->capacidad_asistencias) {
        struct Asistencia nuevaAsistencia;
        strcpy(nuevaAsistencia.fecha, fecha);
        strcpy(nuevaAsistencia.materia, materia);
        strcpy(nuevaAsistencia.estado, estado);

        estudiante->asistencias[estudiante->num_asistencias] = nuevaAsistencia;
        estudiante->num_asistencias++;
    } else {
        printf("Error: No hay suficiente espacio para más asistencias.\n");
    }
}

// Función para mostrar la asistencia de un estudiante
void mostrarAsistencia(const struct Estudiante* estudiante) {
    printf("Asistencia para el estudiante %s:\n", estudiante->nombre);

    for (int i = 0; i < estudiante->num_asistencias; i++) {
        printf("Fecha: %s\n", estudiante->asistencias[i].fecha);
        printf("Materia: %s\n", estudiante->asistencias[i].materia);
        printf("Estado: %s\n\n", estudiante->asistencias[i].estado);
    }
}

int main() {
    // Crear una instancia de la estructura Estudiante
    struct Estudiante estudiante1;
    inicializarEstudiante(&estudiante1, "Gabriel", 18, 7.5, 10);

    // Registrar asistencia para el estudiante
    registrarAsistencia(&estudiante1, "2023-01-01", "Matematicas", "asistio");
    registrarAsistencia(&estudiante1, "2023-01-02", "Historia", "falta");
    registrarAsistencia(&estudiante1, "2023-01-03", "Fisica", "tardanza");

    // Mostrar la asistencia del estudiante
    mostrarAsistencia(&estudiante1);

    // Liberar la memoria de las asistencias
    liberarEstudiante(&estudiante1);

    return 0;
}