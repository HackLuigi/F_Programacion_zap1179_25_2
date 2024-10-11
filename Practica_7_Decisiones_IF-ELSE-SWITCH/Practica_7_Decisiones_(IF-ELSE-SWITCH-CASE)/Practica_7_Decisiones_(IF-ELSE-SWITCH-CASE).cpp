// Practica_7_Decisiones_(IF-ELSE-SWITCH-CASE).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <math.h>
#include <locale>

int main()
{
    int batalla;
    int peleadores;
    int numero_azar;
    float resultado;
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "Bienvenido a su batalla de hosts anual! Para empezar, eliga el tipo de batalla que le guste (1 para royal rumble, 2 para eliminatoria directa y 3 para pools)\n";
    std::cin >> batalla;
    switch (batalla)
    {
    case 1:
        std::cout << "Muy bien, ahora eliga la cantidad de jugadores que pelearan (la cantidad maxima es de 30 y la minima es de 20)" << std::endl;
        std::cin >> peleadores;
        if (peleadores < 20)
        {
            std::cout << "Una disculpa, la cantidad de peleadores son menos de la que se pide, vuelva a intentarlo despues" << std::endl;
            break;
        }
        else if (peleadores > 30)
        {
            std::cout << "Una disculpa, la cantidad de peleadores son mas de la que se pide, vuelva a intentarlo despues" << std::endl;
            break;
        }
        else
        {
            std::cout << "Las eliminatorias en los royal rumbles es realmente sencillo, ya que al ser un battle royal o todos contra todos, no hay realmente una determinada cantidad de batallas especificadas para que quede uno";
            break;
        }
    case 2:
        std::cout << "Muy bien, ahora eliga la cantidad de jugadores que pelearan (la cantidad maxima es de 11 y la minima es de 5)" << std::endl;
        std::cin >> peleadores;
        if (peleadores < 5)
        {
            std::cout << "Una disculpa, la cantidad de peleadores son menos de la que se pide, vuelva a intentarlo despues" << std::endl;
            break;
        }
        else if (peleadores > 11)
        {
            std::cout << "Una disculpa, la cantidad de peleadores son mas de la que se pide, vuelva a intentarlo despues" << std::endl;
            break;
        }
        else
        {
            std::cout << "Las eliminatorias de las eliminatorias directas son muy sencillas, ya que cada ronda y pelea que pase se eliminara un peleador, asi que en este caso, habrian " << peleadores - 1 << " peleas, ya que tambien estaria la batalla final entre los 2 peleadores que quedaron";
            break;
        }
        
    case 3:
        std::cout << "Muy bien, ahora eliga la cantidad de jugadores que pelearan (la cantidad maxima es de 25 y la minima es de 20)" << std::endl;
        std::cin >> peleadores;
        if (peleadores < 20)
        {
            std::cout << "Una disculpa, la cantidad de peleadores son menos de la que se pide, vuelva a intentarlo despues" << std::endl;
            break;
        }
        else if (peleadores > 25)
        {
            std::cout << "Una disculpa, la cantidad de peleadores son mas de la que se pide, vuelva a intentarlo despues" << std::endl;
            break;
        }
        else
        {
            std::cout << "La eliminacion de los grupos o tambien llamados pools, es un poco extraña, pero es mas que nada una mezcla entre los royal rumbles y las eliminatorias directas, asi que primero tendriamos que poner a pelear a todos los peleadores en un rumble, hasta que solo queden la mitad, en este caso " << peleadores / 2 << std::endl;
            resultado = peleadores / 2;
            std::cout << "Y ahora, con eso, solo se hace las eliminatorias directas, en las que tendrian que hacer" << resultado - 1 << ", espero que tenga un buen dia";
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
