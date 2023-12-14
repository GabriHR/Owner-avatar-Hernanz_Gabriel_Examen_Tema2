#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    char** materias; // Lista de materias
    int num_materias; // Número de materias
};

// Función para agregar una materia
void agregarMateria(struct Estudiante* estudiante, const char* materia) {
    estudiante->materias = realloc(estudiante->materias, sizeof(char*) * (estudiante->num_materias + 1));
    estudiante->materias[estudiante->num_materias] = malloc(strlen(materia) + 1);
    strcpy(estudiante->materias[estudiante->num_materias], materia);
    estudiante->num_materias++;
}

// Función para eliminar una materia
void eliminarMateria(struct Estudiante* estudiante, int index) {
    if (index < 0 || index >= estudiante->num_materias) {
        printf("Indice de materia invalido.\n");
        return;
    }

    free(estudiante->materias[index]);

    for (int i = index; i < estudiante->num_materias - 1; i++) {
        estudiante->materias[i] = estudiante->materias[i + 1];
    }

    estudiante->materias = realloc(estudiante->materias, sizeof(char*) * (estudiante->num_materias - 1));
    estudiante->num_materias--;
}

// Función para mostrar las materias
void mostrarMaterias(const struct Estudiante* estudiante) {
    printf("Materias para el estudiante %s:\n", estudiante->nombre);

    for (int i = 0; i < estudiante->num_materias; i++) {
        printf("%s\n", estudiante->materias[i]);
    }
}