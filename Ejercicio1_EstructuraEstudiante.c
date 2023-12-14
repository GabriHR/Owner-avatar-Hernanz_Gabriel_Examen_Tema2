#include <stdio.h>

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Función para mostrar la información del estudiante
void mostrarEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
}

int main() {
    // Crear una instancia de la estructura Estudiante
    struct Estudiante estudiante1;

    // Asignar valores a los campos de la estructura
    snprintf(estudiante1.nombre, sizeof(estudiante1.nombre), "Gabriel");
    estudiante1.edad = 18;
    estudiante1.promedio = 7.5;

    // Llamar a la función mostrarEstudiante para mostrar la información
    mostrarEstudiante(estudiante1);

    return 0;
}