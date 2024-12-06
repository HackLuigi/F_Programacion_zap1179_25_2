// P-FINAL.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <string>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int decision;
    int finales = 0 % 8;
    int moneda = rand() % 2;
    bool otra_vez = true;
    string player;
    string chara = "Hazuki";

    setlocale(LC_ALL, "es_MX.UTF-8");
    while (otra_vez == true)
    {
        system("cls");
        cout << "La vida es peculiar, a veces puedes tomar caminos que no esperas nunca que te hubieran aparecido, o caminos que el tu del pasado jamas hubiera tomado";
        system("pause");
        system("cls");
        cout << "Estabas pensando en esto y otras cosas mas mientras caminabas hasta que terminas chocando con un chica, cuando abres los ojos y la ves, te das cuenta que es bastante linda, tiene cabello y ojos rojos y una cara bastante amigable cuando te das cuenta que te esta observando de vuelta";
        system("pause");
        system("cls");
        cout << "???: 'Ay lo siento ¿Estas bien?'" << endl;
        cout << "1. No pasa nada, tranquila 2. ¡MALDITA TOPO! ¡FIJATE POR DONDE VAS ESTUPIDA! 3. ..." << endl;
        cin >> decision;
        switch (decision)
        {
        case 1:
            cout << "???: '¿De verdad? Ay muchas gracias, es muy caballeroso de su parte'" << endl;
            system("pause");
            system("cls");
            cout << "La chica se levanta y remueve un poco de tierra y polvo de su vestido y falda" << endl;
            system("pause");
            system("cls");
            cout << "???: 'Mi nombre es " << chara << " ¿Como se llama usted?'" << endl;
            system("pause");
            system("cls");
            cout << "'Mi nombre? Pues yo me llamo '";
            cin >> player;
            system("pause");
            system("cls");
            cout << chara << ": 'Ugh, mi ropa ya esta un poco manchada, y parece que voy a llegar un poco tarde al trabajo, pero bueno, cosas que pasan ¿No?'";
            system("pause");
            system("cls");
            cout << "'Si, cosas que pasan";
            system("pause");
            system("cls");
            cout << "Ambos de ustedes rien un poco hasta que te das cuenta que tiene un gafete con una foto de ella junto a su nombre, el diseño del gafete se te hace conocido";
            system("pause");
            system("cls");
            cout << "'Espera ¿Donde trabajas?";
            system("pause");
            system("cls");
            cout << chara << ": 'Ah, trabajo en Capcom(R)" << endl;
            cout << "1. Que curioso, yo igual 2. Guau, que innovador" << endl;
            cin >> decision;
            switch (decision)
            {
            case 1:
                cout << chara << ": '¿¡En serio!? ¡Que genial! ¿Como es que no nos hemos visto ni en la calle ni en las oficinas antes?'";
                system("pause");
                system("cls");
                cout << "'Justo cuando estaban por seguir hablando mas, tu reloj suena, señalando de que casi es hora de estar en la oficina'";
                system("pause");
                system("cls");
                cout << chara << ": '¡Ay no! Supongo que es hora de irnos ¿Porque no caminamos juntos mientras hablamos al trabajo?'" << endl;
                cout << "3. Claro, me encantaria 4. No, gracias" << endl;
                cin >> decision;
                switch (decision)
                {
                case 3:
                    cout << chara << ": 'SIII!'" << endl;
                    cout << "Despues de eso, " << chara << " y tu pasan mas tiempo juntos, conociendose y haciendose mas cercanos hasta que un dia se enamoran";
                    system("pause");
                    system("cls");
                    cout << "Final 1 de 7: Final feliz";

                    break;

                case 4:
                    cout << chara << ": 'Oh... Ok... Disculpame... Voy a tomar un atajo...'";
                    system("pause");
                    system("cls");
                    cout << chara << " abandona el lugar, dejandote solo hacia el edificio del trabajo, horas despues, cuando sales del trabajo, algo fuerte te pega y te noquea, despertando, te das cuenta que estas en lo que parece ser un pequeño apartamento y entonces aparece " << chara << ", con una macabra sonrisa en su cara";
                    system("pause");
                    system("cls");
                    cout << chara << ": 'Jeje, pensaste que escaparias de mi ¿Verdad? Pero no, no importa cuanto intentes esconderte y huir, te encontrare y obtendre";
                    system("pause");
                    system("cls");
                    cout << chara << ": 'Hagamos algo, juguemos un juego, lanzare una moneda, si da cara, te podras ir, si da cruz, tendras que morir'";
                    system("pause");
                    system("cls");
                    if (moneda == 1)
                    {
                        finales += 1;
                        cout << "Sale cara";
                        system("pause");
                        system("cls");
                        cout << chara << ": 'Diablos! Bueno, te puedes ir, pero solo por ahora, la proxima te tendre y seras mio";
                        system("pause");
                        system("cls");
                        cout << "Final 5 de 7: ESCAPA!";
                        system("pause");
                        system("cls");
                    }
                    else if (moneda == 0)
                    {

                        finales += 1;
                        cout << "Sale cruz";
                        cout << chara << ": Muy bien! Entonces, preparate para vivir por el resto de tu dolorosa vida conmigo, querido";
                        system("pause");
                        system("cls");
                        cout << "Final 6 de 7: Final malo";
                        system("pause");
                        system("cls");
                    }

                    break;
                }

                break;

            case 2:
                cout << chara << ": 'Oye, puede de que sea asi, pero al menos hago lo que me hace feliz'" << endl;
                cout << "1. Disculparse, darle la razon y hacer un chiste mas 2. Que tonta eres" << endl;
                cin >> decision;
                switch (decision)
                {
                case 1:
                    finales += 1;
                    cout << "Despues de eso, has visto a " << chara << " y hablado seguido y se hicieron buenos amigos, pero solo termino en eso, una simple y sencilla amistad y nada romantico";
                    system("pause");
                    system("cls");
                    cout << "Final 4 de 7: Amistad";
                    system("pause");
                    system("cls");

                    break;

                case 2:

                    finales += 1;
                    system("pause");
                    system("cls");
                    cout << "Despues de eso, te pega y despues no la has vuelto a ver nunca en ti vida";
                    system("pause");
                    system("cls");
                    cout << "Final 2 de 7: Grosero";
                    system("pause");
                    system("cls");

                    break;
                }
                break;
            }
            break;

        case 2:
            cout << "???: '¡Oye! ¡Eres un idiota y un agresivo! ¡Dejame en paz!" << endl;
            cout << "1. ¿Ah si? Pues chinga tu madre! 2. En serio que una sincera disculpa, es que estoy llegando tarde a mi trabajo" << endl;
            cin >> decision;
            switch (decision)
            {
            case 1:

                finales += 1;
                system("pause");
                system("cls");
                cout << "Despues de eso, te pega y no la has vuelto a ver nunca en ti vida";
                system("pause");
                system("cls");
                cout << "Final 2 de 7: Grosero";
                system("pause");
                system("cls");

                break;

            case 2:
                finales += 1;
                cout << "Justo cuando la chica te iba a pegar, se detiene";
                system("pause");
                system("cls");
                cout << "La chica respira hondo y suspira";
                system("pause");
                system("cls");
                cout << "???: 'Yo tambien me disculpo, la verdad creo que tambien me porte un poco agresiva, pero supongo que es la culpa de nuestros trabajos y horarios ¿eh?";
                cout << "Despues de eso, ambos quedaron en buenos terminos y siguieron sus caminos, y despues de eso, no la has vuelto a ver, asi que se podria decir que solo fue un encuentro curioso";
                system("pause");
                system("cls");
                cout << "Final 7 de 7: Un pequeño encuentro";
                system("pause");
                system("cls");

                break;
            }

            break;

        case 3:
            finales += 1;
            cout << "???: '¿Porque no respondes?'" << endl;
            system("pause");
            system("cls");
            cout << "Solo te alejas de la chica y nunca mas la has visto despues de eso, han pasado años, y ahora eres viejo y te das cuenta que probablemente vas a morir solo, mientras que tu mente no deja de preguntarse ¿Que hubiera pasado si le hubieras dirigido la palabra a aquella chica?" << endl;
            system("pause");
            system("cls");
            cout << "Final 3 de 7: Pesar";
            system("pause");
            system("cls");
            break;
        }
        cout << "Tienes " << finales << " de 7 finales ¿Te gustaria jugar otra vez?" << endl;

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
