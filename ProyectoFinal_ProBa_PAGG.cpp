#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <vector>
#include <fstream>
using namespace std;
void Altas();
void modificar();
void eliminar();
void lista();
void archivo();
string* paciente, * tratamiento, * hora, * descripcion;
int Alta;
float* cant, * precio, * total, * sub, * IVA;
int main()
{
	int opcion;
	cout << "Bienvenidos al consultorio UANL" << endl;
	cout << "1-Agendar cita" << endl;
	cout << "2-Modificar cita" << endl;
	cout << "3-Eliminar cita" << endl;
	cout << "4-Lista de citas vigentes" << endl;
	cout << "5-Limpiar pantalla" << endl;
	cout << "6-Salir" << endl;
	cin >> opcion;
	system("cls");

	switch (opcion)
	{
	case 1:
		Altas();
		return main();
		break;

	case 2:
		modificar();
		return main();
		break;

	case 3:
		eliminar();
		return main();
		break;

	case 4:
		lista();
		return main();
		break;

	case 5:
		system("cls");
		return main();
		break;

	case 6:
		archivo();
		break;
	}
}
void Altas()
{
	cout << "Digite el numero de citas que desea dar de alta" << endl;
	cin >> Alta;
	paciente = new string[Alta]; //arreglo
	hora = new string[Alta];
	tratamiento = new string[Alta];
	descripcion = new string[Alta];
	precio = new float[Alta];
	cant = new float[Alta];
	sub = new float[Alta];
	IVA = new float[Alta];
	total = new float[Alta];
	for (int i = 0; i < Alta; i++)
	{
		cin.ignore();
		cout << "Ingrese nombre del paciente" << endl;
		getline(cin, paciente[i]);;
		cout << "Ingrese hora (en formato 24hrs)" << endl;
		cin >> hora[i];
		cin.ignore();
		cout << "Ingrese nombre del tratamiento" << endl;
		getline(cin, tratamiento[i]);
		cin.ignore();
		cout << "Ingrese descripcion" << endl;
		getline(cin, descripcion[i]);
		cout << "ingresa el precio del tratamiento" << endl;
		cin >> precio[i];
		cout << "ingresa la cantidad del tratamiento" << endl;
		cin >> cant[i];
		sub[i] = precio[i] * cant[i];
		cout << "El subtotal es $" << sub[i] << endl;
		IVA[i] = sub[i] * .16;
		cout << "El iva es $" << IVA[i] << endl;
		total[i] = sub[i] * 1.16;
		cout << "el total es de: $ " << total[i] << endl;
		system("pause");
		system("cls");
	}

}
void modificar()
{
	int r, opcion, i;
	cout << "Ingrese la cita a modificar" << endl;
	cin >> r;
	r = r - 1;
	cout << "Ingrese lo que corresponda" << endl;
	cout << "1.- Nombre" << endl;
	cout << "2.-Tratamiento" << endl;
	cout << "3.-Hora" << endl;
	cout << "4.-Descripcion" << endl;
	cout << "5.-Precio unitario" << endl;
	cout << "6.-Cantidad de tratamiento" << endl;
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		i = r;
		while (getchar() != '\n');
		cout << "Ingrese nombre" << endl;
		getline(cin, paciente[i]);

		break;
	case 2:
		i = r;
		while (getchar() != '\n');
		cout << "Ingrese tratamiento" << endl;
		getline(cin, tratamiento[i]);
		break;

	case 3:
		i = r;
		cout << "Ingrese hora" << endl;
		cin >> hora[i];

	case 4:
		i = r;
		while (getchar() != '\n');
		cout << "Ingrese descripcion" << endl;
		getline(cin, descripcion[i]);

	case 5:
		i = r;
		cout << "ingresa precio unitario del tratamiento" << endl;
		cin >> precio[i];

	case 6:
		i = r;
		cout << "ingresa la catidad del tratamiento" << endl;
		cin >> cant[i];

	}
}
void eliminar()
{
	int j;
	cout << "ingrese el  registro a eliminar";
	cin >> j;
	j = j - 1;
	for (int i = j; i == j; i++)
	{
		cout << "Eliminando registro" << j + 1 << endl;

		paciente[i] = " ";
		hora[i] = " ";
		tratamiento[i] = " ";
		hora[i] = " ";
		descripcion[i] = " ";
		cant[i] = 0;
		precio[i] = 0;
		total[i] = 0;
		sub[i] = 0;
		IVA[i] = 0;
	}
}
void lista()
{
	int i = 0;
	for (i; i < Alta; i++)
	{
		cout << 1 + i << ".-" << endl;
		cout << "Nombre del paciente: " << paciente[i] << endl;
		cout << "Hora del tratamiento: " << hora[i] << endl;
		cout << "Nombre del tratamiento: " << tratamiento[i] << endl;
		cout << "Descripcion del tratamiento: " << descripcion[i] << endl;
		cout << "Precio unitario: " << precio[i] << endl;
		cout << "Catidad del tratamiento: " << cant[i] << endl;
		cout << "Subtatal de $" << sub[i];
		cout << "Impuesto de valor agregado $" << IVA[i];
		cout << "Con un total de: " << total[i] << endl;
		system("pause");
		system("cls");

	}
}
void archivo()
{
	ofstream archivo;
	float cout1;
	string cout2;


	archivo.open("citas.txt", ios::out);

	if (archivo.fail())
	{
		cout << "ERROR NO SE PUDO CREAR EL ARCHIVO";
		exit(1);
	}

	archivo << "No. de cita" << "\t";
	archivo << "Nombre" << "\t" << "\t" << "\t" << "\t";
	archivo << "Hora" << "\t" << "\t";
	archivo << "Tratamiento" << "\t" << "\t";
	archivo << "descripcion" << "\t" << "\t";
	archivo << "precio unitario" << "\t" << "\t";
	archivo << "catidad de tratamiento" << "\t" << "\t";
	archivo << "Subtotal" << "\t";
	archivo << "IVA" << "\t";
	archivo << "total" << "\n";

	int i = 0;
	for (i; i < Alta; i++)
	{

		archivo << i + 1 << ".-  " << "\t" << "\t";
		cout2 = paciente[i];
		archivo << cout2 << "\t";
		cout2 = hora[i];
		archivo << cout2 << "\t";
		cout2 = tratamiento[i];
		archivo << cout2 << "\t" << "\t" << "\t";
		cout2 = descripcion[i];
		archivo << cout2 << "\t" << "\t" << "\t";
		cout1 = precio[i];
		archivo << cout1 << "\t" << "\t";
		cout1 = cant[i];
		archivo << cout1 << "\t" << "\t" << "\t" << "\t";
		cout1 = sub[i];
		archivo << cout1 << "\t";
		cout1 = IVA[i];
		archivo << cout1 << "\t";
		cout1 = total[i];
		archivo << cout1 << "\t" << "\n";
	}
	archivo.close();
}