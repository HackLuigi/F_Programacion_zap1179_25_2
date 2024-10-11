// Practica_6_Repaso_Entrada_y_Salida_de_datos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <locale>

int main()
{
    int decision;
    int Edad;
    bool Spam = false;
    bool DLC = false;
    std::string usuario = "";
    std::string contra = "";
    std::string new_usuario = "";
    std::string contra_new_usuario = "";
    std::string cuenta_usuario = "Noobmaster69";
    std::string contra_usuario = "Vengador_unidos123";
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "Sarai esta a 5 kilometros y quiere conocerte" << std::endl;
    std::cin >> Spam;
    if (Spam == true)
    {
        std::cout << "Redireccionando, doxxeando e infectando computadora";
    }
    else
    {
        std::cout << "Bienvenido a Albion Online ñ, el MMORPG no lineal donde no tienes un camino prefijado ¿Te gustaria iniciar sesion (2) o crear una nueva cuenta (1)?" << std::endl;
        std::cin >> decision;
        switch (decision)
        {
        case 1:
            std::cout << "Ok, ingrese porfavor un nuevo usuario" << std::endl;
            std::cin >> new_usuario;
            if (new_usuario == cuenta_usuario)
            {
                std::cout << "Este usuario ya ha sido elegido, porfavor, eliga otro";
                break;
            }
            else
            {
                std::cout << "Eliga una contraseña porfavor" << std::endl;
                std::cin >> contra_new_usuario;
                std::cout << "Ya casi esta, solo necesitamos que digas tu edad y estaras listo para el juego" << std::endl;
                std::cin >> Edad;
                if (Edad < 18)
                {
                    std::cout << "Este juego no esta permitido para personas menores de 18 años, asi que no puede crear una cuenta, una disculpa";
                    break;
                }
                else
                {
                    std::cout << "Antes de empezar ¿Te gustaria desbloquear la edicion digital deluxe director's cut ultimate edition?" << std::endl;
                    std::cin >> DLC;
                        if (DLC == true)
                        {
                            std::cout << "Redireccionando a la pagina de steam para comprar DLC";
                            break;
                        }
                        else
                        {
                            std::cout << "Bienvenido a Albion online " << new_usuario << " y preparate para tener  una de las aventuras mas grandes de tu vida";
                            break;
                        }
                }
            }
        case 2:
            std::cout << "Ingrese su usuario" << std::endl;
            std::cin >> usuario;
            if (usuario == cuenta_usuario)
            {
                std::cout << "Bienvenido " << cuenta_usuario << " ingresa tu contraseña" << std::endl;
                std::cin >> contra;
                if (contra == contra_usuario)
                {
                    std::cout << "Bienvenido otra vez " << cuenta_usuario << " y preparate para volver a tu aventura";
                    break;
                }
                else
                {
                    std::cout << "Contraseña incorrecta, cerrando para tomar medidas de seguridad";
                    break;
                }
            }
            else
            {
                std::cout << "Usuario no reconocido";
                break;
            }
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
