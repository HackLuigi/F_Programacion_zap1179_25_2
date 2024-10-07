// Practica_1_Hola_Mundo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Ruben Narro
// Este archivo contiene la funcion
// "main". La ejecucion del programa
// Comienza y termine ahi
// Hablaremos con el usuario mediante
// STD: :COUT << " ";

#include <iostream>
#include <math.h>
#include <time.h>
#include <locale>//Libreria para cambiar idiomas
#include <codecvt>//Librerias para cambiar codigos de UTF
#include <locale.h>//head file que solo funciona en windows

long int main()
{
	//Maneras de configurar para que soporte ñ y acentos
	setlocale(LC_ALL, "en-US");
	std::locale::global(std::locale("en_US.UTF-8"));
	setlocale(LC_ALL, "es_MX.UTF-8");
	//\n es un salto en linea
	//std_::endl;  
	std::cout << "Hola nuevo usuario! Bienvenido a tu nuevo sistema FunctionOS, dejame hacerte algunas preguntas\n";
	//Inicializaremos las variables de diferentes tipos
	//Tipo Nombre = Valor asignado de declaracion o inicialización
	int Edad = 0;
	float Altura = 0;
	//Para guardar VERDADES O FALSEDADES
	bool Me_amas = false;
	//Para guardar numeros REALMENTE EXTENSOS
	double Exponencial = 0;
	//Para guardar letras!!
	char sexo = ' ';
	//Para guardar cadenas de caracteres osea muchas letras
	char nombre[15] = " ";
	std::string name = "";

	//Hablemos con el usuario y solicitemos la información.
	std::cout << "Cuántos años tienes? ";
	//Para recibir datos del usuario necesitamos utilizar el protocolo de entrada de datos
	//STD::CIN >> Variable donde se guardarán los datos.
	std::cin >> Edad;
	std::cout << "Entonces tienes: " << Edad << " años, super! " << std::endl;
	std::cout << "Cual es tu nombre?" << std::endl;
	std::cin >> nombre;
	std::cout << "Entonces te llamas " << nombre << " que bien!" << std::endl;
	std::cout << "Cual es tu altura? " << std::endl;
	std::cin >> Altura;
	std::cout << "Tu altura es " << Altura << " confirmado" << std::endl;
	std::cout << "Ingresar Sexo" << std::endl;
	std::cin >> sexo;
	std::cout << "Sexo confirmado como " << sexo << " correctamente" << std::endl;
	std::cout << "Ingrese numeros de mas de 10 digitos de los que quiera" << std::endl;
	std::cin >> Exponencial;
	std::cout << "Entonces, eres " << nombre << " edad de " << Edad << " años, " << sexo << Altura << "Y eligio su numero de mas de 10 digitos como " << Exponencial << " bienvenido y disfrute de su sistema FunctionOS" << std::endl;
	std::cout << "Ahora, pasemos a hacer equaciones con esta informacion" << std::endl;
	std::cout << "Su edad en 10 años seria " << Edad + 10 << std::endl;
	std::cout << "Su edad hace 10 años fue " << Edad - 10 << std::endl;
	std::cout << "Su edad cuando pasen ese mismo tiempo sera " << Edad * 2 << std::endl;
	std::cout << "Su edad si se divide sera " << Edad / 2 << std::endl;
	std::cout << "Con los numeros que eligio, si las ponemos con su raiz seria " << sqrt(Exponencial) << std::endl;
	std::cout << "Con los numeros que eligio, su potencia seria " << pow(Exponencial, (Edad)) << std::endl;
	std::cout << "Usuario ¿Me amas?" << std::endl;
	std::cin >> Me_amas;
	if (Me_amas == true)
	{
		std::cout << "Muchas gracias... Usuario, guardare esta informacion bien";
	}
	else
	{
		std::cout << "XD";
	}
}