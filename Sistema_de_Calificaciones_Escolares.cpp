// ============================================================
//  SISTEMA DE CALIFICACIONES ESCOLARES
//  Practica #2 - Estructuras de Datos
//
//  NIVEL 3: Menu con switch-case
//  Tema: seleccion multiple
// ============================================================

#include <iostream>
#include <string>

using namespace std;

int main() {

    // ---------- Declaracion de variables ----------
    int    opcion;
    string nombre;
    int    edad;
    float  calificacion1;
    float  calificacion2;
    float  calificacion3;
    float  promedio;
    string estado;

    // ---------- Menu principal ----------
    cout << "=== SISTEMA DE CALIFICACIONES ===" << endl;
    cout << "1. Registrar estudiante"          << endl;
    cout << "2. Ver informacion del programa"  << endl;
    cout << "3. Salir"                         << endl;
    cout << "Opcion: ";
    cin >> opcion;

    // Se limpia el salto de linea que queda en el buffer
    // para que el getline del nombre funcione correctamente
    cin.ignore();

    // ---------- Seleccion multiple con switch ----------
    switch (opcion) {

        case 1:
            cout << endl;
            cout << "----- REGISTRO DE ESTUDIANTE -----" << endl;

            cout << "Nombre del estudiante: ";
            getline(cin, nombre);

            cout << "Edad: ";
            cin >> edad;

            // Validacion de la edad
            if (edad < 0 || edad > 120) {
                cout << "Edad invalida" << endl;
                return 1;
            }

            cout << "Calificacion 1: ";
            cin >> calificacion1;

            cout << "Calificacion 2: ";
            cin >> calificacion2;

            cout << "Calificacion 3: ";
            cin >> calificacion3;

            // Validacion de las calificaciones
            if (calificacion1 < 0 || calificacion1 > 10) {
                cout << "Error: la calificacion 1 debe estar entre 0 y 10" << endl;
                return 1;
            }

            if (calificacion2 < 0 || calificacion2 > 10) {
                cout << "Error: la calificacion 2 debe estar entre 0 y 10" << endl;
                return 1;
            }

            if (calificacion3 < 0 || calificacion3 > 10) {
                cout << "Error: la calificacion 3 debe estar entre 0 y 10" << endl;
                return 1;
            }

            // Calculo del promedio
            promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

            // Estado del estudiante segun su promedio
            if (promedio >= 9) {
                estado = "EXCELENTE";
            } else if (promedio >= 7) {
                estado = "APROBADO";
            } else if (promedio >= 6) {
                estado = "REGULAR (aprobado con lo minimo)";
            } else {
                estado = "REPROBADO";
            }

            // Resumen del estudiante
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
            cout << "ESTADO        : " << estado        << endl;
            cout << "-------------------------------------------" << endl;
            break;

        case 2:
            cout << endl;
            cout << "----- INFORMACION DEL PROGRAMA -----" << endl;
            cout << "Sistema de Calificaciones Escolares"  << endl;
            cout << "Practica de la materia Estructuras de Datos" << endl;
            cout << endl;
            cout << "El programa registra el nombre y la edad de un"  << endl;
            cout << "estudiante junto con sus tres calificaciones,"   << endl;
            cout << "calcula el promedio y determina su estado:"      << endl;
            cout << "  Promedio mayor o igual a 9 : EXCELENTE"        << endl;
            cout << "  Promedio mayor o igual a 7 : APROBADO"         << endl;
            cout << "  Promedio mayor o igual a 6 : REGULAR"          << endl;
            cout << "  Promedio menor a 6         : REPROBADO"        << endl;
            cout << "------------------------------------" << endl;
            break;

        case 3:
            cout << endl << "Saliendo del sistema. Hasta luego." << endl;
            break;

        default:
            cout << endl << "Opcion invalida. Elige 1, 2 o 3." << endl;
            break;
    }

    return 0;
}
