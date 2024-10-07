#include <iostream>
#include <math.h>
#include <locale>
#include <string>

long int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    bool Ejercicio = false;
    bool Comer_salud = false;
    bool Dormir = false;
    std::string Nombre_completo;
    std::string Comida;
    std::string Chatarra = "Galletas, papas y donas";
    char sexo;
    int Edad = 0;
    int Peso = 0 * 1000;
    float altura = 0 * 100;

    std::cout << "Hola, soy tu doctor, porfavor, sientate, necesito hacerte unas preguntas" << std::endl;
    std::cout << "Para empezar, digame su nombre, su altura, su peso, su edad y sexo porfavor" << std::endl;
    std::getline(std::cin, Nombre_completo);
    std::cin >> altura;
    altura = altura * altura;
    std::cin >> Peso;
    std::cin >> Edad;
    std::cin >> sexo;
    std::cout << "Entonces eres " << Nombre_completo << " " << sexo << " de " << Edad << " años." << std::endl;
        std::cout << "Digame ¿Come saludable? Responda si (1) o no (0) porfavor" << std::endl;
        std::cin >> Comer_salud;
        if (Comer_salud == true)
        {
            std::cout << "Ya veo ¿Y se ejercita bien?" << std::endl;
            std::cin >> Ejercicio;
            if (Ejercicio == true)
            {
                std::cout << "Ok ¿Y duerme bien? Recuerde que 8 horas son minimo lo que el cuerpo debe dormir" << std::endl;
                std::cin >> Dormir;
                if (Dormir == true)
                {
                    std::cout << "Y ya para acabar, digame ¿Que es lo que normalmente le gusta comer cuando tiene un poco de antojo?" << std::endl;
                    std::cin >> Comida;
                    if (Comida == Chatarra)
                    {
                        std::cout << "Muy bien joven, estos son los resultados: Su IMC es " << Peso / altura << ", y parece que lleva una vida muy saludable, se ejercita y duerme bien, aunque lo de los alimentos deberia cambiarlo, aun asi lo felicito";
                    }
                    else
                    {
                        std::cout << "Muy bien joven, estos son los resultados: Su IMC es " << Peso / altura << ", y parece que lleva una vida muy saludable, se ejercita,duerme bien y come saludable, lo felicito";
                    }
                }
                else
                {
                    std::cout << "Y ya para acabar, digame ¿Que es lo que normalmente le gusta comer cuando tiene un poco de antojo?";
                    std::cin >> Comida;
                    if (Comida == Chatarra)
                    {
                        std::cout << "Muy bien joven, estos son los resultados: Su IMC es " << Peso / altura << ", Aunque tengo unos pocos problemas como con lo que come de antojo y su sueño, todo parece ir de maravilla";
                    }
                    else
                    {
                        std::cout << "Muy bien joven, estos son los resultados: Su IMC es " << Peso / altura << ", y tal vez deberiamos unos pocos cambios, como su sueño, lo demas parece estar bastante bien";
                    }
                }
            }
            else
            {
                std::cout << "Ok ¿Y duerme bien? Recuerde que 8 horas son minimo lo que el cuerpo debe dormir" << std::endl;
                std::cin >> Dormir;
                if (Dormir == true)
                {
                    std::cout << "Y ya para acabar, digame ¿Que es lo que normalmente le gusta comer cuando tiene un poco de antojo?";
                    std::cin, Comida;
                    if (Comida == Chatarra)
                    {
                        std::cout << "Muy bien joven, estos son los resultados: Su IMC es " << Peso / altura << ", y hay muchas cosas que deberiamos hacer, como el hecho que come mucho antojo, no se ejercita y come mucho antojo";
                    } 
                    else
                    {
                        std::cout << "Muy bien joven, estos son los resultados: Su IMC es " << Peso / altura << ", y aunque no diria que es lo mejor, parece que su vida esta pasable, come saludable y duerme bien";
                    }
                }
                else
                {
                    std::cout << "Y ya para acabar, digame ¿Que es lo que normalmente le gusta comer cuando tiene un poco de antojo?" << std::endl;
                    std::cin, Comida;
                    if (Comida == Chatarra)
                    {
                        std::cout << "Ok, estos son los resultados: Su IMC es " << Peso / altura << ", y casi todo esta mal, come mucho antojo, no se ejercita y duerme muy mal";
                    }
                    else
                    {
                        std::cout << "Ok, estos son los resultados: Su IMC es " << Peso / altura << ", y hay mucho por hacer, tal vez deberiamos empezar con su sueño y luego podriamos ir con su ejercitacion";
                    }
                }
            }
        }
        else
        {
            std::cout << "Ya veo ¿Y se ejercita bien?" << std::endl;
            std::cin >> Ejercicio;
            if (Ejercicio == true)
            {
                std::cout << "Ok ¿Y duerme bien? Recuerde que 8 horas son minimo lo que el cuerpo debe dormir" << std::endl;
                std::cin >> Dormir;
                if (Dormir == true)
                {
                    std::cout << "Y ya para acabar, digame ¿Que es lo que normalmente le gusta comer cuando tiene un poco de antojo?";
                    std::cin >> Comida;
                    if (Comida == Chatarra)
                    {
                        std::cout << "Muy bien joven, estos son los resultados: Su IMC es " << Peso / altura << ", y aunque lo mas importante que deberiamos cambiar es su alimentacion y sus antojos, lo demas esta bastante bien";
                    }
                    else
                    {
                        std::cout << "Muy bien joven, estos son los resultados: Su IMC es " << Peso / altura << ", y casi todo esta bien, solo deberiamos cambiar su alimentacion";
                    }
                }
                else
                {
                    std::cout << "Y ya para acabar, digame ¿Que es lo que normalmente le gusta comer cuando tiene un poco de antojo?";
                    std::cin >> Comida;
                    if (Comida == Chatarra)
                    {
                        std::cout << "Muy bien joven, estos son los resultados: Su IMC es " << Peso / altura << ", y hay muchas cosas por hacer, como su sueño, lo que come y sus antojos, parece que almenos se ejercita bien";
                    }
                    else
                    {
                        std::cout << "Muy bien joven, estos son los resultados: Su IMC es " << Peso / altura << ", y hay muchas cosas por hacer, como su sueño, y lo que come, parece que almenos se ejercita bien";
                    }
                }
            }
            else
            {
                std::cout << "Ok ¿Y duerme bien? Recuerde que 8 horas son minimo lo que el cuerpo debe dormir" << std::endl;
                std::cin >> Dormir;
                if (Dormir == true)
                {
                    std::cout << "Y ya para acabar, digame ¿Que es lo que normalmente le gusta comer cuando tiene un poco de antojo?";
                    std::cin >> Comida;
                    if (Comida == Chatarra)
                    {
                        std::cout << "Ok, estos son los resultados: Su IMC es " << Peso / altura << " y casi todo aqui esta muy mal, no se ejercita, no come saludable y come mucho antojo, pero podriamos empezar bien con su horario de sueño";
                    }
                    else
                    {
                        std::cout << "Ok, estos son los resultados: Su IMC es " << Peso / altura << " y puede que tengamos que hacer muchos cambios, como el hecho que no se ejercita y tampoco come muy saludable, pero un buen inicio es el hecho que si duerme bien y no come tanto antojo";
                    }
                }
                else
                {
                    std::cout << "Y ya para acabar, digame ¿Que es lo que normalmente le gusta comer cuando tiene un poco de antojo?";
                    std::cin >> Comida;
                    if (Comida == Chatarra)
                    {
                        std::cout << "Estos son los resultados: Su IMC es " << Peso / altura << " y dejeme preguntarle ¿Como es que sigue vivo?";
                    }
                    else
                    {
                        std::cout << "Estos son los resultados: Su IMC es " << Peso / altura << " casi todo esta hecho un desastre, hasta me impresiona le sere honesto, pero al menos no come mucho antojo, asi que es un rayo de esperanza";
                    }
                }
            }
        }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   5. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
