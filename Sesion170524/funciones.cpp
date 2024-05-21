#include <iostream>
#include "variables.h"
using namespace std;

int option;

int menu()
{
    int option;
    system("cls||clear");
    cout << "1. Ingresar notas" << endl;
    cout << "2. Mostrar notas" << endl;
    cout << "3. Nota mas alta" << endl;
    cout << "4. Nota mas baja" << endl;
    cout << "5. Promedio" << endl;
    cout << "6. Salir" << endl;
    cin >> option;
    return option;
}

void addGrade()
{
    if (position < MAX)
    {
        cout << "Ingrese la nota: ";
        cin >> grades[position];
        position++;
    }
    else
    {
        cout << "No hay espacio para mas notas" << endl;
    }
}

void showGrades(){
    cout << "Mostrar notas" << endl;
    for (int i = 0; i < position; i++)
    {
        cout << "Nota" << i + 1 << ":" << grades[i] << endl;
    }
}

void highestGrade(){
    int highest = grades[0];
        for (int i = 1; i < position; i++)
        {
            if (grades[i] > highest)
            {
                highest = grades[i];
            }
        }
        cout << "La nota mas alta es: " << highest << endl;
    }
void lowestGrade(){
    int lowest = grades[0];
    for (int i = 1; i < position; i++){
        if (grades[i] < lowest)
        {
            lowest = grades[i];
        }
    }
      cout << "La nota mas baja es: " << lowest << endl;
}

void calculateAverage()
{
    double suma = 0.0;
    for (int i = 0; i < position; i++)
    {
        suma += grades[i];
    }
    double promedio = suma / position;
    cout << "El promedio de las notas es: " << promedio << endl;
}
void start() {
    int option;
    while (option != 6) {
        option = menu();
        switch (option) {
            case 1:
                cout << "Ingresar notas" << endl;
                addGrade();
                system("pause");
                break;
            case 2:
                showGrades();
                system("pause");
                break;
            case 3:
                cout << "Nota mas alta" << endl;
                highestGrade();
                system("pause");
                break;
            case 4:
                cout << "Nota mas baja" << endl;
                lowestGrade();
                system("pause");
                break;
            case 5:
                cout << "Promedio" << endl;
                calculateAverage();
                system("pause");
            case 6:
                cout << "Salir" << endl;
                system("pause");
                break;
            default:
                cout << "Opción no válida" << endl;
                break;
        }
    }
}