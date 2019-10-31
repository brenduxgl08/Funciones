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
			pausa();
			break;
		case '2':
			system("cls");
			cout << "Has elejido Restar" << endl;
			pausa();
			break;
		case '3':
			system("cls");
			cout << "Has elejido Multiplicar" << endl;
			pausa();
			break;
		case '4':
			system("cls");
			cout << "Has elejido Dividir" << endl;
			pausa();
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

}
int resta()
{

}
int multi()
{

}
int divi()
{

}
void pausa()
{
	cout << "Pulsa una tecla para continuar...";
}