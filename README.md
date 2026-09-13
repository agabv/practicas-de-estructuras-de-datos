# Practicas de Estructuras de Datos

Repositorio de practicas de la materia **Estructuras de Datos**.

Archivo de trabajo: `Sistema_de_Calificaciones_Escolares.cpp`

Todo el avance se realiza sobre este unico archivo. Cada nivel queda registrado
como un commit independiente en el historial del repositorio.

## Practica #1

### Nivel 1 - Estructura basica y declaracion de variables
Tema: `main`, tipos de datos, `cin` / `cout`.
- Programa base con `#include <iostream>` e `int main()`
- Variables: `string nombre`, `int edad`, las calificaciones y el promedio
- Captura de todos los datos con `cin`
- Calculo del promedio e impresion del resumen con `cout`

### Nivel 2 - Condicionales `if-else`
Tema: decisiones simples, anidadas y validacion de datos.
- Estado segun el promedio: EXCELENTE (>=9), APROBADO (>=7),
  REGULAR (>=6) y REPROBADO (menor a 6)
- Validacion de la edad entre 0 y 120
- Validacion de que cada calificacion este entre 0 y 10

## Practica #2

### Nivel 3 - Menu con `switch-case`
Tema: seleccion multiple.
- Menu con las opciones registrar estudiante, ver informacion del
  programa y salir
- La opcion se lee desde teclado y se procesa con un bloque `switch`
- El caso `default` avisa cuando la opcion no es valida

### Nivel 4 - Ciclo `for`
Tema: repeticion y simplificador de calificaciones.
- Se eliminaron las tres calificaciones fijas
- El programa pregunta cuantas calificaciones se desean registrar
- Un ciclo `for` las captura una por una acumulando la suma
- Cuenta cuantas fueron aprobatorias y cuantas reprobatorias
- Encuentra la calificacion mas alta y la mas baja sin usar arreglos

## Como compilar y ejecutar

```bash
g++ -o sistema Sistema_de_Calificaciones_Escolares.cpp
./sistema
```

En Windows:

```bash
g++ -o sistema.exe Sistema_de_Calificaciones_Escolares.cpp
sistema.exe
```
