// P-18.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    int matriz[2][3];
    int n, m;
    int decision;
    bool otra_vez = true;
    while (otra_vez == true)
    {
        system("cls");
        cout << "Elija lo que le gustaria hacer 1. Matriz 2x3 2. Matriz dinamica" << endl;
        cin >> decision;
        switch (decision)
        {
        case 1:
            cout << "Ingrese los datos para la matriz 2x3:" << endl;
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << "Ingrese el valor para la posición [" << i << "][" << j << "]: ";
                    cin >> matriz[i][j];
                }
            }
            cout << endl;
            cout << "Matriz 2x3 ingresada:" << endl;
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << matriz[i][j] << " ";
                }
                cout << endl;
            }
            cout << "Le gustaria hacer algo mas? (0 no 1 si)" << endl;
            cin >> otra_vez;
            break;

        case 2:
            cout << "Ingrese las dimensiones de la matriz dinámica (n x m): " << endl;
            cout << "Ingrese n (filas)" << endl;
            cin >> n;
            int** matrizDinamica = new int* [n];
            cout << "Ingrese m (columnas)" << endl;
            cin >> m;
            for (int i = 0; i < n; i++)
            {
                matrizDinamica[i] = new int[m];
            }
            srand(time(0));
            cout << "Ingrese los datos para la matriz dinámica:" << endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (n > 3 || m > 3)
                    {
                        matrizDinamica[i][j] = rand() % 11;
                        cout << "Valor aleatorio ingresado en la posición [" << i << "][" << j << "]: " << matrizDinamica[i][j] << endl;
                    }
                    else
                    {
                        cout << "Ingrese el valor para la posición [" << i << "][" << j << "]: ";
                        cin >> matrizDinamica[i][j];
                    }
                }
            }
            cout << "\nMatriz dinámica ingresada:" << endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cout << matrizDinamica[i][j] << " ";
                }
                cout << endl;
            }
            for (int i = 0; i < n; i++)
            {
                delete[] matrizDinamica[i];
            }
            delete[] matrizDinamica;
            cout << "Le gustaria hacer algo mas? (0 no 1 si)" << endl;
            cin >> otra_vez;
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
