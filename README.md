# Practicas de Estructuras de Datos

Repositorio de practicas de la materia **Estructuras de Datos**.

## Practica #1 - Fundamentos de C++

Archivo de trabajo: `Sistema_de_Calificaciones_Escolares.cpp`

Todo el avance se realiza sobre este unico archivo. Cada nivel queda registrado
como un commit independiente en el historial del repositorio.

### Nivel 1 - Estructura basica y declaracion de variables

Tema: `main`, tipos de datos, `cin` / `cout`.

- Programa base con `#include <iostream>` e `int main()`
- Variables: `string nombre`, `int edad`, `float calificacion1`,
  `float calificacion2`, `float calificacion3` y `float promedio`
- Captura de todos los datos con `cin`
- Calculo del promedio de las 3 calificaciones
- Impresion del resumen con `cout`

### Nivel 2 - Condicionales `if-else`

Tema: decisiones simples, anidadas y validacion de datos.

- Estado del alumno segun el promedio:
  - `>= 9` EXCELENTE
  - `>= 7` APROBADO
  - `>= 6` REGULAR (aprobado con lo minimo)
  - menor a 6 REPROBADO
- Validacion de la edad: si es menor a 0 o mayor a 120 imprime
  "Edad invalida" y termina con `return 1;`
- Validacion de que cada calificacion este entre 0 y 10; si alguna no lo esta,
  imprime un error y termina

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
