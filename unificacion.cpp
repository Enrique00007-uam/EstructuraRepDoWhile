#include <iostream> 
using namespace std;

int op;

void menu();
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();

void ejercicio1(){}

void ejercicio2(){

}

void ejercicio3(){}

void ejercicio4(){}

void ejercicio5(){}

void menu(){
    cout << "Elige una opcion: " << endl;
    cin >> op;

    cout <<  "1, ejercicio 1"  << endl;
    cout <<  "2, ejercicio 2"  << endl;
    cout <<  "3, ejercicio 3"  << endl;
    cout <<  "4, ejercicio 4"  << endl;
    cout <<  "5, ejercicio 5"  << endl;
     

   
    
 switch (op)
 {
 case 1:
    ejercicio1();
    break;
    case 2:
    ejercicio2();
    break;
    case 3:
    ejercicio3();
    break;
    case 4:
    ejercicio4();
    case 5:
    ejercicio5();
    break;
 
 default:
    break;
 }

}

int main(int argc, char const *argv[])
{
     menu();
    return 0;
}

