// P-21.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

enum Poder
{
    Nada,
    Mas_ataque,
    Mas_defensa,
    Mas_velo
};

struct Jugador 
{
    int ataque;
    int defensa;
    int velocidad;
    int salud;
    Poder powerUp;

    Jugador() 
    {
        ataque = rand() % 51;
        defensa = rand() % 51;
        velocidad = rand() % 51;
        salud = rand() % 51;
        powerUp = static_cast<Poder>(rand() % 4);
    }

    void aplicarPowerUp() 
    {
        switch (powerUp) 
        {
        case Mas_ataque:
            ataque += 10;
            break;
        case Mas_defensa:
            defensa += 10;
            break;
        case Mas_velo:
            velocidad += 10;
            break;
        default:
            break;
        }
    }

    void mostrarAtributos() 
    {
        cout << "Ataque: " << ataque << " Defensa: " << defensa << " Velocidad: " << velocidad << " Salud: " << salud << " PowerUp: ";
        switch (powerUp) 
        {
            case Mas_ataque: cout << "Aumento de Ataque"; break;
            case Mas_defensa: cout << "Aumento de Defensa"; break;
            case Mas_velo: cout << "Aumento de Velocidad"; break;
            default: cout << "Ninguno"; break;
        }
        cout << endl;
    }

    void atacar(Jugador& objetivo) 
    {
        int dano = ataque - objetivo.defensa;
        if (dano > 0) 
        {
            objetivo.salud -= dano;
            if (objetivo.salud < 0) objetivo.salud = 0;
        }
    }
};

int main() 
{
    bool si_no = true;
    setlocale(LC_ALL, "es_MX.UTF-8");
    while (si_no == true)
    {
        system("cls");
        srand(time(0));

        vector<Jugador> jugadores(20);

        for (int i = 0; i < 20; i++)
        {
            jugadores[i].aplicarPowerUp();
            cout << "Jugador " << i + 1 << " - ";
            jugadores[i].mostrarAtributos();
        }

        while (true)
        {
            int jugador1 = rand() % 20;
            int jugador2 = rand() % 20;

            while (jugador1 == jugador2)
            {
                jugador2 = rand() % 20;
            }

            cout << "Batalla entre Jugador " << jugador1 + 1 << " y Jugador " << jugador2 + 1 << endl;

            jugadores[jugador1].atacar(jugadores[jugador2]);
            jugadores[jugador2].atacar(jugadores[jugador1]);

            cout << "Jugador " << jugador1 + 1 << " Salud: " << jugadores[jugador1].salud << endl;
            cout << "Jugador " << jugador2 + 1 << " Salud: " << jugadores[jugador2].salud << endl;

            if (jugadores[jugador1].salud == 0 || jugadores[jugador2].salud == 0)
            {
                cout << "¡Un jugador ha sido eliminado!" << endl;
                break;
            }
        }

        int ganador = -1;
        for (int i = 0; i < 20; i++)
        {
            if (jugadores[i].salud > 0)
            {
                ganador = i;
                break;
            }
        }

        if (ganador != -1)
        {
            cout << "¡El ganador es el Jugador " << ganador + 1 << "!" << endl;
        }
        else
        {
            cout << "No hay ganador, todos los jugadores han sido eliminados." << endl;
        }

        cout << "¿Le gustaria hacer una batalla mas?" << endl;
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
