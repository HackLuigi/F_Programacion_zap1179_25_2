// Final_proyect.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <stack>
#include <math.h>
#include <algorithm>
#include <bitset>
#include <locale>
using namespace std;

void decimal_binario(int Numero) 
{
	if (Numero > 0) 
	{
		decimal_binario(Numero / 2);
		cout << (Numero % 2);
	}
	else
	{
		cout << "0";
	}
}

int binario_decimal(string binario) 
{
	int decimal = 0;
	int base = 1;

	for (int i = binario.length() - 1; i >= 0; i--) 
	{
		if (binario[i] == '1') 
		{
			decimal += base;
		}
		base *= 2;
	}
	return decimal;
}


int main()
{
	int num_1;
	int num_2;
	string bin_1;
	string bin_2;
	int resultado_d;
	int resultado_b;
	int decision;
	bool decimal_f = true;
	bool binario_f = true;
	bool forever = true;

	setlocale(LC_ALL, "es_MX.UTF-8");
	while (forever == true)
	{
		while (decimal_f == true)
		{
			system("cls");
			cout << "Eliga lo que le gustaria hacer 1. suma decimal 2. resta decimal 3. multiplicacion decimal 4. potencia decimal 5. binarios" << endl;
			cin >> decision;
			switch (decision)
			{
			case 1:
				cout << "Eliga los numeros que le gustaria ingresar" << endl;
				cin >> num_1;
				cin >> num_2;
				resultado_d = num_1 + num_2;
				cout << "Sus numeros sumados daria " << resultado_d << endl;
				system("pause");

				break;

			case 2:
				cout << "Eliga los numeros que le gustaria ingresar" << endl;
				cin >> num_1;
				cin >> num_2;
				resultado_d = num_1 - num_2;
				cout << "Sus numeros restados daria " << resultado_d << endl;
				system("pause");

				break;

			case 3:
				cout << "Eliga los numeros que le gustaria ingresar" << endl;
				cin >> num_1;
				cin >> num_2;
				resultado_d = num_1 * num_2;
				cout << "Sus numeros multiplicados daria " << resultado_d << endl;
				system("pause");

				break;

			case 4:
				cout << "Eliga los numeros que le gustaria elevar a la potencia (el primero seria el ascendido y el segundo el que lo va a ascender)" << endl;
				cin >> num_1;
				cin >> num_2;
				resultado_d = pow(num_1, num_2);
				cout << "Su numero a la potencia daria " << resultado_d << endl;
				system("pause");

				break;

			case 5: 
				decimal_f = false;
				break;
			}
		}
		while (binario_f == true)
		{
			system("cls");
			cout << "Eliga lo que le gustaria hacer 1. decimal a binario 2. respuesta decimal a binario 3. binario a decimal 4. suma de binarios 5. resta de binarios 6. multiplicacion de binarios 7. salir" << endl;
			cin >> decision;
			switch (decision)
			{
			case 1:
				cout << "Escriba el numero decimal que quiere convertir a binario" << endl;
				cin >> num_1;
				cout << "El numero en binario es ";
				decimal_binario(num_1);
				system("pause");

				break;

			case 2:
				cout << "Su anterior respuesta decimal ahora en binario es ";
				decimal_binario(resultado_d);
				system("pause");

				break;

			case 3:
				cout << "Eliga su numero en binario que le gustaria pasar a decimal" << endl;
				cin >> bin_1;
				num_1 = binario_decimal(bin_1);
				cout << "Su numero en decimal daria " << num_1 << endl;
				system("pause");

				break;

			case 4:
				cout << "Eliga los dos binarios que le gustaria sumar" << endl;
				cin >> bin_1;
				cin >> bin_2;
				num_1 = binario_decimal(bin_1);
				num_2 = binario_decimal(bin_2);
				resultado_b = num_1 + num_2;
				cout << "Sus numeros binarios sumados daria ";
				decimal_binario(resultado_b);
				system("pause");
				break;

			case 5:
				cout << "Eliga los dos binarios que le gustaria restar" << endl;
				cin >> bin_1;
				cin >> bin_2;
				num_1 = binario_decimal(bin_1);
				num_2 = binario_decimal(bin_2);
				resultado_b = num_1 - num_2;
				cout << "Sus numeros binarios restados daria ";
				decimal_binario(resultado_b);
				system("pause");

				break;

			case 6:
				cout << "Eliga los dos binarios que le gustaria multiplicar" << endl;
				cin >> bin_1;
				cin >> bin_2;
				num_1 = binario_decimal(bin_1);
				num_2 = binario_decimal(bin_2);
				resultado_b = num_1 * num_2;
				cout << "Sus numeros binarios multiplicados daria ";
				decimal_binario(resultado_b);
				system("pause");

				break;

			case 7:
				binario_f = false;
				forever = false;

				break;
			}
		}
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración
// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
