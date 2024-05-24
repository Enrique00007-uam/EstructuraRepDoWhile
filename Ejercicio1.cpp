/*Realizar un programa que acumule (sume) valores ingresados por
teclado hasta ingresar el 9999 (no sumar dicho valor, indica que ha
finalizado la carga). Imprimir el valor acumulado e informar si dicho
valor es cero, mayor a cero o menor a cero.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int suma = 0;
    int valor;
    cout << "Ingrese un numero: ";
    cin >> valor;

    while (valor != 9999)
    {
        suma += valor;
        cout << "Ingrese un numero: ";
        cin >> valor;
    }

    cout << "La suma es: " << suma << endl;

    if (suma == 0) {
        cout << "La suma es cero." << endl;
    } else if (suma > 0) {
        cout << "La suma es mayor que cero." << endl;
    } else {
        cout << "La suma es menor que cero." << endl;
    }

    return 0;
}
