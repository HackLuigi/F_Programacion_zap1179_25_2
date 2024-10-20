// Practica_10_Mas_condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí

#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool ingresar = false;
    bool mascota = false;
    int edad;
    int edad_u = 70;
    string sexo;
    string sexo_u = "M";
    string Contra_u = "XHA";
    string Contra;
    while (ingresar == false)
    {
        system("cls");
        cout << "Ok, creo que ya tienes anotada la contraseña verdad? Si no aqui te la vuelvo a escribir: XHA. Lo demas es muy obvio, tienes 70, eres Mujer o solo M y tienes un perro, buena suerte" << endl;
        cout << "Porfavor escriba la contraseña para ingresar al fornais" << endl;
        cin >> Contra;
        if (Contra == Contra_u)
        {
            cout << "Escriba su sexo porfavor" << endl;
            cin >> sexo;
            if (sexo == sexo_u)
            {
                cout << "Porfavor escriba su edad" << endl;
                cin >> edad;
                if (edad == edad_u)
                {
                    cout << "Y ya para finalizar, toca la pregunta de seguridad ¿Tiene un perro o un gato? (1 para gato y 0 para perro)" << endl;
                        cin >> mascota;
                        if (mascota == false)
                        {
                            cout << "Muy bien señora, disfrute de su partida de fornais";
                            ingresar = true;
                        }
                        else
                        {
                            cout << "Incorrecto, cerrando para tomar medidas de seguridad";
                            ingresar = true;
                        }
                }
                else
                {
                    cout << "Incorrecto, cerrando para tomar medidas de seguridad";
                    ingresar = true;
                }
            }
            else
            {
                cout << "incorrecto, cerrando para tomar medidas de seguridad";
                ingresar = true;
            }
        }
        else
        {
            cout << "No se reconoce la contraseña, intentelo denuevo" << endl;
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