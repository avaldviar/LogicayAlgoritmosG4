/*Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego cuente y muestre la cantidad de números pares
e impares*/

#include <iostream>
using namespace std;
int main()
{
    int num[10];
    int cont = 0;
    int par = 0, impar = 0;

    cout << "ingresa 10 numeros enteros:" << endl;
    while (cont < 10)
    {
        cout << "# " << cont + 1 << ": ";
        cin >> num[cont];
        if (num[cont] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
        cont++;
    }
    cout << "Los numeros ingresados son: ";
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    cout << "La cantidad de # pares es: " << par << endl;
    cout << "La cantidad de # impares es: " << impar << endl;

    return 0;
}