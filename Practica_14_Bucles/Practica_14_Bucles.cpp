// Practica_14_Muchos_mas_bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <math.h>
#include <cstdlib>
using namespace std;

int main()
{
    int mil = 1000;
    int miluno = 1000;
    int mildos = 1000;
    int cien = 100;
    int multi;
    int cero;
    int diez = 10;
    int decision;
    bool repeticion = true;
    while (repeticion == true)
    {
        cout << "Eliga que hacer 1. 1000 a 0 2. 0 a 100 (clicker) 3. 10x10 4. 0 a 100" << endl;
        cin >> decision;
        switch (decision)
        {
         case 1:
            while (mil > 0)
            {                
                mil--;
                cout << "Haciendo cuenta regresiva en " << mil;
                system("cls");
            }
            do
            {
                miluno--;                
                cout << "Haciendo cuenta regresiva en " << miluno;
                system("cls");
            } while (miluno > 0);
            for (int mel = 1000; mel > 0; mel--)
            {                
                cout << "Haciendo cuenta regresiva en " << mel;
                system("cls");
                cout << "Regresar al menu? (1 si 0 no)" << endl;
                cin >> repeticion;
            }
            break;

         case 2:
             for (int clicker = 0; clicker < 100; clicker++)
             {
                 system("cls");
                 cout << "Hechele ganas mijo, llevas " << clicker << " clicks, se que puedes mas" << endl;
                 system("pause");
                 if (clicker >= 99)
                 {
                     cout << "Bien hecho!" << endl;
                     cout << "Regresar al menu? (1 si 0 no)" << endl;
                     cin >> repeticion;                     
                 }
             }    
             break;

         case 3:
             while (diez <= 100)
             {
                 diez * 2;
                 system("cls");
                 cout << diez;         
             }
         case 4:
             while (cien > 0)
             {                                            
                 cien--;                 
                 system("cls");
                 cout << "Haciendo cuenta regresiva en " << cien << endl;                 
             }
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
