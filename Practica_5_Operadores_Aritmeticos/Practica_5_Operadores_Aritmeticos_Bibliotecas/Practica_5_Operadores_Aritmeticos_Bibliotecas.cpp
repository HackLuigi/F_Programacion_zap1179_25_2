// Practica_5_Operadores_Aritmeticos_Bibliotecas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <math.h>
#include <locale>

int main()
{
    int numero_r_1 = 0;
    int numero_r_2 = 0;
    int numero_r_3 = 0;
    int numero_r_4 = 0;
    int numero_s_1;
    int numero_s_2;
    double numero_s_3;
    double numero_j = 93942578120;
    double resultado;

    setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "Porfavor, introduzca los 4 numeros que le gustaria calcular\n";
    std::cin >> numero_r_1;
    std::cin >> numero_r_2;
    std::cin >> numero_r_3;
    std::cin >> numero_r_4;
    std::cout << "Muy bien, si sumamos los primeros numeros, estos nos darian " << numero_r_1 + numero_r_2 << " y eso nos daria " << numero_r_1 + numero_r_2 - numero_r_3 << " Si es que lo restamos con el tercer numero" << std::endl;
    numero_s_1 = numero_r_1 + numero_r_2 - numero_r_3;
    std::cout << "Y si lo multiplicamos con el cuarto numero, nos daria " << numero_s_1 * numero_r_4<< std::endl;
    numero_s_2 = numero_s_1 * numero_r_4;
    std::cout << "Y ahora, si lo ascendemos en 5 (" << pow(numero_s_2, 5) << ") ahora dividamoslo contra " << numero_j << " y veamos si logra bajarlo a cero!" << std::endl;
    numero_s_3 = pow(numero_s_2,5);
    numero_s_3 / numero_j;
    resultado = numero_s_3 / numero_j;
    if (resultado < 0)
    {
        std::cout << "Felicidades! Su numero logro bajar al nuestro a 0! Se llevara nuestro gran premio! Un cupon para un Iphone 20000 gratis! Espero haya disfrutado nuestro juego!";
    }
    else
    {
        std::cout << "Oh, una disculpa, parece que su numero no ha logrado superar las expectativas, pero aun asi, tome unas galletas como consuelo por haberlo intentado";

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
