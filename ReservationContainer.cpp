#include "ReservationContainer.h"

ReservationContainer::ReservationContainer() :Container()
{
	id = 1;
	dummy = new ReservationNodo();
	airplane = new Airplane();

}

ReservationContainer::~ReservationContainer()
{
	delete dummy;
}

string ReservationContainer::toString()
{
	return mostrar();
}

void ReservationContainer::add(Reservation* r)
{
	r->setId(id);
	agregar(new ReservationNodo(r));
	id++;

}
void ReservationContainer::deleteReservation(int id)
{
    Nodo* actual = dummy;
    while (actual->getSiguiente() != nullptr) {
        ReservationNodo* nodoRes = (ReservationNodo*)actual->getSiguiente();
        if (nodoRes->getReservation()->getId() == id) {

            // Obtener cliente y avión de la reserva
            Client* cliente = nodoRes->getReservation()->getClient();
            Airplane* airplane = nodoRes->getReservation()->getFlight()->getAirplane();

            
            int* asientosReservados = cliente->gettAllSeats(); 
            int cantidadAsientos = cliente->getCan(); // Método que devuelve cuántos asientos tiene el cliente

            // Liberar los asientos en el avión
            for (int i = 0; i < cantidadAsientos; i++) {
                airplane->setSeat(asientosReservados[i], 0); // Marcar asiento como disponible
            }

            // Limpiar asientos del cliente
            cliente->clearSeats();

            // Eliminar la reserva de la lista
            Nodo* temp = nodoRes;
            actual->setSiguiente(nodoRes->getSiguiente());
            delete temp;

            cout << "Reserva cancelada y asientos liberados." << endl;
            return;
        }
        actual = actual->getSiguiente();
    }
    cout << "Reserva no encontrada." << endl;
}







