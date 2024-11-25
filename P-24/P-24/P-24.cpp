// P-24.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale>
using namespace std;

bool Palindroma(const string& palabra, int inicio, int fin)
{
    if (inicio >= fin) 
    {
        return true;
    }
    else if (palabra[inicio] != palabra[fin]) 
    {
        return false;
    }
    return Palindroma(palabra, inicio + 1, fin - 1);
}

int main() 
{
    string palabra;
    bool otra_vez = true;

    while (otra_vez == true)
    {
        system("cls");
        cout << "Ingresa una palabra" << endl;
        cin >> palabra;

        if (Palindroma(palabra, 0, palabra.length() - 1))
        {
            cout << "La palabra es palindroma." << endl;
        }
        else
        {
            cout << "La palabra no es palindroma" << endl;
        }
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
