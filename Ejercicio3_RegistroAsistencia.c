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