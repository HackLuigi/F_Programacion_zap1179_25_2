// Practica_2_Valor_absoluto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <locale>

int main()
{
    int Numero;
    setlocale(LC_ALL, "en_us");
    std::cout << "Inserte un numero negativo porfavor" << std::endl;
    std::cin >> Numero;

    if (Numero < 0)
    {
        std::cout << "Su numero en valor absoluto seria " << Numero * -1 << " que tenga un buen dia";
    }
    else
    {
        std::cout << "Su numero no es negativo, vuelva a intentarlo";
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
