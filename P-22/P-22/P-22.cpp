// P-22.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

void Binario(int n) 
{
    if (n > 1) 
    {
        Binario(n / 2);
    }
    cout << n % 2;
}

int main() 
{
    int numero;
    bool otra_vez = true;

    setlocale(LC_ALL, "es_MX.UTF-8");
    while (otra_vez == true)
    {
        system("cls");
        cout << "Ingresa un numero" << endl;
        cin >> numero;

        cout << "El número en binario es: ";
        if (numero == 0)
        {
            cout << "0";
        }
        else if (numero < 0)
        {
            numero * -1;
            Binario(-numero);
        }
        else
        {
            Binario(numero);
        }
        cout << endl;
        cout << "Le gustaria hacer algo mas? (1 si 0 no)" << endl;
        cin >> otra_vez;
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
