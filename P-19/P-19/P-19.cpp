// P-19.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
using namespace std;

class nodo
{
public:
    string texto;
    string entregas;
    nodo* next;
    nodo* juegos;
};
int decision;
bool decisionif = true;

void Final_fantasys(nodo* n)
{
    while (n != NULL)
    {
        cout << n->entregas << endl;
        n = n->juegos;
    }
}

void El_cuerpo(nodo* n)
{
    while (n != NULL)
    {
        cout << n->texto << endl;
        n = n->next;
    }
}

int main()
{
    cout << "Eliga que le gustaria ver (1. cuerpo 0. FF)" << endl;
    cin >> decisionif;
    if (decisionif == true)
    {
        nodo* cabeza = NULL;
        nodo* torso = NULL;
        nodo* brazos = NULL;
        nodo* pies = NULL;

        cabeza = new nodo();
        torso = new nodo();
        brazos = new nodo();
        pies = new nodo();

        cabeza->texto = "Hola (cabeza)";
        cabeza->next = torso;

        torso->texto = "soy (torso)";
        torso->next = brazos;

        brazos->texto = "un (brazos)";
        brazos->next = pies;

        pies->texto = "nodo del cuerpo (pies)";
        pies->next = NULL;

        El_cuerpo(cabeza);
    }
    else
    {
        nodo* ff1 = NULL;
        nodo* ff7 = NULL;
        nodo* ff9 = NULL;
        nodo* ff16 = NULL;
        
        ff1= new nodo();
        ff7 = new nodo();
        ff9 = new nodo();
        ff16 = new nodo();

        ff1->entregas = "Final fantasy";
        ff1->juegos = ff7;

        ff7->entregas = "Final fantasy 7";
        ff7->juegos = ff9;

        ff9->entregas = "Final fantasy 9";
        ff9->juegos = ff16;

        ff16->entregas = "Final fantasy 16";
        ff16->juegos = NULL;

        Final_fantasys(ff1);
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
