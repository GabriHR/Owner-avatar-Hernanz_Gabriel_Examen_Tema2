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