// P-17.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>
#include <locale>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));;
    setlocale(LC_ALL, "es_MX.UTF-8");
    int Matriz[3][3];
    int Matriz2[5][5];
    int Matriz3[10][10];
    int decision;
    cout << "Elija lo que le gustaria ver 1. [3][3] 2. [5][5] 3. [10][10]" << endl;
    cin >> decision;
    switch (decision)
    {
    case 1:
        for (int x = 0; x < 3; x++)
        {
            for (int y = 0; y <= 2; y++)
            {
                Matriz[x][y] = rand() % 9 + 1;
            }
        }
        for (int x = 0; x < 3; x++)
        {
            for (int y = 0; y <= 2; y++)
            {
                std::cout << "|" << Matriz[x][y] << "|";
            }
            std::cout << "\n";
        }
        break;
    case 2:
        for (int x = 0; x < 5; x++)
        {
            for (int y = 0; y <= 5; y++)
            {
                Matriz2[x][y] = rand() % 9 + 1;
            }
        }
        for (int x = 0; x < 5; x++)
        {
            for (int y = 0; y <= 5; y++)
            {
                std::cout << "|" << Matriz2[x][y] << "|";
            }
            std::cout << "\n";
        }
        break;
    case 3:
        for (int x = 0; x < 10; x++)
        {
            for (int y = 0; y <= 10; y++)
            {
                Matriz3[x][y] = rand() % 9 + 1;
            }
        }
        for (int x = 0; x < 10; x++)
        {
            for (int y = 0; y <= 10; y++)
            {
                std::cout << "|" << Matriz3[x][y] << "|";
            }
            std::cout << "\n";
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