// ============================================================
//  SISTEMA DE CALIFICACIONES ESCOLARES
//  Practica #2 - Estructuras de Datos
//
//  NIVEL 5: Ciclo while
//  Tema: validacion de datos con repeticion
// ============================================================

#include <iostream>
#include <string>

using namespace std;

int main() {

    // ---------- Declaracion de variables ----------
    int    opcion;
    string nombre;
    int    edad;

    int    cantidad;        // cuantas calificaciones se van a registrar
    float  calificacion;    // la calificacion que se captura en cada vuelta
    float  suma;            // acumulador de todas las calificaciones
    float  promedio;
    int    aprobadas;       // contador de calificaciones aprobatorias
    int    reprobadas;      // contador de calificaciones reprobatorias
    float  masAlta;         // calificacion mayor, sin usar arreglos
    float  masBaja;         // calificacion menor, sin usar arreglos
    string estado;

    // ---------- Menu principal ----------
    cout << "=== SISTEMA DE CALIFICACIONES ===" << endl;
    cout << "1. Registrar estudiante"          << endl;
    cout << "2. Ver informacion del programa"  << endl;
    cout << "3. Salir"                         << endl;
    cout << "Opcion: ";
    cin >> opcion;

    cin.ignore();

    // ---------- Seleccion multiple con switch ----------
    switch (opcion) {

        case 1:
            cout << endl;
            cout << "----- REGISTRO DE ESTUDIANTE -----" << endl;

            cout << "Nombre del estudiante: ";
            getline(cin, nombre);

            // ---------- Validacion de la edad con while ----------
            cout << "Edad: ";
            cin >> edad;

            while (edad < 0 || edad > 120) {
                cout << "Edad invalida. Debe estar entre 0 y 120." << endl;
                cout << "Edad: ";
                cin >> edad;
            }

            // ---------- Validacion de la cantidad con while ----------
            cout << "Cuantas calificaciones deseas registrar? ";
            cin >> cantidad;

            while (cantidad <= 0) {
                cout << "Cantidad invalida. Debes registrar al menos una." << endl;
                cout << "Cuantas calificaciones deseas registrar? ";
                cin >> cantidad;
            }

            // Se inicializan los acumuladores y contadores
            suma       = 0;
            aprobadas  = 0;
            reprobadas = 0;
            masAlta    = 0;
            masBaja    = 10;

            // ---------- Ciclo for: captura de las n calificaciones ----------
            for (int i = 1; i <= cantidad; i++) {

                cout << "Calificacion " << i << ": ";
                cin >> calificacion;

                // ---------- Validacion de la calificacion con while ----------
                while (calificacion < 0 || calificacion > 10) {
                    cout << "Calificacion invalida. Debe estar entre 0 y 10." << endl;
                    cout << "Calificacion " << i << ": ";
                    cin >> calificacion;
                }

                // Se acumula la suma de todas las calificaciones
                suma = suma + calificacion;

                // Se cuentan las aprobatorias y las reprobatorias
                if (calificacion >= 6) {
                    aprobadas = aprobadas + 1;
                } else {
                    reprobadas = reprobadas + 1;
                }

                // Se busca la mas alta y la mas baja sin usar arreglos
                if (i == 1) {
                    masAlta = calificacion;
                    masBaja = calificacion;
                } else {
                    if (calificacion > masAlta) {
                        masAlta = calificacion;
                    }
                    if (calificacion < masBaja) {
                        masBaja = calificacion;
                    }
                }
            }

            // Calculo del promedio
            promedio = suma / cantidad;

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
            cout << "Nombre           : " << nombre     << endl;
            cout << "Edad             : " << edad       << " anios" << endl;
            cout << "Calificaciones   : " << cantidad   << endl;
            cout << "-------------------------------------------" << endl;
            cout << "PROMEDIO         : " << promedio   << endl;
            cout << "ESTADO           : " << estado     << endl;
            cout << "Calificacion mas alta: " << masAlta << endl;
            cout << "Calificacion mas baja: " << masBaja << endl;
            cout << "Aprobatorias     : " << aprobadas   << endl;
            cout << "Reprobatorias    : " << reprobadas  << endl;
            cout << "-------------------------------------------" << endl;
            break;

        case 2:
            cout << endl;
            cout << "----- INFORMACION DEL PROGRAMA -----" << endl;
            cout << "Sistema de Calificaciones Escolares"  << endl;
            cout << "Practica de la materia Estructuras de Datos" << endl;
            cout << endl;
            cout << "El programa registra el nombre y la edad de un"   << endl;
            cout << "estudiante y la cantidad de calificaciones que"   << endl;
            cout << "el usuario decida, calcula el promedio y"         << endl;
            cout << "determina su estado:"                             << endl;
            cout << "  Promedio mayor o igual a 9 : EXCELENTE"         << endl;
            cout << "  Promedio mayor o igual a 7 : APROBADO"          << endl;
            cout << "  Promedio mayor o igual a 6 : REGULAR"           << endl;
            cout << "  Promedio menor a 6         : REPROBADO"         << endl;
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
