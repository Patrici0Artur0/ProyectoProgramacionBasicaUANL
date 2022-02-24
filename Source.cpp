#include <iostream>
#include <string>

using namespace std;

int main() {

	//variables

	int opcion, repetidor1, repetidor2;
	char paciente[10000];



	//menú

	cout << "*Bienvenido*" << endl << endl << endl;
	cout << "-----Ingrese una opcion-----" << endl << endl;
	cout << "1.- Agendar cita" << endl;
	cout << "2.- Salir" << endl;

	cin >> opcion;

	switch (opcion) {
	case 1:
		do {
			cout << "Favor de ingresar su nombre" << endl;
			cin.ignore();
			cin.getline(paciente, 10000, '\n');
			cout << "¿ingresar otra cita?" << endl << endl;

			cout << "1.- Si" << endl;
			cout << "2.- No" << endl;
			cin >> repetidor2;



		} while (repetidor2 == 1);
		cout << "¿Salir?" << endl;
		cout << "1.- Si" << endl;
		cout << "2.- No" << endl;
		cin >> repetidor1;
		while (repetidor1 == 1)
			return 0;
		break;


	}

	system("pause");

}