// ============================================================
//  SISTEMA DE CALIFICACIONES ESCOLARES
//  Practica #4 - Estructuras de Datos
//
//  NIVEL 7: Funciones
//  Tema: Crear funciones reestructurar el code
// ============================================================

#include <iostream>
#include <string>
#include <climits>   // INT_MAX

using namespace std;

// ---------- Prototipos ----------
void   mostrarMenu();                              // imprime el menu
int    leerEntero(string mensaje, int min, int max);   // pide y valida un entero
float  leerCalificacion(int numero);                   // pide y valida una calificacion (0-10)
float  calcularPromedio(float suma, int n);            // retorna suma / n
string obtenerEstado(float promedio);                  // retorna "EXCELENTE", "APROBADO", ...
void   registrarEstudiante();                          // todo el flujo de la opcion 1
void   mostrarInformacion();                           // opcion 2

// ============================================================
int main() {
    int opcion;

    do {
        mostrarMenu();
        opcion = leerEntero("Opcion: ", 1, 4);

        switch (opcion) {
            case 1:
            case 4:
                registrarEstudiante();
                break;
            case 2:
                mostrarInformacion();
                break;
            case 3:
                cout << endl << "Saliendo del sistema. Hasta luego." << endl;
                break;
        }

    } while (opcion != 3);

    return 0;
}

// ============================================================
//  Muestra el menu y regresa una opcion ya validada (1-4)
// ============================================================
void mostrarMenu() {
    cout << endl;
    cout << "=== SISTEMA DE CALIFICACIONES ===" << endl;
    cout << "1. Registrar estudiante"          << endl;
    cout << "2. Ver informacion del programa"  << endl;
    cout << "3. Salir"                         << endl;
    cout << "4. Registrar otro estudiante"     << endl;
}

// ============================================================
//  Pide un entero y lo repite hasta que este entre min y max
// ============================================================
int leerEntero(string mensaje, int min, int max) {
    int valor;
    cout << mensaje;
    cin >> valor;

    while (valor < min || valor > max) {
        cout << "Valor invalido. Debe estar entre " << min << " y " << max << "." << endl;
        cout << mensaje;
        cin >> valor;
    }
    return valor;
}

// ============================================================
//  Pide la calificacion numero "numero" y la valida (0-10)
// ============================================================
float leerCalificacion(int numero) {
    float calificacion;
    cout << "Calificacion " << numero << ": ";
    cin >> calificacion;

    while (calificacion < 0 || calificacion > 10) {
        cout << "Calificacion invalida. Debe estar entre 0 y 10." << endl;
        cout << "Calificacion " << numero << ": ";
        cin >> calificacion;
    }
    return calificacion;
}

// ============================================================
float calcularPromedio(float suma, int n) {
    return suma / n;
}

// ============================================================
string obtenerEstado(float promedio) {
    if (promedio >= 9) return "EXCELENTE";
    if (promedio >= 7) return "APROBADO";
    if (promedio >= 6) return "REGULAR (aprobado con lo minimo)";
    return "REPROBADO";
}

// ============================================================
//  Flujo completo de registro de un estudiante
// ============================================================
void registrarEstudiante() {
    string nombre;
    int    edad, cantidad;
    float  calificacion;
    float  suma = 0, masAlta = 0, masBaja = 10;
    int    aprobadas = 0, reprobadas = 0;

    cout << endl;
    cout << "----- REGISTRO DE ESTUDIANTE -----" << endl;

    cin.ignore();   // limpia el salto de linea que dejo el menu
    cout << "Nombre del estudiante: ";
    getline(cin, nombre);

    edad     = leerEntero("Edad: ", 0, 120);
    cantidad = leerEntero("Cuantas calificaciones deseas registrar? ", 1, INT_MAX);

    for (int i = 1; i <= cantidad; i++) {
        calificacion = leerCalificacion(i);
        suma += calificacion;

        if (calificacion >= 6) aprobadas++;
        else                   reprobadas++;

        if (i == 1 || calificacion > masAlta) masAlta = calificacion;
        if (i == 1 || calificacion < masBaja) masBaja = calificacion;
    }

    float  promedio = calcularPromedio(suma, cantidad);
    string estado   = obtenerEstado(promedio);

    cout << endl;
    cout << "-------------------------------------------" << endl;
    cout << "            RESUMEN DEL ESTUDIANTE         " << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Nombre           : " << nombre   << endl;
    cout << "Edad             : " << edad     << " años" << endl;
    cout << "Calificaciones   : " << cantidad << endl;
    cout << "-------------------------------------------" << endl;
    cout << "PROMEDIO         : " << promedio << endl;
    cout << "ESTADO           : " << estado   << endl;
    cout << "Calificacion mas alta: " << masAlta << endl;
    cout << "Calificacion mas baja: " << masBaja << endl;
    cout << "Aprobatorias     : " << aprobadas  << endl;
    cout << "Reprobatorias    : " << reprobadas << endl;
    cout << "-------------------------------------------" << endl;
}

// ============================================================
void mostrarInformacion() {
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
}
