#ifndef INTERFAZ_H
#define INTERFAZ_H
#pragma once
#include <iostream>
#include <string>

using namespace std;

struct ClientData {
    string indentification;
    string name;
	int age;

};

struct ClientDataAsi {
	int asiento;
};

struct FlightData {
	string origen;
	string destino;
	string hora;
	string hora2;
	string fecha;
	string destino2;
	int canScale;
	int cost;
	string h;
	string m;
};


class Interfaz {
public:
    static void bienvenida(string nombre) {
        cout << "Bienvenido a la aerolinea " << nombre << "!!" << endl;
    }
 

    static ClientData cliente() {
        ClientData data;
        cout << "Ingrese los datos del cliente" << endl;
        cout << "Nombre: ";
		cin >> data.name;
		cout << "Identificacion: ";
		cin >> data.indentification;
		cout << "Edad: ";
		cin >> data.age;



        return data;
    }

	static ClientDataAsi asiento() {
		ClientDataAsi dataAsi;
		cout << "Ingrese el asiento: ";
		cin >> dataAsi.asiento;
		return dataAsi;
	}
	//static int asientos() {
	//	int temp;
	//	cout << "Ingrese el asiento: ";
	//	cin >> temp;
	//	return temp;
	//}

	static FlightData flight() {
		FlightData datafli;
		cout << "Ingrese los datos del vuelo" << endl;
		cout << "Airport Origen: ";
		cin >> datafli.origen;
		cout << "Airport Destino: ";
		cin >> datafli.destino;
		cout << "Hora salida: ";
		cin >> datafli.hora;
		cout << "Hora llegada: ";
		cin >> datafli.hora2;
		cout << "Fecha: ";
		cin >> datafli.fecha;
		cout << "Destino : ";
		cin >> datafli.destino2;
		cout << "Escala: ";
		cin >> datafli.canScale;
		cout << "Costo: ";
		cin >> datafli.cost;
		cout << "Duracion en Horas: ";
		cin >> datafli.h;
		cout << "Duracion en Minutos: ";
		cin >> datafli.m;



		return datafli;
	}



    static void despedida() {
        cout << "Gracias por visitarnos" << endl;
    }

    static int menu() {
        int temp;
        cout << "Que desea hacer" << endl;
        cout << "1. Registrar un Avion nuevo" << endl;
        cout << "2. Mostrar Aviones disponibles" << endl;
        cout << "3. Mostrar Avion por ID" << endl;

        cout << "4. Registrar Cliente" << endl;
        cout << "5. Mostrar Clientes registrados" << endl;

        cout << "6. Mostrar Tripulacion" << endl;

        cout << "7. Mostrar vuelos disponibles" << endl;
        cout << "8. Realizar un vuelo" << endl;

        cout << "9. Realizar una reserva" << endl;
        cout << "10. Mostrar reservas" << endl;
		cout << "11. Cancelar reserva" << endl;

        cout << "0. Salir" << endl;
        cin >> temp;
        return temp;
    }


    static void mostrarVuelos(string info) {
        cout << info << endl;
    }

    static void mostrarReservas(string info) {
        cout << "\n=== Reservas ===\n" << info << endl;
    }

    static void mostrarTripulacion(string info) {
        cout << "\n=== Personas Registradas ===\n" << info << endl;
    }
};
#endif

