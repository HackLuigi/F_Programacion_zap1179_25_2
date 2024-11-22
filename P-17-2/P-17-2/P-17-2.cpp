// P-17-2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

int main() 
{
    int matriz3x3[3][3];
    int matriz5x5[5][5];
    int matriz10x10[10][10];
    int decision;
    bool otra_vez = true;

        srand(time(0));

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            matriz3x3[i][j] = rand() % 11;
        }
    }
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            matriz5x5[i][j] = rand() % 11;
        }
    }
    for (int i = 0; i < 10; i++) 
       {
        for (int j = 0; j < 10; j++) 
        {
            matriz10x10[i][j] = rand() % 11;
        }
    }
       while (otra_vez == true)
       {
           system("cls");
           setlocale(LC_ALL, "es_MX.UTF-8");
           cout << "Seleccione una matriz para mostrar: 1. 3x3 2. 5x5 3. 10x10" << endl;
           cin >> decision;
           switch (decision)
           {
           case 1:

               cout << "Matriz 3x3:" << endl;
               for (int i = 0; i < 3; i++) 
               {
                   for (int j = 0; j < 3; j++) 
                   {
                       cout << matriz3x3[i][j] << " ";
                   }
                   cout << endl;
               }
               cout << "Le gustaria hacer alguna mas?" << endl;
               cin >> otra_vez;
               break;

           case 2:

               cout << "Matriz 5x5:" << endl;
               for (int i = 0; i < 5; i++)
               {
                   for (int j = 0; j < 5; j++)
                   {
                       cout << matriz5x5[i][j] << " ";
                   }
                   cout << endl;
               }
               cout << "Le gustaria hacer alguna mas?" << endl;
               cin >> otra_vez;
               break;

           case 3:

               cout << "Matriz 10x10:" << endl;
               for (int i = 0; i < 10; i++)
               {
                   for (int j = 0; j < 10; j++)
                   {
                       cout << matriz10x10[i][j] << " ";
                   }
                   cout << endl;
               }
               cout << "Le gustaria hacer alguna mas?" << endl;
               cin >> otra_vez;
               break;
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
