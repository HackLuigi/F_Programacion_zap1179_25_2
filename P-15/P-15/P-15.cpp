// P-15.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <locale>
#include <cstdlib>
#include <time.h>
#include <string>
using namespace std;

int main()
{
	srand(time(NULL));
	int ataque_r = rand() % 3;
	string user;
	string rival;
	string Pokemon;
	string Pokemon_r;
	string LP;
	bool ropa = false;
	bool salir = false;
	bool mote = false;
	bool batalla = true;
	bool grunido = false;
	bool grunido_r = false;
	int tipo;
	int salud = 25;
	int salud_M = 8;
	int salud_r = 25;
	int salud_LP = 9;
	int decision;
	int pelea;
	int ataque;
	int Hogar;

	setlocale(LC_ALL, "es_MX.UTF-8");
	cout << ataque_r;
	cout << "Elige" << endl;
	cout << "1. G1 2. Combate random xd" << endl;
	cin >> decision;
	switch (decision)
	{
	case 1:
			system("cls");
			cout << "Oak:Hola, soy el profesor Oak, encantado de conocerte, soy investigador de pokemones." << endl;
			system("pause");
			cout << "Oak:Los pokemones son criaturas increibles, existen en todos lados." << endl;
			system("pause");
			cout << "Oak:Y tu... Eh... Disculpa ¿Como disjiste que te llamas?" << endl;
			system("pause");
			getline(cin, user);
			cin.ignore();
			cout << "Oak:Ah, sicierto, " << user << ", bueno, como sabras, tengo un sobrino, el se llama... Emmm... ¿Me recuerdas el nombre porfavor? Es tu amigo de la infancia asi que deberias saberlo." << endl;
			getline(cin, rival);
			cin.ignore();
			cout << "Oak:Es verdad, " << rival << ", mi querido nieto." << endl;
			system("pause");
			cout << "Oak:Tengo una sorpresa para ambos, he estado planeando esto ya por muchos años, tu madre te dira que hacer mañana, pero solo te avisare." << endl;
			system("pause");
			cout << "Oak:¡Preparate para tu aventura pokemon!" << endl;
			system("pause");
			system("cls");
			cout << "Madre:HIJOOO! YA LEVANTATE!" << endl;
			cout << user << "!" << endl;
			system("pause");
			cout << "Te levantas y hablas con tu madre desde tu cuarto" << endl;
			cout << "Madre:" << user << ", hasta que por fin te levantas flojo, supongo que te acuerdas lo que te dijo el profesor ayer ¿No?" << endl;
			system("pause");
			cout << "Madre:Asi que vistete con la ropa para salir que te compre, te deberia servir bien para tu viaje, agarra tu desayuno y ve al laboratorio del profesor." << endl;
			system("pause");
			cout << "Te levantas de la cama y recuperas tu conciencia despues de un largo sueño." << endl;
			system("pause");
			while (salir == false)
			{
				system("cls");
				cout << "¿Que te gustaria hacer?" << endl;
				cout << "1. Revisar consola 2. Mirar fuera de la ventana 3. Irte 4. Vestirte" << endl;
				cin >> Hogar;
				switch (Hogar)
				{
				case 1:
					cout << "Es una Nintendo NES (Este juego no esta afiliado con Nintendo de NINGUNA manera, no me demanden porfis :,< ) la mejor consola de las primeras generaciones." << endl;
					system("pause");
					break;
				case 2:
					cout << "Revisas afuera de la ventana y miras tu pueblo, ver toda la hermosa y tranquila mañana junto a un pequeño pokemon corriendo alegremente te dan las energias para querer salir" << endl;
					system("pause");
					break;
				case 3:
					if (ropa == true)
					{
						cout << "Madre:Oh ¡Hijo mio! ¡Esa ropa te queda incredible! ¡Sabria que te gustaria y te quedaria increible!" << endl;
						system("pause");
						cout << "Madre:Muy bien, aqui tienes tu  comida, te deberia de aguantar hasta la tienda de comida mas cercana, cuidate ¿Ok? ¡Te amo hijo! ¡No lo olvides!" << endl;
						system("pause");
						salir = true;
					}
					else
					{
						cout << "Madre:Hijo, parece que todavia no usas la ropa que te compre ¡Vuelve a tu cuarto hasta que te lo pongas! ¡No vas a salir hasta que te vistas!" << endl;
						system("pause");
						cout << "Sintiendote un poco regañado, vuelves a tu cuarto." << endl;
						system("pause");
					}
					break;
				case 4:
					cout << "Te pones la ropa que te compro tu madre." << endl;
					system("pause");
					cout << "Para ser algo que te compro ella, no solo se siente muy comodo, sino que tambien se te ve realmente bien y te gusta." << endl;
					system("pause");
					ropa = true;
					break;
				}
			}
			system("cls"); 
			cout << "Despues de despedirte de tu madre, agarrar tu comida y salir de tu hogar, te encuentras con " << rival << "." << endl;
			system("pause");
			cout << rival << ":¡" << user << "! ¡Hola! ¡Hasta que porfin te levantas! ¡Ven! ¡El profesor nos esta esperando!" << endl;
			system("pause");
			cout << "Sigues a " << rival << " hasta el laboratorio del profesor Oak, donde el mismo los estaba esperando." << endl;
			system("pause");
			cout << "Oak:Oh, " << user << ", " << rival << ", finalmente llegaron, los estaba esperando." << endl;
			system("pause");
			cout << "Oak:Bueno jovenes, como ustedes sabran, ambos cumplieron la mayoria de edad, es decir, los 18, el mes pasado." << endl;
			system("pause");
			cout << "Oak:Y por eso, y como tambien necesito esclavos para mis investigaciones y se que tienen una gran chispa para ser entrenadores ¡Voila!" << endl;
			system("pause");
			cout << "Oak:¡Su propio Pokemon! Eligan bien cual les gustaria elegir, son 3 pokebolas con 1 pokemon de un tipo diferente en cada bola." << endl;
			system("pause");
			cout << "Te acercas a las 3 pokebolas, pegadas en la parte roja del circulo, hay un post-it en cada bola con el nombre y el tipo." << endl;
			system("pause");
			system("cls");
			cout << "1. Bulbasaur, un pokemon de tipo planta. 2. Charmander, un pokemon de tipo fuego. 3. Squirtle, un pokemon de tipo agua" << endl;
			cin >> tipo;
			switch (tipo)
			{
			case 1:
				Pokemon_r = "Squirtle";
				cout << "¡Has elegido a Bulbasaur!" << endl;
				system("pause");
				cout << "¿Quieres ponerle un mote a bulbasaur? (1 si 0 no)" << endl;
				cin >> mote;
				if (mote == true)
				{
					cin.ignore();
					getline(cin, Pokemon);
				}
				else
				{
					Pokemon = "Bulbasaur";
				}
				cout << "Muy bien, entonces se llamara " << Pokemon << endl;
				system("pause");
				cout << rival << ":¡Genial! ¡Yo elegi al que se llama " << Pokemon_r << "!" << endl;
				system("pause");
				cout << rival << ":¡Oye! ¡Tengo una idea! ¡Combatamos ahora mismo para ver las habilidades de nuestros pokemones!" << endl;
				system("pause");
				cout << rival << " te reta a una batalla" << endl;
				system("pause");
				cout << rival << " ha sacado a " << Pokemon_r << endl;
				system("pause");
				cout << "¡Vamos " << Pokemon << "!" << endl;
				system("pause");
				while (batalla == true)
				{
					system("cls");
					if (salud_r <= 0)
					{
						cout << "El " << Pokemon_r << " rival ha caido derrotado" << endl;
						system("pause");
						cout << "¡Felicidades! " << Pokemon << " obtiene 30 de experiencia y tu obtienes 100 P por vencer" << endl;
						system("pause");
						batalla = false;
					}
					else if (salud <= 0)
					{
						cout << rival << ":¡Si! ¡Te gane!" << endl;
						system("pause");
						batalla = false;
					}
					cout << "¿Que deberia hacer " << Pokemon << "?" << endl;
					cout << "1. Latigo cepa 2. Placaje. 3. Gruñido " << Pokemon << " " << salud << " " << Pokemon_r << " " << salud_r << endl;
					cin >> ataque;
					switch (ataque)
					{
					case 1:
						cout << Pokemon << " ha usado latigo cepa" << endl;
						salud_r -= 10;
						system("pause");
						cout << "¡Es super efectivo!" << endl;
						system("pause");
						switch (ataque_r)
						{
						case 0:
							cout << "El " << Pokemon_r << " rival ha usado pistola de agua" << endl;
							salud -= 2;
							system("pause");
							cout << "No es muy efectivo" << endl;
							break;
						
						case 1:
							cout << "El " << Pokemon_r << " rival ha usado placaje" << endl;
							salud -= 5;
							break;

						case 2:
							cout << "El " << Pokemon_r << " rival ha usado gruñido" << endl;
							if (grunido_r == false)
							break;
						}
						break;
						
					case 2:
						cout << Pokemon << " Ha usado placaje" << endl;
						salud_r -= 5;
						system("pause");
						switch (ataque_r)
						{
						case 0:
							cout << "El " << Pokemon_r << " rival ha usado pistola de agua" << endl;
							salud -= 2;
							system("pause");
							cout << "No es muy efectivo" << endl;
							break;

						case 1:
							cout << "El " << Pokemon_r << " rival ha usado placaje" << endl;
							salud -= 5;
							break;
						}
						break;

					case 3:
						cout << Pokemon << " ha usado gruñido" << endl;
						system("pause");
						if (grunido == false)
						{
							cout << "El ataque del " << Pokemon_r << " rival ha bajado";
							grunido = true;
							system("pause");
						}
						else
						{
							cout << "Pero ha fallado";
							system("pause");
						}
						break;
					}
				}
				break;

			case 2:
				Pokemon_r = "Bulbasaur";
				cout << "¡Has elegido a Charmander!" << endl;
				system("pause");
				cout << "¿Quieres ponerle un mote a Charmander? (1 si 0 no)" << endl;
				cin >> mote;
				if (mote == true)
				{
					cin.ignore();
					getline(cin, Pokemon);
				}
				else
				{
					Pokemon = "Charmander";
				}
				cout << "Muy bien, entonces se llamara " << Pokemon << endl;
				system("pause");
				cout << rival << ":¡Genial! ¡Yo elegi al que se llama " << Pokemon_r << "!" << endl;
				system("pause");
				cout << rival << ":¡Oye! ¡Tengo una idea! ¡Combatamos ahora mismo para ver las habilidades de nuestros pokemones!" << endl;
				system("pause");
				cout << rival << " te reta a una batalla" << endl;
				system("pause");
				cout << rival << " ha sacado a " << Pokemon_r << endl;
				system("pause");
				cout << "¡Vamos " << Pokemon << "!" << endl;
				system("pause");
				while (batalla == true)
				{
					system("cls");
					if (salud_r <= 0)
					{
						cout << "El " << Pokemon_r << " rival ha caido derrotado" << endl;
						system("pause");
						cout << "¡Felicidades!" << Pokemon << " obtiene 30 de experiencia y tu obtienes 100 P por vencer" << endl;
						system("pause");
						batalla = false;
					}
					else if (salud <= 0)
					{
						cout << rival << ":¡Si! ¡Te gane!" << endl;
						system("pause");
						batalla = false;
					}
					cout << "¿Que deberia hacer " << Pokemon << "?" << endl;
					cout << "1. Ascuas 2. Placaje. 3. Gruñido" << Pokemon << " " << salud << " " << Pokemon_r << " " << salud_r << endl;
					cin >> ataque;
					switch (ataque)
					{
					case 1:
						cout << Pokemon << " ha usado ascuas" << endl;
						salud_r -= 10;
						system("pause");
						cout << "¡Es super efectivo!" << endl;
						system("pause");
						cout << "El " << Pokemon_r << " rival ha usado pistola de agua" << endl;
						salud -= 2;
						system("pause");
						cout << "No es muy efectivo" << endl;
						break;

					case 2:
						cout << Pokemon << " Ha usado placaje" << endl;
						salud_r -= 5;
						system("pause");
						cout << Pokemon_r << " Ha usado placaje" << endl;
						salud -= 5;
						break;

					case 3:
						cout << Pokemon << " ha usado gruñido" << endl;
						system("pause");
						if (grunido == false)
						{
							cout << "El ataque del " << Pokemon_r << " rival ha bajado";
							grunido = true;
							system("pause");
						}
						else
						{
							cout << "Pero ha fallado";
							system("pause");
						}
						break;
					}
				}
				break;

			case 3:
				Pokemon_r = "Charmander";
				cout << "¡Has elegido a Squirtle!" << endl;
				system("pause");
				cout << "¿Quieres ponerle un mote a Squirtle? (1 si 0 no)" << endl;
				cin >> mote;
				if (mote == true)
				{
					cin.ignore();
					getline(cin, Pokemon);
				}
				else
				{
					Pokemon = "Squirtle";
				}
				cout << "Muy bien, entonces se llamara " << Pokemon << endl;
				system("pause");
				cout << rival << ":¡Genial! ¡Yo elegi al que se llama " << Pokemon_r << "!" << endl;
				system("pause");
				cout << rival << ":¡Oye! ¡Tengo una idea! ¡Combatamos ahora mismo para ver las habilidades de nuestros pokemones!" << endl;
				system("pause");
				cout << rival << " te reta a una batalla" << endl;
				system("pause");
				cout << rival << " ha sacado a " << Pokemon_r << endl;
				system("pause");
				cout << "¡Vamos " << Pokemon << "!" << endl;
				system("pause");
				while (batalla == true)
				{
					system("cls");
					if (salud_r <= 0)
					{
						cout << "El " << Pokemon_r << " ha caido derrotado" << endl;
						system("pause");
						cout << "¡Felicidades!" << Pokemon << " obtiene 30 de experiencia y tu obtienes 100 P por vencer" << endl;
						system("pause");
						batalla = false;
					}
					else if (salud <= 0)
					{
						cout << rival << ":¡Si! ¡Te gane!" << endl;
						system("pause");
						batalla = false;
					}
					cout << "¿Que deberia hacer " << Pokemon << "?" << endl;
					cout << "1. Pistola de agua 2. Placaje. 3. " << Pokemon << " " << salud << " " << Pokemon_r << " " << salud_r << endl;
					cin >> ataque;
					switch (ataque)
					{
					case 1:
						cout << Pokemon << " ha usado pistola de agua" << endl;
						salud_r -= 10;
						system("pause");
						cout << "Es muy efectivo" << endl;
						system("pause");
						cout << "El " << Pokemon_r << " rival ha usado pistola de agua" << endl;
						salud -= 2;
						system("pause");
						cout << "No es muy efectivo" << endl;
						break;

					case 2:
						cout << Pokemon << " Ha usado placaje" << endl;
						salud_r -= 5;
						system("pause");
						cout << Pokemon_r << " Ha usado placaje" << endl;
						salud -= 5;
						system("pause");
						break;

					case 3:
						cout << Pokemon << " ha usado gruñido" << endl;
						system("pause");
						if (grunido == false)
						{
							cout << "El ataque del " << Pokemon_r << " rival ha bajado";
							grunido = true;
							system("pause");
						}
						else
						{
							cout << "Pero ha fallado";
							system("pause");
						}
						break;
					}
				}
				break;
			}
			break;

	case 2:
		cout << "Elija su batalla 1. Eternatus 2. Lunala 3. Terapagos" << endl;
		cin >> pelea;
		switch (pelea)
		{
		case 1:
			LP = "Eternatus";
			cout << "Porfavor, ingrese la musica de batalla" << endl;
			cout << "https://youtu.be/6kBkP41wgkM" << endl;
			system("pause");
			system("cls");
			cout << "VAMOS METAPOOOD! SOLO TIENE " << salud_LP << " DE VIDA, DALEEEE!!!" << endl;
			system("pause");
			while (batalla == true)
			{
				if (salud_LP <= 0)
				{
					cout << LP << " ha caido derrotado" << endl;
					system("pause");
					cout << "¡Felicidades! Metapod obtiene 999 de experiencia por vencer" << endl;
					system("pause");
					batalla = false;
				}
				else if (salud_M <= 0)
				{
					cout << "Metapod cae derrotado y pierdes" << endl;
					system("pause");
					batalla = false;
				}
				cout << "¿Que deberia hacer Metapod?" << endl;
				cout << "1. Placaje 2. Super placaje 3. Refuerzo 4. Movimiento Z" << " Metapod " << salud_M << " " << LP << " " << salud_LP << endl;
				cin >> ataque;
				switch (ataque)
				{
				case 1:
					cout << "Metapod ha usado placaje" << endl;
					salud_LP =- 1;
					system("pause");
					cout << "No ha sido muy efectivo" << endl;
					system("pause");
					cout << LP << " ha usado mordisco" << endl;
					salud_M =- 1;
					system("pause");
					cout << "De alguna manera Metapod ha logrado sobrevivir la gran parte del ataque y recibir un solo punto de daño" << endl;
					system("pause");
					break;

				case 2:
					cout << "Metapod ha usado super placaje" << endl;
					salud_LP =- 2;
					system("pause");
					cout << LP << " ha usado mordisco" << endl;
					salud_M =- 1;
					system("pause");
					cout << "De alguna manera Metapod ha logrado sobrevivir la gran parte del ataque y recibir un solo punto de daño" << endl;
					system("pause");
					break;

				case 3:
					cout << "Metapod ha usado refuerzo" << endl;
					system("pause");
					cout << "Aunque parece que su defensa ha aumentado, Metapod hizo literalmente nada" << endl;
					system("pause");
					cout << LP << " ha usado rayo destructor aniquilador de mundos, pulverizando a Metapod y a ti en el proceso" << endl;
					system("pause");
					batalla = false;
					break;

				case 4:
					cout << "Para la musica de combate y cambiala por esta" << endl;
					cout << "https://youtu.be/pnQac1m55so" << endl;
					system("pause");
					cout << "Empiezas a activar tu piedra mega-evolucion, cristalicacion y gigamax, haciendo que Metapod resplandezca fuertemente." << endl;
					system("pause");
					cout << "Metapod se convierte en Mega-Metapod primigenio gigamax cristalizado PRIME, o solo Metapod PRIME para los compas" << endl;
					cout << "Finalmente usas tu movimiento Z y metapod empieza a cargar el ataque y lo lanza, siendo un poderoso y gigantesco kamehameha final, pulverizando a " << LP << " y ganando la batalla triunfalmente" << endl;
					batalla = false;
					break;
				}
			}
			break;
		case 2:
			LP = "Lunala";
			cout << "Porfavor, ingrese la musica de batalla" << endl;
			cout << "https://youtu.be/37riOeCnnpQ" << endl;
			system("pause");
			system("cls");
			cout << "VAMOS METAPOOOD! SOLO TIENE " << salud_LP << " DE VIDA, DALEEEE!!!" << endl;
			system("pause");
			while (batalla == true)
			{
				system("cls");
				if (salud_LP == 0)
				{
					cout << LP << " ha caido derrotado" << endl;
					system("pause");
					cout << "¡Felicidades! Metapod obtiene 999 de experiencia por vencer" << endl;
					system("pause");
					batalla = false;
				}
				else if (salud_M == 0)
				{
					cout << "Metapod cae derrotado y pierdes" << endl;
					system("pause");
					batalla = false;
				}
				cout << "¿Que deberia hacer Metapod?" << endl;
				cout << "1. Placaje 2. Super placaje 3. Refuerzo 4. Movimiento Z" << "Metapod " << salud_M << " " << LP << " " << salud_LP << endl;
				cin >> ataque;
				switch (ataque)
				{
				case 1:
					cout << "Metapod ha usado placaje" << endl;
					salud_LP - 1;
					system("pause");
					cout << "No ha sido muy efectivo" << endl;
					system("pause");
					cout << LP << " ha usado mordisco" << endl;
					salud_M - 1;
					system("pause");
					cout << "De alguna manera Metapod ha logrado sobrevivir la gran parte del ataque y recibir un solo punto de daño" << endl;
					system("pause");
					break;

				case 2:
					cout << "Metapod ha usado super placaje" << endl;
					salud_LP - 2;
					system("pause");
					cout << LP << " ha usado mordisco" << endl;
					salud_M - 1;
					system("pause");
					cout << "De alguna manera Metapod ha logrado sobrevivir la gran parte del ataque y recibir un solo punto de daño" << endl;
					system("pause");
					break;

				case 3:
					cout << "Metapod ha usado refuerzo" << endl;
					system("pause");
					cout << "Aunque parece que su defensa ha aumentado, Metapod hizo literalmente nada" << endl;
					system("pause");
					cout << LP << " ha usado rayo destructor aniquilador de mundos, pulverizando a Metapod y a ti en el proceso" << endl;
					system("pause");
					batalla = false;
					break;

				case 4:
					cout << "Para la musica de combate y cambiala por esta" << endl;
					cout << "https://youtu.be/pnQac1m55so" << endl;
					system("pause");
					cout << "Empiezas a activar tu piedra mega-evolucion, cristalicacion y gigamax, haciendo que Metapod resplandezca fuertemente." << endl;
					system("pause");
					cout << "Metapod se convierte en Mega-Metapod primigenio gigamax cristalizado PRIME, o solo Metapod PRIME para los compas" << endl;
					cout << "Finalmente usas tu movimiento Z y metapod empieza a cargar el ataque y lo lanza, siendo un poderoso y gigantesco kamehameha final, pulverizando a" << LP << " y ganando la batalla triunfalmente" << endl;
					batalla = false;
					break;
				}
			}
			break;
		case 3:
			LP = "Terapagos";
			cout << "Porfavor, ingrese la musica de batalla" << endl;
			cout << "https://youtu.be/zGYHfRFvuPk" << endl;
			system("pause");
			system("cls");
			cout << "VAMOS METAPOOOD! SOLO TIENE " << salud_LP << " DE VIDA, DALEEEE!!!" << endl;
			system("pause");
			while (batalla == true)
			{
				system("cls");
				if (salud_LP == 0)
				{
					cout << LP << " ha caido derrotado" << endl;
					system("pause");
					cout << "¡Felicidades! Metapod obtiene 999 de experiencia por vencer" << endl;
					system("pause");
					batalla = false;
				}
				else if (salud_M == 0)
				{
					cout << "Metapod cae derrotado y pierdes" << endl;
					system("pause");
					batalla = false;
				}
				cout << "¿Que deberia hacer Metapod?" << endl;
				cout << "1. Placaje 2. Super placaje 3. Refuerzo 4. Movimiento Z" << "Metapod " << salud_M << " " << LP << " " << salud_LP << endl;
				cin >> ataque;
				switch (ataque)
				{
				case 1:
					cout << "Metapod ha usado placaje" << endl;
					salud_LP - 1;
					system("pause");
					cout << "No ha sido muy efectivo" << endl;
					system("pause");
					cout << LP << " ha usado mordisco" << endl;
					salud_M - 1;
					system("pause");
					cout << "De alguna manera Metapod ha logrado sobrevivir la gran parte del ataque y recibir un solo punto de daño" << endl;
					system("pause");
					break;

				case 2:
					cout << "Metapod ha usado super placaje" << endl;
					salud_LP - 2;
					system("pause");
					cout << LP << " ha usado mordisco" << endl;
					salud_M - 1;
					system("pause");
					cout << "De alguna manera Metapod ha logrado sobrevivir la gran parte del ataque y recibir un solo punto de daño" << endl;
					system("pause");
					break;

				case 3:
					cout << "Metapod ha usado refuerzo" << endl;
					system("pause");
					cout << "Aunque parece que su defensa ha aumentado, Metapod hizo literalmente nada" << endl;
					system("pause");
					cout << LP << " ha usado rayo destructor aniquilador de mundos, pulverizando a Metapod y a ti en el proceso" << endl;
					system("pause");
					batalla = false;
					break;

				case 4:
					cout << "Para la musica de combate y cambiala por esta" << endl;
					cout << "https://youtu.be/pnQac1m55so" << endl;
					system("pause");
					cout << "Empiezas a activar tu piedra mega-evolucion, cristalicacion y gigamax, haciendo que Metapod resplandezca fuertemente." << endl;
					system("pause");
					cout << "Metapod se convierte en Mega-Metapod primigenio gigamax cristalizado PRIME, o solo Metapod PRIME para los compas" << endl;
					cout << "Finalmente usas tu movimiento Z y metapod empieza a cargar el ataque y lo lanza, siendo un poderoso y gigantesco kamehameha final, pulverizando a" << LP << " y ganando la batalla triunfalmente" << endl;
					batalla = false;
					break;
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
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln