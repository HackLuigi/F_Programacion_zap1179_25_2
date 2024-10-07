// Practica_3_Mayor_que_menor_que.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <locale>

int main()
{
    setlocale(LC_ALL, "en_US");
    int n1 = 0;
    int n2 = 0;

    std::cout << "Ingrese dos numeros diferentes\n" << std::endl;
    std::cin >> n1;
    std::cin >> n2;
    if (n1 > n2)
    {
        std::cout << n1 << " Es mayor que " << n2 << std::endl;
    }
    else
    {
        std::cout << n1 << " Es menor que " << n2 << std::endl;
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
