# ✈️ Sistema de Reservas de Vuelos (C++)

Proyecto de curso universitario en **C++ orientado a objetos**: un sistema de gestión de una aerolínea que administra vuelos, aviones, pilotos, azafatas, rutas y reservas de clientes, con menú de consola.

## ✨ Características

- **Gestión completa de una aerolínea**: aviones, pilotos, tripulación (azafatas), rutas, horarios, días de vuelo y clientes.
- **Reservas**: creación de reservas asociando cliente, vuelo, ruta, horario y tripulación asignada.
- **Estructuras de datos propias**: en lugar de usar contenedores de la STL (`std::list`, `std::vector`), el proyecto implementa su propia lista enlazada mediante las clases base `Nodo` y `Container`, de las cuales heredan los contenedores específicos (`ClientContainer`, `FlightContainer`, `AirplaneContainer`, `StewardessContainer`, `ReservationContainer`, etc.).
- **Arquitectura tipo MVC**: `Controller` coordina la lógica de negocio y `Interface` maneja la entrada/salida por consola, manteniendo el resto de clases (`Flight`, `Client`, `Airplane`, `Reservation`, ...) como modelo de datos.

## 🗂️ Estructura del proyecto

```
├── Nodo.h / Nodo.cpp                    # Nodo base para listas enlazadas
├── Container.h / Container.cpp          # Contenedor genérico (lista enlazada)
├── *Nodo.h / *Nodo.cpp                  # Nodos especializados (ClientNodo, FlightNodo, ...)
├── *Container.h / *Container.cpp        # Contenedores especializados
├── Airline / Airplane / Pilot / Stewardess / Client / Flight / Reservation / Route / Day / Hour / Category
│                                         # Clases de dominio del sistema
├── Controller.h / Controller.cpp        # Orquesta la lógica del programa
├── Interface.h / Interface.cpp          # Menú e interacción por consola
├── Main.cpp                             # Punto de entrada
└── Main.sln / Main.vcxproj              # Proyecto de Visual Studio
```

## ▶️ Compilación y ejecución

**Con Visual Studio:**
1. Abre `Main.sln`.
2. Compila y ejecuta (`Ctrl+F5`).

**Con g++ (línea de comandos):**
```bash
g++ -std=c++17 *.cpp -o reservas
./reservas
```

## 🎓 Contexto

Proyecto académico de Programación 1/2 en C++, enfocado en la aplicación de estructuras de datos lineales (listas enlazadas) implementadas manualmente y principios de programación orientada a objetos (herencia, polimorfismo, composición).