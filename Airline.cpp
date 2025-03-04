#include "Airline.h"

Airline::Airline()
{

	clientContainer = new ClientContainer();
	airplaneContainer = new AirplaneContainer();
	reservationContainer = new ReservationContainer();
	flightContainer = new FlightContainer();
	client = new Client();
	flight = new Flight();
	airplane = new Airplane();
	clientContainer->add(new Client("70326514", "Juan", 20));
	id = 0;
	airplaneContainer->add(new Airplane("AI-19"));
	airplaneContainer->add(new Airplane("AI-19"));
	airplaneContainer->add(new Airplane("AI-19"));
	airplaneContainer->add(new Airplane("BO-73"));
	airplaneContainer->add(new Airplane("BO-73"));
	airplaneContainer->add(new Airplane("AI-20"));
	airplaneContainer->add(new Airplane("AI-20"));
	airplaneContainer->add(new Airplane("ANT-1"));
	airplaneContainer->add(new Airplane("ANT-1"));

	pilot = new Pilot(40, "Juan", "Juan@gmail.com", 'M');
	stewardesContainer = new StewardessContainer();
	stewardesContainer->add(new Stewardess(30, "Maria", "Stewardess", "61234567", 3));
	stewardesContainer->add(new Stewardess(25, "Luisa", "Stewardess", "61806789", 3)); 

}

Airline::~Airline()
{
	delete clientContainer;
	delete airplaneContainer;
	delete reservationContainer;
	delete flightContainer;
	delete client;
	delete flight;
	delete airplane;
	delete pilot;
	delete stewardesContainer;

}

string Airline::toString()
{
	stringstream ss;
	ss << "Airline: " << id << endl;
	return ss.str();
}


void Airline::doNewAirplane()
{

	airplane = new Airplane();
	airplane->setAirplane(client);
	system("cls");

	


	airplaneContainer->add(airplane);
}



void Airline::showAirplanes()
{
	cout << airplaneContainer->toString() << endl;
}

void Airline::doNewClient()
{
	ClientData data = Interfaz::cliente();
	client = new Client(data.indentification,data.name,data.age);
	clientContainer->add(client);
}

void Airline::deleteReservation()
{
	int id;
	cout << "Reservas: " << endl;
	cout << reservationContainer->toString() << endl;
	cout << "Ingrese el ID de la reservacion: ";
	cin >> id;
	reservationContainer->deleteReservation(id);
}

void Airline::showClients()
{
	cout << clientContainer->toString() << endl;
}

void Airline::showTripulacion()
{
	cout << stewardesContainer->toString()<<pilot->toString();
}

void Airline::getAirplaneById()
{
	int id;
	cout << "Ingrese el ID del avion: ";
	cin >> id;
	Airplane* a = airplaneContainer->getAirplaneById(id);
	if (a)
	{
		cout << a->toString() << endl;
	}
	else
	{
		cout << "No se encontro el avion." << endl;
	}
}

void Airline::doNewSchedule()
{


	//Solicitar los datos del vuelo
	FlightData dataFlight = Interfaz::flight();
	hour = new Hour(dataFlight.hora, dataFlight.hora2);
	day = new Day(dataFlight.fecha);
	route = new Route(dataFlight.origen, dataFlight.destino, dataFlight.destino2,dataFlight.canScale,dataFlight.cost,dataFlight.h,dataFlight.m);
	flight = new Flight(stewardesContainer, pilot, hour, route, day);
	cout << "Escoge el avion: " << endl;
	cout << airplaneContainer->toString() << endl;
	int id;
	cout << "Ingrese el ID del avion: ";
	cin >> id;
	airplane=airplaneContainer->getAirplaneById(id);
	flight->setAirplane(airplane);
	flight->setClientCapacity(airplaneContainer->getAirplaneById(id)->getClientCapacity());
	flight->setID2(airplane->getID());
	flightContainer->add(flight);


}

void Airline::showSchedule()
{


	cout << flightContainer->toString() << endl;
}

void Airline::showReservations()
{
	cout << reservationContainer->toString() << endl;

}

void Airline::doNewReservation()
{
	cout << "Escoge el cliente: " << endl;
	cout << clientContainer->toString() << endl;

	int clientID;
	cout << "Ingrese el ID del cliente: ";
	cin >> clientID;

	client = clientContainer->getClientById(clientID);
	if (client == nullptr) {
		cout << "Error: Cliente no encontrado." << endl;
		return;
	}

	// Seleccionar Vuelo
	cout << flightContainer->toString() << endl;

	int flightID;
	cout << "Ingrese el ID del vuelo: ";
	cin >> flightID;

	flight = flightContainer->getFlightById(flightID);
	if (flight == nullptr) {
		cout << "Error: Vuelo no encontrado." << endl;
		return;
	}

	// Mostrar disponibilidad de asientos en el avión asociado al vuelo

	cout << airplane->showClientCapacity() << endl;

	// Pedir la cantidad de asientos a reservar
	int numSeats;
	cout << "Cuantos asientos desea reservar: ";
	cin >> numSeats;

	if (numSeats <= 0 || numSeats > flight->getClientCapacity()) {
		cout << "Error: Cantidad de asientos invalida." << endl;
		return;
	}
	airplane->setClientCapacity(flight->getClientCapacity());
	// Reservar Asientos
	for (int i = 0; i < numSeats; i++)
	{
		ClientDataAsi dataAsi = Interfaz::asiento();

		// Verificar si el asiento ya está ocupado
		if (airplane->getSeat(dataAsi.asiento) == 1) {
			cout << "Error: El asiento " << dataAsi.asiento << " ya está ocupado." << endl;
			i--; // Volver a pedir otro asiento
		}
		else {
			airplane->setSeat(dataAsi.asiento, 1); // Marcar asiento como ocupado
			client->setAsiento(dataAsi.asiento);
			
		}
	}

	reservationContainer->add(new Reservation(flight, client));
	cout << "Reserva realizada con éxito." << endl;
}









