// calificaciones.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

int main()
{
    std::cout << "calculo de calificaciones\n";
    cout << "Ingrese cantidad de estudiantes: \n";
    int cantidad;
    cin >> cantidad;
    cin.ignore();
 
    cout << left << setw(20) << "Estudiante"
        << setw(10) << "Nota1"
        << setw(10) << "Nota2"
        << setw(10) << "Nota3"
        << setw(10) << "Nota4"
        << setw(12) << "Promedio"
        << setw(12) << "Estatus" << endl;

    for (int i = 1; i <= cantidad; i++) {
        string nombre;

        cout << "Ingrese el nombre del estudiante: ";
        cin >> nombre;

        double suma = 0;
        double notas[4];
        double nota;

        for (int j = 0; j < 4; j++) {
            cout << "Ingrese la nota: " << j + 1 << ": ";
            cin >> notas[j];
            suma += notas[j];



        }
        double promedio = suma / 4;
        string estatus;
        cout << "estudiante " << nombre << endl;
        cout << "promedio " << promedio << endl;

        if (promedio >= 70) {
            cout << " estatus:  aprobado! \n";
        }
        else {
            cout << "estatus: reprobado \n";

        }
        std::cout << "calculo de calificaciones\n";
        cout << left << setw(20) << nombre
            << setw(10) << notas[0]
            << setw(10) << notas[1]
            << setw(10) << notas[2]
            << setw(10) << notas[3]
            << setw(12) << promedio
            << setw(12) << estatus
            << endl;
    }
    return 0;
      
    

}

