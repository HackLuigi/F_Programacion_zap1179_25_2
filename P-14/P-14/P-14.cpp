// P-14.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <locale>
#include <thread>
#include <chrono>
#include <cstdlib>
using namespace std;

int main()
{
    int decision;
    int mil = 1000;
    int miluno = 1000;
    int diez[10][10];
    int cuenta = 100;

    setlocale(LC_ALL, "es_MX.UTF - 8");
    cout << "Porfavor, eliga que hacer 1. Cuenta regresiva 3 loops 2. 10x10 3. Cronometroo lento" << endl;
    cin >> decision;
    switch (decision)
    {
    case 1:
        while (mil > 0)
        {
            mil--;
            cout << "Haciendo cuenta regresiva en " << mil;
            system("cls");
        }
        do
        {
            miluno--;
            cout << "Haciendo cuenta regresiva en " << miluno;
            system("cls");
        } while (miluno > 0);
        for (int mel = 1000; mel > 0; mel--)
        {
            cout << "Haciendo cuenta regresiva en " << mel;
            system("cls");
        }
        break;
    case 2:
        for (int i = 0; i < 10; ++i) 
        {
            for (int j = 0; j < 10; ++j) 
            {
                diez[i][j] = i * 10 + j;
            }
        }
        for (int i = 0; i < 10; ++i) 
        {
            for (int j = 0; j < 10; ++j) 
            {
                cout << diez[i][j] << "\t";
            }
            cout << endl;
        }
        break;
    case 3:
        for (int i = 0; i <= cuenta; ++i) 
        {
            cout << i << endl;
            this_thread::sleep_for(chrono::seconds(1));
            system("cls");
        }
        break;
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
