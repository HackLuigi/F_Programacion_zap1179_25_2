// Practica_13_Aun_mas_bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;

int main()
{
    string usuario;
    string usuario_2;
    string usuario_p = "Mario_64";
    string contra;
    string contra_2;
    string contra_u = "Yahoo_2";
    bool comprobacion = false;
    setlocale(LC_ALL, "es_MX.UTF-8");
    while (comprobacion == false)
    {
        system("cls");
        cout << "Usuario?" << endl;
        cin >> usuario;
        if (usuario == usuario_p)
        {
            cout << "Hazlo otra vez" << endl;
            cin >> usuario_2;
            if (usuario_2 == usuario_p)
            {
                cout << "Contraseña?" << endl;
                cin >> contra;
                if (contra == contra_u)
                {
                    cout << "Hazlo otra vez" << endl;
                    cin >> contra_2;
                    if (contra_2 == contra_u)
                    {
                        cout << "Muy bien, disfrute de su juego";
                        comprobacion = true;
                    }
                    else
                    {
                        cout << "BEEEP! Incorrecto! Vuelve a intentarlo!" << endl;
                        system("pause");
                    }
                }
                else
                {
                    cout << "BEEP! INCORRECTO! VUELVE A INTENTARLO!" << endl;
                    system("pause");
                }
            }
            else
            {
                cout << "BEEEP! Incorrecto! Vuelve a intentarlo!" << endl;
                system("pause");
            }
        }
        else
        {
            cout << "BEEEP! Incorrecto! Vuelve a intentarlo!" << endl;
            system("pause");
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