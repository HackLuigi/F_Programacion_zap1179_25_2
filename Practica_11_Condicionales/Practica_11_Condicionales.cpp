// Practica_11_Aun_mas_condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;

int main()
{
    int decision;
    int adivinacion;
    bool pregunta = false;
    bool pregunta_2 = false;
    bool pregunta_3 = false;
    bool pregunta_4 = false;
    bool pregunta_5 = false;
    bool otra_vez = false;
    setlocale(LC_ALL, "es_MX.UTF-8");
    while (otra_vez == false)
    {
        system("cls");
        cout << "Empecemos ¿Que te gustaria adivinar? (Personas del salon 1. Animales 2. Comida 3. Juegos 4.)\n";
    cin >> decision;
    switch (decision)
    {
    case 1:
        cout << "¿Tu persona del salon tiene barba? (1 si 0 no)" << endl;
        cin >> pregunta;
        if (pregunta == true)
        {
            cout << "¿Tu persona del salon tiene lentes?" << endl;
            cin >> pregunta_2;
            if (pregunta_2 == true)
            {
                cout << "Entonces esta hablando de la mayoria de nuestros compañeros aqui" << endl;
                cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                cin >> otra_vez;
            }
            else
            {
                cout << "¿Tu persona del salon tiene un bigote junto con su barba y es guapo?" << endl;
                cin >> pregunta_3;
                if (pregunta_3 == true)
                {
                    cout << "Entonces esta hablando del profesor Mauricio Cabrera" << endl;
                    cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                    cin >> otra_vez;
                }
                else
                {
                    cout << "No hay nadie en el salon sin barba, bigote y lentes aqui" << endl;
                    cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                    cin >> otra_vez;
                }
            }
        }
        else
        {
            cout << "¿Tu persona del salon tiene lentes?" << endl;
            cin >> pregunta_2;
            if (pregunta_2 == true)
            {
                cout << "Entonces esta hablando de Gonzalo" << endl;
                cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                cin >> otra_vez;
            }
            else
            {
                cout << "No hay nadie en el salon sin barba y lentes aqui" << endl;
                cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                cin >> otra_vez;
            }
        }
        break;

    case 2:
        cout << "¿Tu animal es adorable? (1 si 0 no)" << endl;
        cin >> pregunta;
        if (pregunta == true)
        {
            cout << "¿Tu animal es domesticable?" << endl;
            cin >> pregunta_2;
            if (pregunta_2 == true)
            {
                cout << "¿Tu animal muerde?" << endl;
                cin >> pregunta_3;
                if (pregunta_3 == true)
                {
                    cout << "Entonces esta hablando de los perritos" << endl;
                    cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                    cin >> otra_vez;
                }
                else
                {
                    cout << "Entonces esta hablando de los ratoncitos" << endl;
                    cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                    cin >> otra_vez;
                }
            }
            else
            {
                cout << "Entonces esta hablando de los gatitos" << endl;
                cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                cin >> otra_vez;
            }
        }
        else
        {
            cout << "¿Tu animal es grande?" << endl;
            cin >> pregunta_2;
            if (pregunta_2 == true)
            {
                cout << "¿Entonces esta hablando del resto de animales" << endl;
                cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                cin >> otra_vez;
            }
            else
            {
                cout << "Entonces esta hablando de los bichos" << endl;
                cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                cin >> otra_vez;
            }
        }
        break;

    case 3:
        cout << "¿Tu comida esta formada mayormente por carne? (1 si 0 no)" << endl;
        cin >> pregunta;
        if (pregunta == true)
        {
            cout << "¿Tu comida favorita tiene que ver con las tortillas?" << endl;
            cin >> pregunta_2;
            if (pregunta_2 == true)
            {
                cout << "Entonces esta hablando de los tacos" << endl;
                cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                cin >> otra_vez;
            }
            else
            {
                cout << "¿Tu comida favorita lleva arroz, sopa o lechuga junto a ella?" << endl;
                cin >> pregunta_3;
                if (pregunta_3 == true)
                {
                    cout << "Entonces esta hablando de la carne a la parrilla" << endl;
                    cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                    cin >> otra_vez;
                }
                else
                {
                    cout << "Entonces esta hablando de una carne sola y comun" << endl;
                    cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                    cin >> otra_vez;
                }
            }
        }
        else
        {
            cout << "¿Tu comida esta hecha con pan?" << endl;
            cin >> pregunta_2;
            if (pregunta_2 == true)
            {
                cout << "¿Tu comida tiene un poco de chocolate?" << endl;
                cin >> pregunta_3;
                if (pregunta_3 == true)
                {
                    cout << "Entonces esta hablando del pan dulce" << endl;
                    cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                    cin >> otra_vez;
                }
                else
                {
                    cout << "Entonces esta hablando de los hot cakes" << endl;
                    cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                    cin >> otra_vez;
                }
                cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                cin >> otra_vez;
            }
            else
            {
                cout << "Entonces esta hablando de las frutas y verduras" << endl;
                cout << "¿Le gustaria jugar otra vez (0 si 1 no)?" << endl;
                cin >> otra_vez;
            }
        }
        break;

    case 4:
        cout << "¿Tu juego tiene que ver con pistolas? (1 si 0 no)" << endl;
        cin >> pregunta;
        if (pregunta == true)
        {
            cout << "¿Tu juego pasa en una guerra?" << endl;
            cin >> pregunta_2;
            if (pregunta_2 == true)
            {
                cout << "Entonces esta hablando de los juegos FPS comunes" << endl;
                cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                cin >> otra_vez;
            }
            else
            {
                cout << "¿Tu juego pasa en el infierno?" << endl;
                cin >> pregunta_3;
                if (pregunta_3 == true)
                {
                    cout << "Tu juego contiene o puede contener graficos viejos?" << endl;
                    cin >> pregunta_4;
                    if (pregunta_4 == true)
                    {
                        cout << "Tu juego esta protagonizado por un humano o un robot? (1 robot, 0 humano)" << endl;
                        cin >> pregunta_5;                        
                        if (pregunta_5 == true)
                        {
                            cout << "Entonces esta hablando de Ultrakill" << endl;
                            cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                            cin >> otra_vez;
                        }
                        {
                            cout << "Entonces esta hablando de Doom" << endl;
                            cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                            cin >> otra_vez;
                        }
                    }
                    else
                    {
                        cout << "No se reconoce el juego" << endl;
                        cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                        cin >> otra_vez;
                    }
                }
                else
                {
                    cout << "Entonces esta hablando de Fortnite" << endl;
                    cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                    cin >> otra_vez;
                }
            }
        }
        else
        {
            cout << "¿Tu juego tiene espadas y magia?" << endl;
            cin >> pregunta_2;
            if (pregunta_2 == true)
            {
                cout << "¿Entonces esta hablando de los rpg" << endl;
                cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                cin >> otra_vez;
            }
            else
            {
                cout << "Entonces esta hablando de los mario" << endl;
                cout << "¿Le gustaria jugar otra vez? (0 si 1 no)" << endl;
                cin >> otra_vez;
            }
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