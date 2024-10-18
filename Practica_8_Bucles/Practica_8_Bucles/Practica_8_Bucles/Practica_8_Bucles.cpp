// Practica_8_Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <string>
#include <cstdlib>

int main()
{
    int Numero = 100;
    int Numero_while = 0;
    int Decision;
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "Buenos dias, que le gustaria hacer?" << std::endl;
    std::cout << "Eliga lo que le gustaria hacer 1-while 2-do while 3-for" << std::endl;
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
        do
        {
            system("Color 4c");
            system("cls");
            Numero--;
                std::cout << "Empezando cuenta regresiva de " << Numero << std::endl;
        } while (Numero >= 0);
            break;

    case 3:
        for (int b = 5; b > 0; b--)
        {
            system("cls");
            std::cout << "Ok Juanito, tengo que ir al baño, aqui esperame, asi que NO toques mi coleccion de armas " << b << " veces porque si no te pego y el universo se acaba... \n";
            system("Color 2d");
            std::cout << "Presiona un boton para activar...\n";
            system("pause");
            system("Color 4c");
            std::cout << "QUE HICISTE JUANITO?! AHORA TODOS VAMOS A MORIR!\n";
        }
        break;
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración
// 
// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
