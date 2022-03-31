#include <iostream>
#include <string>

using namespace std;

int main() {

	//variables
	int opcion, repetidor, idEditar;

	// estructura del codigo y sus strings
	struct pacientes {

		string paciente, tratamiento, fecha;
		
		char descripcion [10000];
		int hora, CT /*CT = Cantidad de Tratamiento*/, PUT /*PU = Precio Unitario del Tratamiento*/,  PT /*PT = Precio Total*/;

		
	} datos[20];

	//menú

	cout << "*Bienvenido*" << endl << endl << endl;
	cout << "-----Ingrese una opcion-----" << endl << endl;
	cout << "1.- Agendar cita" << endl;
	cout << "2.- Eliminar cita -(BLOQUEADA)-" << endl;
	cout << "3.- salir del sistema" << endl;
	cout << "4.- Lista de citas vigentes -(BLOQUEADA)-" << endl;
	cout << "5.- Limpiar pantalla" << endl;

	cin >> opcion;


	system("cls");

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	// registro de cita


	switch (opcion) {

	case 1:
		do {
			for (int i = 0; i < 3; i++) {
				cout << "Favor de ingresar el nombre del paciente" << endl << endl;
				cin >> datos[i].paciente;

				cout << "Favor de ingresar la fecha de la cita (solo numeros utilizando el siguiente formato * Ejemplo: 00/00/00 *)" << endl << endl;
				cin >> datos[i].fecha;

				cout << "ingrese la hora del tratamiento (solo numeros usando las 24 horas), * Ejemplo: 13:32 *" << endl << endl;
				cin >> datos[i].hora;
				cout << "Favor de ingresar el tipo de tratamiento " << endl << endl;
				cin >> datos[i].tratamiento;

				cout << "ingrese la descripcion del tratamiento" << endl << endl;
				cin >> datos[i].descripcion;

				cout << "ingrese la cantidad de tratamiento requerido" << endl << endl;
				cin >> datos[i].CT;

				cout << "ingrese el precio unitario del tratamiento" << endl << endl;
				cin >> datos[i].PUT;



				system("cls");
			}

			for (int i = 0; i < 3; i++) {
				cout << "ID: " << i << endl;

				cout << "nombre del paciente: ";
				cout << datos[i].paciente << endl;

				cout << "tratamiento a realizar: ";
				cout << datos[i].tratamiento << endl;

				cout << "fecha citada: ";
				cout << datos[i].fecha << endl;

				cout << "hora citada: ";
				cout << datos[i].hora << endl;

				cout << "Descripcion del tratamiento: ";
				cout << datos[i].descripcion << endl;

				cout << "Cantidad de tratamiento: ";
				cout << datos[i].CT << endl;

				cout << "Precio unitario: ";
				cout << datos[i].PUT << endl;

				cout << "Precio Total: ";
				cout << datos[i].PT << endl;

				cout << "-------------------------------" << endl;


			}
			system("pause");
			system("cls");

			cout << "Desea modificar las citas?" << endl << endl;
			cout << "1.- Si" << endl;
			cout << "2.- No" << endl;
			cin >> opcion;
			if (opcion >= 2) {
				return 0;
			}

			system("cls");
			
		     	cout << "ingrese el Id de la cita a editar:" << endl;
			    cin >> idEditar;
				cout << "Favor de ingresar el nombre del paciente" << endl << endl;
				cin >> datos[idEditar].paciente;

				cout << "Favor de ingresar la fecha de la cita (solo numeros utilizando el siguiente formato * Ejemplo: 00/00/00 *)" << endl << endl;
				cin >> datos[idEditar].fecha;

				cout << "ingrese la hora del tratamiento (solo numeros usando las 24 horas), * Ejemplo: 13:32 *" << endl << endl;
				cin >> datos[idEditar].hora;
				cout << "Favor de ingresar el tipo de tratamiento " << endl << endl;
				cin >> datos[idEditar].tratamiento;

				cout << "ingrese la descripcion del tratamiento" << endl << endl;
				cin >> datos[idEditar].descripcion;

				cout << "ingrese la cantidad de tratamiento requerido" << endl << endl;
				cin >> datos[idEditar].CT;

				cout << "ingrese el precio unitario del tratamiento" << endl << endl;
				cin >> datos[idEditar].PUT;



				system("cls");

				for (int i = 0; i < 3; i++) {
					cout << "ID: " << i << endl;

					cout << "nombre del paciente: ";
					cout << datos[i].paciente << endl;

					cout << "tratamiento a realizar: ";
					cout << datos[i].tratamiento << endl;

					cout << "fecha citada: ";
					cout << datos[i].fecha << endl;

					cout << "hora citada: ";
					cout << datos[i].hora << endl;

					cout << "Descripcion del tratamiento: ";
					cout << datos[i].descripcion << endl;

					cout << "Cantidad de tratamiento: ";
					cout << datos[i].CT << endl;

					cout << "Precio unitario: ";
					cout << datos[i].PUT << endl;

					cout << "Precio Total: ";
					cout << datos[i].PT << endl;

					cout << "-------------------------------" << endl;


				}




			} while (idEditar == 1);
			cout << "¿Salir?" << endl;
			cout << "1.- Si" << endl;
			cout << "2.- No" << endl;
			cin >> repetidor;
			while (repetidor == 1)
				return 0;
			break;
	

	case 3: break;

	case 5:
		if (opcion >= 6) {
			system("cls");
			cout << "se ha limpiado la pantalla" << endl;
			cout << "presione una tecla para salir" << endl << endl << endl;
			system("pause");
			

		}

	} 
}  
