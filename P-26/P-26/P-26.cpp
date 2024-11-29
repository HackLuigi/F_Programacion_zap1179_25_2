// P-26.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std;

int producto(int a, int b) 
{
    if (b == 0) 
    {
        return 0;
    }
    else 
    {
        return a + producto(a, b - 1);
    }
}

int main() 
{
    int num1, num2;
    int resultado;
    bool si_no = true;
    
    while (si_no == true)
    {
        system("cls");
        cout << "Introduce el primer numero" << endl;
        cin >> num1;
        cout << "Introduce el segundo numero" << endl;
        cin >> num2;

        resultado = producto(num1, num2);

        cout << "El producto de " << num1 << " y " << num2 << " es: " << resultado << endl;
        cout << "Le gustaria hacer algo mas?" << endl;
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
