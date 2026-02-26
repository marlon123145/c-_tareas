// montos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double prestamo;
    double tasa_anual;
    double tasa_mensual;
    int meses;
    double cuota;
    std::cout << "PRÉSTAMO (Cuota mensual con interés compuesto)\n";

    cout << "Ingrese el monto del prestamo: \n";
    cin >> prestamo;
    cout << "Ingrese la tasa de interes anual: \n";
    cin >> tasa_anual;
    cout << "Ingrese el plazo a meses: \n";
    cin >> meses;
    tasa_mensual = (tasa_anual / 100) / 12;
    cuota = prestamo * (tasa_mensual * pow(1 + tasa_mensual, meses)) /
        (pow(1 + tasa_mensual, meses) - 1);
    double monto_total = cuota * meses;
    double interes_total = monto_total - prestamo;

    cout << "Monto del prestamo: " << prestamo << endl;
    cout << "Interes total: " << interes_total << endl;
    cout << "Plazo en meses: " << meses << endl;
    cout << "Cuota mensual: " << cuota << endl;


}


