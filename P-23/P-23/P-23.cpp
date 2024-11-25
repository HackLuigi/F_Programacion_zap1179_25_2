// P-23.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

int calcularMCD(int a, int b) 
{
    if (b == 0) 
    {
        return a;
    }
    return calcularMCD(b, a % b);
}

int main() 
{
    bool otra_vez = true;
    int num1;
    int num2;

    setlocale(LC_ALL, "es_MX.UTF-8");
    while (otra_vez == true)
    {
        system("cls");
        cout << "Ingresa el primer numero" << endl;
        cin >> num1;

        cout << "Ingresa el segundo numero" << endl;
        cin >> num2;

        int mcd = calcularMCD(num1, num2);

        cout << "El Máximo Común Divisor de " << num1 << " y " << num2 << " es: " << mcd << endl;
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
