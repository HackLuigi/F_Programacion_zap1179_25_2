 // Practica_12_Mas_bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <locale>
#include <cstdlib>
using namespace std;

int main()
{
    int Numero = 100;
    int Numero_while = 0;
    int Decision;
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "Eliga lo que le gustaria hacer 1-cuenta ascendente 2-vidas" << std::endl;
    std::cin >> Decision;
    switch (Decision)
    {
    case 1:
        while (Numero_while <= 100)
        {
            system("Color 1c");
            system("cls");
            Numero_while++;
            std::cout << "Empezando cuenta ascendente de " << Numero_while << std::endl;
        }
        break;

    case 2:
        for (int b = 5; b > 0; b--)
        {
            system("cls");
            std::cout << "Tienes " << b << " vidas, oprime el boton correcto y podras ganar... \n";
            system("Color 2d");
            system("Color 4c");
            std::cout << "Jaja, te moriste por manco";
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
