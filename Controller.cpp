#include "Controller.h"


#include <iostream>
using namespace std;

Controller::Controller()
{
    clientContainer = new ClientContainer();
    airplane = new Airplane();
	airplaneContainer = new AirplaneContainer();
	client = new Client();
	airline = new Airline();
}

void Controller::start()
{
    Interfaz::bienvenida("");
    int opcion = 0;

    do
    {
        opcion = Interfaz::menu();
        switch (opcion)
        {
        case 1:
        {
            system("cls");
            airline->doNewAirplane();
            system("pause");
            system("cls");
            break;
        }
        case 2:
        {
            system("cls");
            airline->showAirplanes();
            system("pause");
            system("cls");
            break;
        }
        case 3:
        {
            system("cls");
            airline->getAirplaneById();
            system("pause");
            system("cls");
            break;
        }
        case 4:
        {
            system("cls");
            airline->doNewClient();
            system("pause");
            system("cls");
            break;
        }
        case 5:
        
            system("cls");
            airline->showClients();
            system("pause");
            system("cls");
            break;
        
        case 6:
        {
            system("cls");
            airline->showTripulacion();
            system("pause");
            system("cls");
            break;
        }
        case 7:
        {
            system("cls");
            airline->showSchedule();
            system("pause");
            system("cls");
            break;
        }
        case 8:
        {
            system("cls");
            airline->doNewSchedule();
            system("pause");
            system("cls");
            break;
        }
        case 9:
        {
            system("cls");
            airline->doNewReservation();
            system("pause");
            system("cls");
            break;
        }
        case 10:
        {
            system("cls");
            airline->showReservations();
            system("pause");
            system("cls");
            break;
        }
		case 11:
		{
			system("cls");
			airline->deleteReservation();
			system("pause");
			system("cls");
			break;
		}
        case 0:
        {
            Interfaz::despedida();
            break;
        }
        default:
        {
            cout << "Opción no válida. Intente de nuevo.\n";
            system("pause");
            system("cls");
            break;
        }
        }
    } while (opcion != 0);
}


Controller::~Controller()
{
	delete clientContainer;
	delete airplane;
	delete client;
	delete airline;
	delete airplaneContainer;

}