 /*Escriba el programa para leer 15 números negativos y convertirlos 
a positivos e imprimir dichos números.*/

#include <iostream>
using namespace std;

int NumPositivo(int num){
    if (num < 0)
        return -num;
    else 
        return num;
}
int main()
{
    int num, i = 0;
    cout << "Ingresa 15 numeros negativos: ";

    do{
        cin >> num;
        if (num != 0){
            cout << "El numero positivo es: " << NumPositivo(num) << endl;
            i++;

        }
    } while(num != 0 && i < 15); 

    
    return 0;
}


