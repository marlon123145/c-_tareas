// programas_numeros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    std::cout << "programa que permita al usuario ingresar n cantidad de numeros.\n";
    int positivo;
    int negativos;
    int par;
    int impar;
    int cantidad;
    int numero;
    cout << "Ingrese la cantidad de numeros: \n";
    cin >> cantidad;
    positivo = 0;
    negativos = 0;
    par = 0;
    impar = 0;
    
    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese un numero: ";
        cin >> numero;
        if (numero > 0)
            positivo += 1;
        else if (numero < 0)
            negativos += 1;
        if (numero % 2 == 0)
            par += 1;
        else if (numero % 2 != 0)
            impar += 1;

    }
    cout << "Cantidad de numeros positivos: " << positivo << endl;
    cout << "Cantidad de numeros negativos: " << negativos << endl;
    cout << "Cantidad de numeros pares: " << par << endl;
    cout << "Cantidad de numeros impares: " << impar << endl;
}

