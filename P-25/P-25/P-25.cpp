// P-25.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int potencia(int base, int exponente) 
{
    if (exponente == 0) 
    {
        return 1;
    }
    else 
    {
        return base * potencia(base, exponente - 1);
    }
}

int main() 
{
    int base, exponente;
    int resultado;
    bool si_no = true;
    setlocale(LC_ALL, "es_MX.UTF-8");
    while (si_no == true)
    {
        system("cls");
        cout << "Introduce la base" << endl;
        cin >> base;
        cout << "Introduce el exponente" << endl;
        cin >> exponente;

        resultado = potencia(base, exponente);

        cout << base << " elevado a " << exponente << " es " << resultado << endl;
        cout << "¿Le gustaria hacer algo mas? (1 si 0 no)" << endl;
        cin >> si_no;
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
