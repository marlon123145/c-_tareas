// parcial02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// 🔹 Registrar estudiantes
void registrar(string nombres[], float notas[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << "Nombre del estudiante " << i + 1 << ": ";
        cin >> nombres[i];

        cout << "Nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
    }
}

// 🔹 Promedio
float promedio(float notas[], int cantidad) {
    float suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += notas[i];
    }
    return suma / cantidad;
}

// 🔹 Nota más alta
float mayor(float notas[], int cantidad) {
    float max = notas[0];
    for (int i = 1; i < cantidad; i++) {
        if (notas[i] > max) {
            max = notas[i];
        }
    }
    return max;
}

// 🔹 Nota más baja
float menor(float notas[], int cantidad) {
    float min = notas[0];
    for (int i = 1; i < cantidad; i++) {
        if (notas[i] < min) {
            min = notas[i];
        }
    }
    return min;
}

// 🔹 Mostrar aprobados
void aprobados(string nombres[], float notas[], int cantidad) {
    cout << "\nEstudiantes aprobados:\n";
    for (int i = 0; i < cantidad; i++) {
        if (notas[i] >= 70) {
            cout << nombres[i] << " - " << notas[i] << endl;
        }
    }
}

int main() {
    int cantidad;

    cout << "Ingrese la cantidad de estudiantes (maximo 20): ";
    cin >> cantidad;

    if (cantidad > 20) {
        cantidad = 20;
    }

    string nombres[20];
    float notas[20];

    int opcion;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Registrar estudiantes\n";
        cout << "2. Mostrar promedio\n";
        cout << "3. Nota mas alta\n";
        cout << "4. Nota mas baja\n";
        cout << "5. Estudiantes aprobados\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            registrar(nombres, notas, cantidad);
            break;

        case 2:
            cout << "Promedio: " << promedio(notas, cantidad) << endl;
            break;

        case 3:
            cout << "Nota mas alta: " << mayor(notas, cantidad) << endl;
            break;

        case 4:
            cout << "Nota mas baja: " << menor(notas, cantidad) << endl;
            break;

        case 5:
            aprobados(nombres, notas, cantidad);
            break;

        case 6:
            cout << "Saliendo del programa...\n";
            break;

        default:
            cout << "Opcion invalida\n";
        }

    } while (opcion != 6);

    return 0;
}