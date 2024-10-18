// Practica_9_Condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");    int eleccion;
    int numero_1;
    int numero_2;
    std::cout << "Eliga su ecuacion. Sumas 1. Restas 2. Multiplicaciones 3. Divisiones 4. Valores absolutos 5. Comparacion de numeros 6. Potencia 7.\n";
    std::cin >> eleccion;
    switch (eleccion)
    {
    case 1:
        std::cout << "Eliga los dos numeros que le gustaria sumar" << std::endl;
        std::cin >> numero_1;
        std::cin >> numero_2;
        std::cout << "Sus numero sumados serian " << numero_1 + numero_2 << " que tenga buen dia";

        break;

    case 2:
        std::cout << "Eliga los dos numeros que le gustaria restar" << std::endl;
        std::cin >> numero_1;
        std::cin >> numero_2;
        std::cout << "Sus numero restados serian " << numero_1 - numero_2 << " que tenga buen dia";
        break;

    case 3:
        std::cout << "Eliga los dos numeros que le gustaria multiplicar" << std::endl;
        std::cin >> numero_1;
        std::cin >> numero_2;
        std::cout << "Sus numero multiplicados serian " << numero_1 * numero_2 << " que tenga buen dia";
        break;

    case 4:
        std::cout << "Eliga los dos numeros que le gustaria dividir" << std::endl;
        std::cin >> numero_1;
        std::cin >> numero_2;
        std::cout << "Sus numero divididos serian " << numero_1 / numero_2 << " que tenga buen dia";
        break;

    case 5:
        std::cout << "Eliga el numero negativo que le gustaria transformar a valor absoluto" << std::endl;
        std::cin >> numero_1;
        std::cout << "Su numero en valor absoluto seria " << numero_1 * -1 << " que tenga buen dia";
        break;

    case 6:
        std::cout << "Eliga los dos numeros que le gustaria comparar" << std::endl;
        std::cin >> numero_1;
        std::cin >> numero_2;
        if (numero_1 == numero_2)
        {
            std::cout << "Los dos numeros son iguales";
        }
        else if (numero_1 < numero_2)
        {
            std::cout << numero_1 << " es menor que " << numero_2;
        }
        else
        {
            std::cout << numero_1 << " es mayor que " << numero_2;
        }
        break;
    case 7:
    {
        std::cout << "Porfavor ingrese los numeros que le gustaria elevar a la potencia (el primer numero es el que se eleva y el segundo el que elevara)" << std::endl;
        std::cin >> numero_1;
        std::cin >> numero_2;
        std::cout << "Sus numero a la potencia seria " << pow(numero_1, numero_2) << " que tenga buen dia";
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
