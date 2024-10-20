 // Practica_12_Mas_bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <locale>
#include <cstdlib>
using namespace std;

int main()
{
    bool Continuar = true;
    int Numero = 100;
    int Numero_while = 0;
    int Decision;
    setlocale(LC_ALL, "es_MX.UTF-8");
    cout << "Eliga lo que le gustaria hacer 1-cuenta ascendente 2-vidas" << endl;
    cin >> Decision;
    switch (Decision)
    {
    case 1:
        while (Numero_while <= 100)
        {
            system("Color 1c");
            system("cls");
            Numero_while++;
            cout << "Empezando cuenta ascendente de " << Numero_while << endl;
        }
        break;

    case 2:
        while (Continuar == true)
        {
            for (int v = 5; v > 0; v--)
            {
                system("cls");
                cout << "Tienes " << v << " vidas, oprime un boton en especifico para ganar... " << endl;
                system("Color 1f");
                cout << "Presiona un boton para activar..." << endl;
                system("pause");
                if (v < 2)
                {
                    cout << "JAJAJA! TE MORISTE POR MANCO!" << endl;
                    cout << "Continuar manco? (1 si 0 no)" << endl;
                    cin >> Continuar;
                    if (Continuar == false)
                    {
                        cout << "Bueno, tu te lo pierdes manco";
                    }
                }
            }
        }
        break;
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
