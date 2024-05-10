/*Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego encuentre y muestre el número más grande.*/
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num[10];
    int cont = 0;
    int max = INT_MIN;

    cout << "ingresa 10 numeros enteros:" << endl;
    while (cont < 10)
    {
        cout << "# " << cont + 1 << ": ";
        cin >> num[cont];
        if (num[cont] > max)
        {
            max = num[cont];
        }
        cont++;
    }
    cout << "El numero mas grande es: " << max << endl;

    cout << "Los numeros ingresados son: ";
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}