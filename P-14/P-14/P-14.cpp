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
        for (int mel = 1000; mel > 0; mel--)
        {
            system("cls");
            cout << "Haciendo cuenta regresiva en " << mel;            
        }
        while (mil > 0)
        {
            mil--;
            system("cls");
            cout << "Haciendo cuenta regresiva en " << mil;
        }
        do
        {
            miluno--;
            system("cls");
            cout << "Haciendo cuenta regresiva en " << miluno;
        } while (miluno > 0);
        break;
    case 2:
        for (int a = 0; a < 10; ++a) 
        {
            for (int a = 0; a < 10; ++a) 
            {
                diez[a][a] = a * 10 + a;
            }
        }
        for (int x = 0; x < 100; x+=10) 
        {
            for (int a = 0; a < 10; ++a) 
            {
                cout <<x+a<< "\t";
            }
            cout << endl;
        }
        break;
    case 3:
        for (int lento = 0; lento <= cuenta; ++lento) 
        {
            cout << lento << endl;
            this_thread::sleep_for(chrono::seconds(1));            
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
