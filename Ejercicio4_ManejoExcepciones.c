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