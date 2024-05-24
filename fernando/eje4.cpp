#include <iostream>

using namespace std;

// Estructura para el nodo de la lista enlazada
struct Nodo {
    int dato;
    Nodo* siguiente;
};

// Prototipos de funciones
void ingresarNumeros(Nodo*& cabeza);
void mostrarNumeros(Nodo* cabeza);
bool preguntarContinuar();
void limpiarLista(Nodo*& cabeza);

int main() {
    Nodo* cabeza = nullptr;

    do {
        ingresarNumeros(cabeza);
        mostrarNumeros(cabeza);
        limpiarLista(cabeza);
    } while (preguntarContinuar());

    return 0;
}

// Función para ingresar números
void ingresarNumeros(Nodo*& cabeza) {
    int num;
    Nodo* actual = cabeza;
    Nodo* nuevo = nullptr;

    do {
        cout << "Ingrese un número (o -1 para terminar): ";
        cin >> num;

        if (num != -1) {
            nuevo = new Nodo();
            nuevo->dato = num;
            nuevo->siguiente = nullptr;

            if (cabeza == nullptr) {
                cabeza = nuevo;
            } else {
                actual->siguiente = nuevo;
            }
            actual = nuevo;
        }
    } while (num != -1);
}

// Función para mostrar los números ingresados
void mostrarNumeros(Nodo* cabeza) {
    cout << "Números ingresados: ";
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        cout << actual->dato << " ";
        actual = actual->siguiente;
    }
    cout << endl;
}

// Función para preguntar si el usuario quiere continuar
bool preguntarContinuar() {
    char respuesta;
    cout << "¿Quiere continuar? (S/N): ";
    cin >> respuesta;
    return (respuesta == 'S' || respuesta == 's');
}

// Función para limpiar la lista enlazada
void limpiarLista(Nodo*& cabeza) {
    Nodo* actual = cabeza;
    Nodo* siguiente = nullptr;
    while (actual != nullptr) {
        siguiente = actual->siguiente;
        delete actual;
        actual = siguiente;
    }
    cabeza = nullptr;
}
