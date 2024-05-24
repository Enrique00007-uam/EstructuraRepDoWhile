#include <iostream>
#include <variables.h>

using namespace std;



void menu();
void addNumbers();
void showNumbers();
void sum();
void inicializar();

void menu() {
    system("cls||clear");

    cout << "1. Ingresar numeros (impares)" << endl;
    cout << "2. Mostrar numeros ingresados" << endl;
    cout << "3. Sumar numeros ingresados" << endl;
    cout << "4. Salir" << endl;
}

void addNumbers() {
    system("cls||clear");

    cout << "Ingresar los numeros a calcular" << endl;
    int num;
    cin >> num;

    if (num % 2 != 0) {
        numbers[posicion] = num;
        posicion++;
    } else {
        cout << "Solo se permiten numeros impares." << endl;
    }

    system("pause");
}

void showNumbers() {
    system("cls||clear");

    cout << "Los numeros ingresados fueron: " << endl;
    
    if (posicion == 0) {
        cout << "No se han ingresado numeros." << endl;
    } else {
        int i = 0;
        do {
            cout << numbers[i] << " ";
            i++;
        } while (i < posicion);
    }
    
    cout << endl;

    system("pause");
}

void sum() {
    system("cls||clear");

    suma = 0;

    if (posicion == 0) {
        cout << "No se han ingresado numeros para sumar." << endl;
    } else {
        int i = 0;
        do {
            suma += numbers[i];
            i++;
        } while (i < posicion);
    }

    cout << "La suma de los numeros impares es de: " << suma << endl;

    system("pause");
}

void inicializar() {
    int op = 0;
    while (op != 4) {
        menu();
        cin >> op;
        switch (op) {
        case 1:
            addNumbers();
            break;
        case 2:
            showNumbers();
            break;
        case 3:
            sum();
            break;
        case 4:
            cout << "Adios" << endl;
            break;
        default:
            cout << "Opcion invalida. Intente de nuevo." << endl;
            break;
        }
    }
}


