#include <iostream>
#include <stdexcept>
using namespace std;
// Definición de la excepción personalizada
class MiExcepcion : public exception {
public:
    const char* what() const noexcept override {
        return "Ha ocurrido un error personalizado";
    }
};

// Función que puede lanzar la excepción personalizada
void funcionConExcepcion(bool lanzarExcepcion) {
    if (lanzarExcepcion) {
        throw MiExcepcion();
    } else {
        cout << "La funcion se ejecuto correctamente." << endl;
    }
}

int main() {
    try {
        // Llamada a la función que puede lanzar la excepción
        funcionConExcepcion(true);

    } catch (const MiExcepcion& e) {
        // Captura de la excepción personalizada
        cerr << "Excepcion atrapada: " << e.what() << endl;

    } catch (const exception& e) {
        // Captura de excepciones genéricas
        cerr << "Excepcion generica atrapada: " << e.what() << endl;

    } catch (...) {
        // Captura de cualquier otra excepción no manejada
        cerr << "Se ha producido una excepcion no manejada." << endl;
    }

    return 0;
}
