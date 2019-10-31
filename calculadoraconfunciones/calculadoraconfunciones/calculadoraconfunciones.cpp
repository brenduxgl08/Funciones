#include <string>
#include <iostream>
using namespace std;
// Declaramos prototipos de funciones
void menu();
int suma();
int resta();
int multi();
int divi();
void pausa();

int main()
{
	menu();
	return 0;
}
// Creamos funciones 
void menu()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "Calculadora con Funciones" << endl;
		cout << "-------------------------" << endl;
		cout << "\t1.-Sumar" << endl;
		cout << "\t2.-Restar" << endl;
		cout << "\t3.-Multiplicar" << endl;
		cout << "\t4.-Dividir" << endl;
		cout << "\t5.-Salir" << endl;
		cout << "Elije una opcion: ";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			cout << "Has elejido Sumar" << endl;
			suma();
			break;
		case '2':
			system("cls");
			cout << "Has elejido Restar" << endl;
			resta();
			break;
		case '3':
			system("cls");
			cout << "Has elejido Multiplicar" << endl;
			multi();
			break;
		case '4':
			system("cls");
			cout << "Has elejido Dividir" << endl;
			divi();
			break;
		case '5':
			bandera = true;
			break;
		default:
			system("cls");
			cout << "Opcion no valida" << endl;
			pausa();
			break;
		}
	} while (bandera != true);
}
int suma()
{
	int a, b, suma;
	cout << "Ingresa el primer valor: " << endl;
	cin >> a;
	cout << "Ingresa el segundo valor: " << endl;
	cin >> b;
	suma = a + b;
	cout << "La suma es: " << suma << endl;
	pausa();
	return 0;
}
int resta()
{
	int a, b, resta;
	cout << "Ingresa el primer valor: " << endl;
	cin >> a;
	cout << "Ingresa el segundo valor: " << endl;
	cin >> b;
	resta = a - b;
	cout << "La resta es: " << resta << endl;
	pausa();
	return 0;
}
int multi()
{
	int a, b, multi;
	cout << "Ingresa el primer valor: " << endl;
	cin >> a;
	cout << "Ingresa el segundo valor: " << endl;
	cin >> b;
	multi = a * b;
	cout << "La multiplicacion es: " << multi << endl;
	pausa();
	return 0;
}
int divi()
{
	int a, b, divi;
	cout << "Ingresa el primer valor: " << endl;
	cin >> a;
	cout << "Ingresa el segundo valor: " << endl;
	cin >> b;
	divi = a / b;
	cout << "La division es: " << divi << endl;
	pausa();
	return 0;
}
void pausa()
{
	cout << endl <<  "Pulsa una tecla para continuar...";
	getwchar();
	getwchar();
}