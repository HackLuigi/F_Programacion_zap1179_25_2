// Practica_10_Mas_condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>

int main()
{
    int decision;
    int adivinacion;
    bool pregunta = false;
    bool pregunta_2 = false;
    bool pregunta_3 = false;
    bool otra_vez = true;
    setlocale(LC_ALL, "es_MX.UTF-8");
    while (otra_vez == false)
    std::cout << "Empecemos ¿Que te gustaria adivinar? (Personas del salon 1. Animales 2. Comida 3. Juegos 4.)\n";
    std::cin >> decision;
    switch (decision)
    {
    case 1:
        std::cout << "¿Tu persona del salon tiene barba? (1 si 0 no)" << std::endl;
            std::cin >> adivinacion;
            if (pregunta == true)
            {
                std::cout << "¿Tu persona del salon tiene lentes?" << std::endl;
                std::cin >> pregunta_2;
                if (pregunta_2 == true)
                {
                    std::cout << "a";
                }
                else
                {
                    std::cout << "¿Tu persona del salon tiene un bigote junto con su barba?";
                }
            }
            else
            {
                std::cout << "¿Tu persona del salon tiene lentes?" << std::endl;
                std::cin >> pregunta_2;
                if (pregunta_2 == true)
                {
                    std::cout << "¿Tu persona del salon tiene lentes?";
                }
                else
                {
                    std::cout << "No hay nadie en el salon sin barba y lentes aqui";
                }
            }
        break;

    case 2:

        break;

    case 3:

        break;

    case 4:

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