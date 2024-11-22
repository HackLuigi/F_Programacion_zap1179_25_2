// P-16.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
    string nombre[3] = { "Mario bros wii","Smash bros 64","Metal gear solid" };
    int epoca[3] = { 2009, 1999, 1998 };
    string Creador[3] = { "Shigeru Miyamoto", "Masahiro Sakurai", "Hideo Kojima" };
    string estudio[3] = { "Nintendo", "Nintendo", "Fox Studios" };
    string nombre_user[3];
    int epoca_user[3];
    string Creador_user[3];
    string estudio_user[3];
    setlocale(LC_ALL, "es_MX.UTF-8");
    for (int list1 = 0; list1 < 3; list1++)
    {
        cout << nombre[list1] << " ";
        cout << epoca[list1] << " ";
        cout << Creador[list1] << " ";
        cout << estudio[list1] << " ";
    }
    cout << endl;
    for (int list1 = 0; list1 < 3; list1++)
    {
        cout << nombre[list1] << " ";
        cout << endl;
        cout << epoca[list1] << " ";
        cout << endl;
        cout << Creador[list1] << " ";
        cout << endl;
        cout << estudio[list1] << " ";
    }
    cout << endl;
    cout << "Elija tres juegos de su gusto con sus respectivos años de creacion, creadores y estudios" << endl;
    cout << "Primer juego" << endl;
    cin >> nombre_user[0];
    cin >> epoca_user[0];
    cin >> Creador_user[0];
    cin >> estudio_user [0];
    cout << "Segundo juego" << endl;
    cin >> nombre_user[1];
    cin >> epoca_user[1];
    cin >> Creador_user[1];
    cin >> estudio_user[1];
    cout << "Tercher juego" << endl;
    cin >> nombre_user[2];
    cin >> epoca_user[2];
    cin >> Creador_user[2];
    cin >> estudio_user[2];
    system("cls");
    for (int list2 = 0; list2 < 3; list2++)
    {
        cout << nombre_user[list2] << " ";
        cout << epoca_user[list2] << " ";
        cout << Creador_user[list2] << " ";
        cout << estudio_user[list2] << " ";
    }
    for (int list2 = 0; list2 < 3; list2++)
    {
        cout << nombre_user[list2] << " ";
        cout << endl;
        cout << epoca_user[list2] << " ";
        cout << endl;
        cout << Creador_user[list2] << " ";
        cout << endl;
        cout << estudio_user[list2] << " ";
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
