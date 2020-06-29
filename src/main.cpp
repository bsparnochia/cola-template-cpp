#include <iostream>
#include "Cola.h"
#include <string>

using namespace std;

int main(){
	Cola<string> pacientes;

	/* Ingreso de pacientes
	 * Nota: Siempre se mostrará el primer paciente ingresado
	 * hasta que haya llegado su turno
	 */
	pacientes.acolar("Giselle Metica");
	cout << "Ingresado el paciente : " << pacientes.getFrente() <<endl;
	pacientes.acolar("Damian Torres");
	cout << "Ingresado el paciente : " << pacientes.getFrente() <<endl;
	pacientes.acolar("Adrian Dominguez");
	cout << "Ingresado el paciente : " << pacientes.getFrente() <<endl;
	pacientes.acolar("Eugenia Tobal");
	cout << "Ingresado el paciente : " << pacientes.getFrente() <<endl;

	/* Llamado por turno */
	while (! pacientes.estaVacia()){
		cout << "Es el turno de : "<< pacientes.getFrente() << endl;
		pacientes.desacolar();
	}

	return 0;
}
