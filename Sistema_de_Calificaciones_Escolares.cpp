// ============================================================
//  SISTEMA DE CALIFICACIONES ESCOLARES
//  Practica #1 - Estructuras de Datos
//
//  NIVEL 1: Estructura basica y declaracion de variables
//  Tema: main, tipos de datos, cin / cout
// ============================================================

#include <iostream>
#include <string>

using namespace std;

int main() {

    // ---------- Declaracion de variables ----------
    string nombre;
    int    edad;
    float  calificacion1;
    float  calificacion2;
    float  calificacion3;
    float  promedio;

    cout << "===========================================" << endl;
    cout << "    SISTEMA DE CALIFICACIONES ESCOLARES    " << endl;
    cout << "===========================================" << endl;
    cout << endl;

    // ---------- Captura de los datos del estudiante ----------
    cout << "Nombre del estudiante: ";
    getline(cin, nombre);

    cout << "Edad: ";
    cin >> edad;

    cout << "Calificacion 1: ";
    cin >> calificacion1;

    cout << "Calificacion 2: ";
    cin >> calificacion2;

    cout << "Calificacion 3: ";
    cin >> calificacion3;

    // ---------- Calculo del promedio ----------
    promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

    // ---------- Resumen de los datos ----------
    cout << endl;
    cout << "-------------------------------------------" << endl;
    cout << "            RESUMEN DEL ESTUDIANTE         " << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Nombre        : " << nombre        << endl;
    cout << "Edad          : " << edad          << " anios" << endl;
    cout << "Calificacion 1: " << calificacion1 << endl;
    cout << "Calificacion 2: " << calificacion2 << endl;
    cout << "Calificacion 3: " << calificacion3 << endl;
    cout << "-------------------------------------------" << endl;
    cout << "PROMEDIO      : " << promedio      << endl;
    cout << "-------------------------------------------" << endl;

    return 0;
}
